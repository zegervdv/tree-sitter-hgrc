const NEWLINE = /\r?\n/;

module.exports = grammar({
  name: "hgrc",

  rules: {
    source: ($) => repeat(choice($.section, $.comment)),

    section: ($) => seq($._section_header, repeat($.option)),

    _section_header: ($) => prec(1, seq("[", $.name, "]", NEWLINE)),

    name: ($) => /[^\[\]\n]+/,

    option: ($) => seq($.option_name, "=", optional($._option_value), NEWLINE),

    option_name: ($) => /[^=#\[\]]+/,

    _option_value: ($) => choice($.string, $.bool),

    string: ($) => repeat1(seq(/.+/, optional(seq(NEWLINE, /\s+/)))),

    bool: ($) =>
      choice(
        "false",
        "no",
        "0",
        "off",
        "true",
        "yes",
        "1",
        "on",
      ),


    comment: ($) => token(seq(choice("#", ";"), /.*/)),
  },
});

