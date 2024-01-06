const NEWLINE = /\r?\n/;
const WS = /[\t ]+/;

module.exports = grammar({
  name: "hgrc",

  extras: ($) => [],

  conflicts: ($) => [[$.section], [$.option], [$._string]],

  rules: {
    source: ($) =>
      seq(
        optional($._statement),
        repeat(seq($._newline, $._statement)),
        optional($._newline),
      ),

    _statement: ($) => choice($.section, $.include, $.comment),

    section: ($) =>
      seq(
        $._section_header,
        repeat(seq($._newline, optional(choice($.option, $.comment)))),
      ),

    _section_header: ($) => seq("[", alias(/[^\]]+/, $.name), "]"),

    option: ($) =>
      seq($.option_name, alias(/[\t ]*=[\t ]*/, "="), optional($._value)),

    option_name: ($) => /[^=#;\n]+/,

    _value: ($) => choice($.bool, $.string),

    string: ($) => $._string,
    _string: ($) =>
      choice(
        $._interpolated_text,
        repeat1(
          seq(
            optional($._interpolated_text),
            $._newline,
            WS,
            $._interpolated_text,
          ),
        ),
      ),

    bool: ($) => choice($._bool_true, $._bool_false),

    _bool_true: ($) =>
      choice(
        caseInsensitive("true"),
        caseInsensitive("yes"),
        caseInsensitive("on"),
      ),
    _bool_false: ($) =>
      choice(
        caseInsensitive("false"),
        caseInsensitive("no"),
        caseInsensitive("off"),
      ),

    include: ($) => seq("%include", alias(/[^\n]+/, $.path)),

    comment: ($) => seq(choice("#", ";"), optional($._text)),

    _interpolated_text: ($) =>
      repeat1(choice($.escape, /[^{}\n\\]+/, $.template)),

    template: ($) => seq("{", $._expression, "}"),

    _expression: ($) =>
      seq(
        choice(
          $.keyword,
          $.function,
          $._quoted_string,
          $.number,
          $.bool,
          $._list_operator,
          $.regex,
        ),
        repeat($._filter),
        /\s*/,
      ),

    _quoted_string: ($) =>
      choice(
        alias($._single_quoted_string, $.string),
        alias($._double_quoted_string, $.string),
      ),
    _double_quoted_string: ($) =>
      seq('"', repeat(choice($.escape, /[^{}"\\]+/, $.template)), '"'),
    _single_quoted_string: ($) =>
      seq("'", repeat(choice($.escape, /[^{}'\\]+/, $.template)), "'"),

    regex: ($) =>
      seq(
        "r",
        choice(
          seq('"', alias(/[^"]+/, $.regex_pattern), '"'),
          seq("'", alias(/[^']+/, $.regex_pattern), "'"),
        ),
      ),

    number: ($) => /[0-9]+/,

    keyword: ($) => $._template_keyword,

    function: ($) =>
      seq($._template_keyword, "(", optional($._function_args), ")"),

    _function_args: ($) =>
      seq($._function_arg, repeat(seq(/\s*,\s*/, $._function_arg))),
    _function_arg: ($) => choice($._expression, $.named_argument),
    named_argument: ($) =>
      seq($._template_keyword, /[\t ]*=[\t ]*/, $._expression),

    _list_operator: ($) =>
      seq($._expression, alias(/\s*%\s*/, $.operator), $._quoted_string),

    _filter: ($) =>
      seq(alias("|", $.operator), alias($._template_keyword, $.filter)),

    _template_keyword: ($) => /[a-zA-Z0-9_]+/,

    escape: ($) => token(prec(5, seq("\\", /[a-z]/))),

    _text: ($) => /[^\n]+/,

    _newline: ($) => NEWLINE,
  },
});

function caseInsensitive(keyword, aliasAsWord = true) {
  let result = new RegExp(
    keyword
      .split("")
      .map((l) => (l !== l.toUpperCase() ? `[${l}${l.toUpperCase()}]` : l))
      .join(""),
  );
  if (aliasAsWord) result = alias(result, keyword);
  return result;
}
