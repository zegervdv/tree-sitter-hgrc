#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 93
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 71
#define ALIAS_COUNT 3
#define TOKEN_COUNT 36
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 4

enum {
  anon_sym_LBRACK = 1,
  aux_sym__section_header_token1 = 2,
  anon_sym_RBRACK = 3,
  aux_sym_option_token1 = 4,
  sym_option_name = 5,
  aux_sym__string_token1 = 6,
  aux_sym__bool_true_token1 = 7,
  aux_sym__bool_true_token2 = 8,
  aux_sym__bool_true_token3 = 9,
  aux_sym__bool_false_token1 = 10,
  aux_sym__bool_false_token2 = 11,
  aux_sym__bool_false_token3 = 12,
  anon_sym_PERCENTinclude = 13,
  aux_sym_include_token1 = 14,
  anon_sym_POUND = 15,
  anon_sym_SEMI = 16,
  aux_sym__interpolated_text_token1 = 17,
  anon_sym_LBRACE = 18,
  anon_sym_RBRACE = 19,
  aux_sym__expression_token1 = 20,
  anon_sym_DQUOTE = 21,
  aux_sym__single_quoted_string_token1 = 22,
  anon_sym_SQUOTE = 23,
  aux_sym__double_quoted_string_token1 = 24,
  anon_sym_r = 25,
  aux_sym_regex_token1 = 26,
  aux_sym_regex_token2 = 27,
  sym_number = 28,
  anon_sym_LPAREN = 29,
  anon_sym_RPAREN = 30,
  aux_sym__function_args_token1 = 31,
  aux_sym__list_operator_token1 = 32,
  anon_sym_PIPE = 33,
  sym__template_keyword = 34,
  sym__newline = 35,
  sym_source = 36,
  sym__statement = 37,
  sym_section = 38,
  sym__section_header = 39,
  sym_option = 40,
  sym__value = 41,
  sym_string = 42,
  sym__string = 43,
  sym_bool = 44,
  sym__bool_true = 45,
  sym__bool_false = 46,
  sym_include = 47,
  sym_comment = 48,
  aux_sym__interpolated_text = 49,
  sym_template = 50,
  sym__expression = 51,
  sym__quoted_string = 52,
  sym__single_quoted_string = 53,
  sym__double_quoted_string = 54,
  sym_regex = 55,
  sym_keyword = 56,
  sym_function = 57,
  sym__function_args = 58,
  sym__function_arg = 59,
  sym_named_argument = 60,
  sym__list_operator = 61,
  sym__filter = 62,
  sym__text = 63,
  aux_sym_source_repeat1 = 64,
  aux_sym_section_repeat1 = 65,
  aux_sym__string_repeat1 = 66,
  aux_sym__expression_repeat1 = 67,
  aux_sym__single_quoted_string_repeat1 = 68,
  aux_sym__double_quoted_string_repeat1 = 69,
  aux_sym__function_args_repeat1 = 70,
  anon_alias_sym_EQ = 71,
  alias_sym_filter = 72,
  alias_sym_path = 73,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACK] = "[",
  [aux_sym__section_header_token1] = "name",
  [anon_sym_RBRACK] = "]",
  [aux_sym_option_token1] = "option_token1",
  [sym_option_name] = "option_name",
  [aux_sym__string_token1] = "_string_token1",
  [aux_sym__bool_true_token1] = "true",
  [aux_sym__bool_true_token2] = "yes",
  [aux_sym__bool_true_token3] = "on",
  [aux_sym__bool_false_token1] = "false",
  [aux_sym__bool_false_token2] = "no",
  [aux_sym__bool_false_token3] = "off",
  [anon_sym_PERCENTinclude] = "%include",
  [aux_sym_include_token1] = "include_token1",
  [anon_sym_POUND] = "#",
  [anon_sym_SEMI] = ";",
  [aux_sym__interpolated_text_token1] = "_interpolated_text_token1",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [aux_sym__expression_token1] = "_expression_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__single_quoted_string_token1] = "_single_quoted_string_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym__double_quoted_string_token1] = "_double_quoted_string_token1",
  [anon_sym_r] = "r",
  [aux_sym_regex_token1] = "regex_token1",
  [aux_sym_regex_token2] = "regex_token2",
  [sym_number] = "number",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [aux_sym__function_args_token1] = "_function_args_token1",
  [aux_sym__list_operator_token1] = "operator",
  [anon_sym_PIPE] = "operator",
  [sym__template_keyword] = "_template_keyword",
  [sym__newline] = "_newline",
  [sym_source] = "source",
  [sym__statement] = "_statement",
  [sym_section] = "section",
  [sym__section_header] = "_section_header",
  [sym_option] = "option",
  [sym__value] = "_value",
  [sym_string] = "string",
  [sym__string] = "_string",
  [sym_bool] = "bool",
  [sym__bool_true] = "_bool_true",
  [sym__bool_false] = "_bool_false",
  [sym_include] = "include",
  [sym_comment] = "comment",
  [aux_sym__interpolated_text] = "_interpolated_text",
  [sym_template] = "template",
  [sym__expression] = "_expression",
  [sym__quoted_string] = "_quoted_string",
  [sym__single_quoted_string] = "string",
  [sym__double_quoted_string] = "string",
  [sym_regex] = "regex",
  [sym_keyword] = "keyword",
  [sym_function] = "function",
  [sym__function_args] = "_function_args",
  [sym__function_arg] = "_function_arg",
  [sym_named_argument] = "named_argument",
  [sym__list_operator] = "_list_operator",
  [sym__filter] = "_filter",
  [sym__text] = "_text",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_section_repeat1] = "section_repeat1",
  [aux_sym__string_repeat1] = "_string_repeat1",
  [aux_sym__expression_repeat1] = "_expression_repeat1",
  [aux_sym__single_quoted_string_repeat1] = "_single_quoted_string_repeat1",
  [aux_sym__double_quoted_string_repeat1] = "_double_quoted_string_repeat1",
  [aux_sym__function_args_repeat1] = "_function_args_repeat1",
  [anon_alias_sym_EQ] = "=",
  [alias_sym_filter] = "filter",
  [alias_sym_path] = "path",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [aux_sym__section_header_token1] = aux_sym__section_header_token1,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym_option_token1] = aux_sym_option_token1,
  [sym_option_name] = sym_option_name,
  [aux_sym__string_token1] = aux_sym__string_token1,
  [aux_sym__bool_true_token1] = aux_sym__bool_true_token1,
  [aux_sym__bool_true_token2] = aux_sym__bool_true_token2,
  [aux_sym__bool_true_token3] = aux_sym__bool_true_token3,
  [aux_sym__bool_false_token1] = aux_sym__bool_false_token1,
  [aux_sym__bool_false_token2] = aux_sym__bool_false_token2,
  [aux_sym__bool_false_token3] = aux_sym__bool_false_token3,
  [anon_sym_PERCENTinclude] = anon_sym_PERCENTinclude,
  [aux_sym_include_token1] = aux_sym_include_token1,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym__interpolated_text_token1] = aux_sym__interpolated_text_token1,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [aux_sym__expression_token1] = aux_sym__expression_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__single_quoted_string_token1] = aux_sym__single_quoted_string_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym__double_quoted_string_token1] = aux_sym__double_quoted_string_token1,
  [anon_sym_r] = anon_sym_r,
  [aux_sym_regex_token1] = aux_sym_regex_token1,
  [aux_sym_regex_token2] = aux_sym_regex_token2,
  [sym_number] = sym_number,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym__function_args_token1] = aux_sym__function_args_token1,
  [aux_sym__list_operator_token1] = aux_sym__list_operator_token1,
  [anon_sym_PIPE] = aux_sym__list_operator_token1,
  [sym__template_keyword] = sym__template_keyword,
  [sym__newline] = sym__newline,
  [sym_source] = sym_source,
  [sym__statement] = sym__statement,
  [sym_section] = sym_section,
  [sym__section_header] = sym__section_header,
  [sym_option] = sym_option,
  [sym__value] = sym__value,
  [sym_string] = sym_string,
  [sym__string] = sym__string,
  [sym_bool] = sym_bool,
  [sym__bool_true] = sym__bool_true,
  [sym__bool_false] = sym__bool_false,
  [sym_include] = sym_include,
  [sym_comment] = sym_comment,
  [aux_sym__interpolated_text] = aux_sym__interpolated_text,
  [sym_template] = sym_template,
  [sym__expression] = sym__expression,
  [sym__quoted_string] = sym__quoted_string,
  [sym__single_quoted_string] = sym_string,
  [sym__double_quoted_string] = sym_string,
  [sym_regex] = sym_regex,
  [sym_keyword] = sym_keyword,
  [sym_function] = sym_function,
  [sym__function_args] = sym__function_args,
  [sym__function_arg] = sym__function_arg,
  [sym_named_argument] = sym_named_argument,
  [sym__list_operator] = sym__list_operator,
  [sym__filter] = sym__filter,
  [sym__text] = sym__text,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym_section_repeat1] = aux_sym_section_repeat1,
  [aux_sym__string_repeat1] = aux_sym__string_repeat1,
  [aux_sym__expression_repeat1] = aux_sym__expression_repeat1,
  [aux_sym__single_quoted_string_repeat1] = aux_sym__single_quoted_string_repeat1,
  [aux_sym__double_quoted_string_repeat1] = aux_sym__double_quoted_string_repeat1,
  [aux_sym__function_args_repeat1] = aux_sym__function_args_repeat1,
  [anon_alias_sym_EQ] = anon_alias_sym_EQ,
  [alias_sym_filter] = alias_sym_filter,
  [alias_sym_path] = alias_sym_path,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__section_header_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_option_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_option_name] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__bool_true_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__bool_true_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__bool_true_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__bool_false_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__bool_false_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__bool_false_token3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTinclude] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_include_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__interpolated_text_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__expression_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__single_quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__double_quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_r] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_regex_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_regex_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__function_args_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__list_operator_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = true,
  },
  [sym__template_keyword] = {
    .visible = false,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_section] = {
    .visible = true,
    .named = true,
  },
  [sym__section_header] = {
    .visible = false,
    .named = true,
  },
  [sym_option] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym__string] = {
    .visible = false,
    .named = true,
  },
  [sym_bool] = {
    .visible = true,
    .named = true,
  },
  [sym__bool_true] = {
    .visible = false,
    .named = true,
  },
  [sym__bool_false] = {
    .visible = false,
    .named = true,
  },
  [sym_include] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__interpolated_text] = {
    .visible = false,
    .named = false,
  },
  [sym_template] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym__quoted_string] = {
    .visible = false,
    .named = true,
  },
  [sym__single_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym__double_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_regex] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [sym__function_args] = {
    .visible = false,
    .named = true,
  },
  [sym__function_arg] = {
    .visible = false,
    .named = true,
  },
  [sym_named_argument] = {
    .visible = true,
    .named = true,
  },
  [sym__list_operator] = {
    .visible = false,
    .named = true,
  },
  [sym__filter] = {
    .visible = false,
    .named = true,
  },
  [sym__text] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__single_quoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__double_quoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__function_args_repeat1] = {
    .visible = false,
    .named = false,
  },
  [anon_alias_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [alias_sym_filter] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_path] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_path,
  },
  [2] = {
    [1] = anon_alias_sym_EQ,
  },
  [3] = {
    [1] = alias_sym_filter,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 4,
  [6] = 4,
  [7] = 7,
  [8] = 4,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 20,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 38,
  [45] = 38,
  [46] = 38,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 59,
  [64] = 59,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 59,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 77,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(23);
      if (lookahead == '\n') ADVANCE(93);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(67);
      if (lookahead == '#') ADVANCE(46);
      if (lookahead == '%') ADVANCE(10);
      if (lookahead == '\'') ADVANCE(69);
      if (lookahead == '(') ADVANCE(75);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == ';') ADVANCE(47);
      if (lookahead == '[') ADVANCE(24);
      if (lookahead == ']') ADVANCE(26);
      if (lookahead == 'r') ADVANCE(71);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead == '|') ADVANCE(79);
      if (lookahead == '}') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(80);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(87);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(84);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(88);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(93);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(67);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(68);
      END_STATE();
    case 3:
      if (lookahead == '%') ADVANCE(78);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == ',') ADVANCE(77);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == '}') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 4:
      if (lookahead == '%') ADVANCE(78);
      if (lookahead == ',') ADVANCE(77);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '%') ADVANCE(78);
      if (lookahead == ',') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(69);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(70);
      END_STATE();
    case 7:
      if (lookahead == 'c') ADVANCE(11);
      END_STATE();
    case 8:
      if (lookahead == 'd') ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 10:
      if (lookahead == 'i') ADVANCE(12);
      END_STATE();
    case 11:
      if (lookahead == 'l') ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == 'n') ADVANCE(7);
      END_STATE();
    case 13:
      if (lookahead == 'u') ADVANCE(8);
      END_STATE();
    case 14:
      if (lookahead == '{') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(61);
      END_STATE();
    case 15:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(45);
      END_STATE();
    case 16:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(72);
      END_STATE();
    case 17:
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(73);
      END_STATE();
    case 18:
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(25);
      END_STATE();
    case 19:
      if (eof) ADVANCE(23);
      if (lookahead == '\n') ADVANCE(93);
      if (lookahead == '\r') ADVANCE(48);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(49);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(56);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(53);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(57);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(61);
      END_STATE();
    case 20:
      if (eof) ADVANCE(23);
      if (lookahead == '\n') ADVANCE(93);
      if (lookahead == '\r') ADVANCE(48);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(61);
      END_STATE();
    case 21:
      if (eof) ADVANCE(23);
      if (lookahead == '\n') ADVANCE(93);
      if (lookahead == '\r') ADVANCE(28);
      if (lookahead == '#') ADVANCE(46);
      if (lookahead == ';') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(29);
      END_STATE();
    case 22:
      if (eof) ADVANCE(23);
      if (lookahead == '\n') ADVANCE(93);
      if (lookahead == '\r') ADVANCE(44);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym__section_header_token1);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_option_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_option_name);
      if (lookahead == '\n') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=') ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_option_name);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym__bool_true_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym__bool_true_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(61);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym__bool_true_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym__bool_true_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(61);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym__bool_true_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym__bool_true_token3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(61);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym__bool_false_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym__bool_false_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(61);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym__bool_false_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym__bool_false_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(61);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym__bool_false_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym__bool_false_token3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(61);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_PERCENTinclude);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_include_token1);
      if (lookahead == '\n') ADVANCE(93);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_include_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym__interpolated_text_token1);
      if (lookahead == '\n') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(61);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym__interpolated_text_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(61);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym__interpolated_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(61);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym__interpolated_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(61);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym__interpolated_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(61);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym__interpolated_text_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(54);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(61);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym__interpolated_text_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(61);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym__interpolated_text_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(61);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym__interpolated_text_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(61);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym__interpolated_text_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(61);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym__interpolated_text_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(61);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym__interpolated_text_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(61);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym__interpolated_text_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym__interpolated_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym__expression_token1);
      if (lookahead == '(') ADVANCE(75);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == '|') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(66);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym__expression_token1);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(66);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym__expression_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym__single_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym__double_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_r);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_regex_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_regex_token2);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym__function_args_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym__list_operator_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__template_keyword);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym__template_keyword);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym__template_keyword);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym__template_keyword);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym__template_keyword);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(85);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__template_keyword);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__template_keyword);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__template_keyword);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__template_keyword);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__template_keyword);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__template_keyword);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__template_keyword);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__template_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 19},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 20},
  [15] = {.lex_state = 20},
  [16] = {.lex_state = 21},
  [17] = {.lex_state = 20},
  [18] = {.lex_state = 20},
  [19] = {.lex_state = 20},
  [20] = {.lex_state = 20},
  [21] = {.lex_state = 20},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 20},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 22},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 14},
  [33] = {.lex_state = 64},
  [34] = {.lex_state = 64},
  [35] = {.lex_state = 64},
  [36] = {.lex_state = 64},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 20},
  [39] = {.lex_state = 14},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 64},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 20},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 64},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 64},
  [62] = {.lex_state = 64},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 64},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 64},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 64},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 64},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 64},
  [75] = {.lex_state = 64},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 64},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 17},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 16},
  [84] = {.lex_state = 18},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 15},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [aux_sym__string_token1] = ACTIONS(1),
    [aux_sym__bool_true_token1] = ACTIONS(1),
    [aux_sym__bool_true_token2] = ACTIONS(1),
    [aux_sym__bool_true_token3] = ACTIONS(1),
    [aux_sym__bool_false_token1] = ACTIONS(1),
    [aux_sym__bool_false_token2] = ACTIONS(1),
    [aux_sym__bool_false_token3] = ACTIONS(1),
    [anon_sym_PERCENTinclude] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_r] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [sym__template_keyword] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(91),
    [sym__statement] = STATE(43),
    [sym_section] = STATE(43),
    [sym__section_header] = STATE(47),
    [sym_include] = STATE(43),
    [sym_comment] = STATE(43),
    [aux_sym_source_repeat1] = STATE(51),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(5),
    [anon_sym_PERCENTinclude] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(9),
    [anon_sym_SEMI] = ACTIONS(9),
    [sym__newline] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_r,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(23), 1,
      anon_sym_RPAREN,
    ACTIONS(25), 1,
      sym__template_keyword,
    STATE(53), 1,
      sym__expression,
    STATE(87), 1,
      sym__function_args,
    STATE(52), 2,
      sym__function_arg,
      sym_named_argument,
    STATE(79), 2,
      sym__bool_true,
      sym__bool_false,
    ACTIONS(13), 6,
      aux_sym__bool_true_token1,
      aux_sym__bool_true_token2,
      aux_sym__bool_true_token3,
      aux_sym__bool_false_token1,
      aux_sym__bool_false_token2,
      aux_sym__bool_false_token3,
    STATE(36), 8,
      sym_bool,
      sym__quoted_string,
      sym__single_quoted_string,
      sym__double_quoted_string,
      sym_regex,
      sym_keyword,
      sym_function,
      sym__list_operator,
  [51] = 10,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_r,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(25), 1,
      sym__template_keyword,
    STATE(53), 1,
      sym__expression,
    STATE(78), 2,
      sym__function_arg,
      sym_named_argument,
    STATE(79), 2,
      sym__bool_true,
      sym__bool_false,
    ACTIONS(13), 6,
      aux_sym__bool_true_token1,
      aux_sym__bool_true_token2,
      aux_sym__bool_true_token3,
      aux_sym__bool_false_token1,
      aux_sym__bool_false_token2,
      aux_sym__bool_false_token3,
    STATE(36), 8,
      sym_bool,
      sym__quoted_string,
      sym__single_quoted_string,
      sym__double_quoted_string,
      sym_regex,
      sym_keyword,
      sym_function,
      sym__list_operator,
  [96] = 9,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_r,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(27), 1,
      sym__template_keyword,
    STATE(59), 1,
      sym__expression,
    STATE(79), 2,
      sym__bool_true,
      sym__bool_false,
    ACTIONS(13), 6,
      aux_sym__bool_true_token1,
      aux_sym__bool_true_token2,
      aux_sym__bool_true_token3,
      aux_sym__bool_false_token1,
      aux_sym__bool_false_token2,
      aux_sym__bool_false_token3,
    STATE(36), 8,
      sym_bool,
      sym__quoted_string,
      sym__single_quoted_string,
      sym__double_quoted_string,
      sym_regex,
      sym_keyword,
      sym_function,
      sym__list_operator,
  [137] = 9,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_r,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(27), 1,
      sym__template_keyword,
    STATE(63), 1,
      sym__expression,
    STATE(79), 2,
      sym__bool_true,
      sym__bool_false,
    ACTIONS(13), 6,
      aux_sym__bool_true_token1,
      aux_sym__bool_true_token2,
      aux_sym__bool_true_token3,
      aux_sym__bool_false_token1,
      aux_sym__bool_false_token2,
      aux_sym__bool_false_token3,
    STATE(36), 8,
      sym_bool,
      sym__quoted_string,
      sym__single_quoted_string,
      sym__double_quoted_string,
      sym_regex,
      sym_keyword,
      sym_function,
      sym__list_operator,
  [178] = 9,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_r,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(27), 1,
      sym__template_keyword,
    STATE(64), 1,
      sym__expression,
    STATE(79), 2,
      sym__bool_true,
      sym__bool_false,
    ACTIONS(13), 6,
      aux_sym__bool_true_token1,
      aux_sym__bool_true_token2,
      aux_sym__bool_true_token3,
      aux_sym__bool_false_token1,
      aux_sym__bool_false_token2,
      aux_sym__bool_false_token3,
    STATE(36), 8,
      sym_bool,
      sym__quoted_string,
      sym__single_quoted_string,
      sym__double_quoted_string,
      sym_regex,
      sym_keyword,
      sym_function,
      sym__list_operator,
  [219] = 9,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_r,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(27), 1,
      sym__template_keyword,
    STATE(49), 1,
      sym__expression,
    STATE(79), 2,
      sym__bool_true,
      sym__bool_false,
    ACTIONS(13), 6,
      aux_sym__bool_true_token1,
      aux_sym__bool_true_token2,
      aux_sym__bool_true_token3,
      aux_sym__bool_false_token1,
      aux_sym__bool_false_token2,
      aux_sym__bool_false_token3,
    STATE(36), 8,
      sym_bool,
      sym__quoted_string,
      sym__single_quoted_string,
      sym__double_quoted_string,
      sym_regex,
      sym_keyword,
      sym_function,
      sym__list_operator,
  [260] = 9,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_r,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(27), 1,
      sym__template_keyword,
    STATE(69), 1,
      sym__expression,
    STATE(79), 2,
      sym__bool_true,
      sym__bool_false,
    ACTIONS(13), 6,
      aux_sym__bool_true_token1,
      aux_sym__bool_true_token2,
      aux_sym__bool_true_token3,
      aux_sym__bool_false_token1,
      aux_sym__bool_false_token2,
      aux_sym__bool_false_token3,
    STATE(36), 8,
      sym_bool,
      sym__quoted_string,
      sym__single_quoted_string,
      sym__double_quoted_string,
      sym_regex,
      sym_keyword,
      sym_function,
      sym__list_operator,
  [301] = 10,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      aux_sym__interpolated_text_token1,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 1,
      sym__newline,
    STATE(15), 1,
      aux_sym__string_repeat1,
    STATE(76), 1,
      sym__string,
    STATE(18), 2,
      aux_sym__interpolated_text,
      sym_template,
    STATE(77), 2,
      sym__bool_true,
      sym__bool_false,
    STATE(71), 3,
      sym__value,
      sym_string,
      sym_bool,
    ACTIONS(31), 6,
      aux_sym__bool_true_token1,
      aux_sym__bool_true_token2,
      aux_sym__bool_true_token3,
      aux_sym__bool_false_token1,
      aux_sym__bool_false_token2,
      aux_sym__bool_false_token3,
  [341] = 6,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(7), 1,
      anon_sym_PERCENTinclude,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
    STATE(47), 1,
      sym__section_header,
    ACTIONS(9), 2,
      anon_sym_POUND,
      anon_sym_SEMI,
    STATE(66), 4,
      sym__statement,
      sym_section,
      sym_include,
      sym_comment,
  [364] = 6,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(7), 1,
      anon_sym_PERCENTinclude,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    STATE(47), 1,
      sym__section_header,
    ACTIONS(9), 2,
      anon_sym_POUND,
      anon_sym_SEMI,
    STATE(66), 4,
      sym__statement,
      sym_section,
      sym_include,
      sym_comment,
  [387] = 6,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(7), 1,
      anon_sym_PERCENTinclude,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    STATE(47), 1,
      sym__section_header,
    ACTIONS(9), 2,
      anon_sym_POUND,
      anon_sym_SEMI,
    STATE(66), 4,
      sym__statement,
      sym_section,
      sym_include,
      sym_comment,
  [410] = 5,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(7), 1,
      anon_sym_PERCENTinclude,
    STATE(47), 1,
      sym__section_header,
    ACTIONS(9), 2,
      anon_sym_POUND,
      anon_sym_SEMI,
    STATE(66), 4,
      sym__statement,
      sym_section,
      sym_include,
      sym_comment,
  [430] = 6,
    ACTIONS(46), 1,
      ts_builtin_sym_end,
    ACTIONS(48), 1,
      aux_sym__interpolated_text_token1,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(54), 1,
      sym__newline,
    STATE(14), 1,
      aux_sym__string_repeat1,
    STATE(23), 2,
      aux_sym__interpolated_text,
      sym_template,
  [450] = 6,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    ACTIONS(59), 1,
      aux_sym__interpolated_text_token1,
    ACTIONS(61), 1,
      anon_sym_LBRACE,
    ACTIONS(63), 1,
      sym__newline,
    STATE(14), 1,
      aux_sym__string_repeat1,
    STATE(23), 2,
      aux_sym__interpolated_text,
      sym_template,
  [470] = 4,
    ACTIONS(68), 1,
      sym_option_name,
    ACTIONS(9), 2,
      anon_sym_POUND,
      anon_sym_SEMI,
    ACTIONS(66), 2,
      ts_builtin_sym_end,
      sym__newline,
    STATE(56), 2,
      sym_option,
      sym_comment,
  [486] = 4,
    ACTIONS(72), 1,
      aux_sym__interpolated_text_token1,
    ACTIONS(75), 1,
      anon_sym_LBRACE,
    ACTIONS(70), 2,
      ts_builtin_sym_end,
      sym__newline,
    STATE(20), 2,
      aux_sym__interpolated_text,
      sym_template,
  [501] = 5,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    ACTIONS(78), 1,
      aux_sym__interpolated_text_token1,
    ACTIONS(80), 1,
      sym__newline,
    STATE(20), 2,
      aux_sym__interpolated_text,
      sym_template,
  [518] = 4,
    ACTIONS(85), 1,
      aux_sym__interpolated_text_token1,
    ACTIONS(88), 1,
      anon_sym_LBRACE,
    ACTIONS(83), 2,
      ts_builtin_sym_end,
      sym__newline,
    STATE(20), 2,
      aux_sym__interpolated_text,
      sym_template,
  [533] = 4,
    ACTIONS(93), 1,
      aux_sym__interpolated_text_token1,
    ACTIONS(96), 1,
      anon_sym_LBRACE,
    ACTIONS(91), 2,
      ts_builtin_sym_end,
      sym__newline,
    STATE(20), 2,
      aux_sym__interpolated_text,
      sym_template,
  [548] = 4,
    ACTIONS(91), 1,
      sym__newline,
    ACTIONS(99), 1,
      aux_sym__interpolated_text_token1,
    ACTIONS(102), 1,
      anon_sym_LBRACE,
    STATE(21), 2,
      aux_sym__interpolated_text,
      sym_template,
  [562] = 3,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    STATE(72), 3,
      sym__quoted_string,
      sym__single_quoted_string,
      sym__double_quoted_string,
  [574] = 4,
    ACTIONS(61), 1,
      anon_sym_LBRACE,
    ACTIONS(105), 1,
      aux_sym__interpolated_text_token1,
    ACTIONS(107), 1,
      sym__newline,
    STATE(21), 2,
      aux_sym__interpolated_text,
      sym_template,
  [588] = 4,
    ACTIONS(109), 1,
      anon_sym_LBRACE,
    ACTIONS(112), 1,
      anon_sym_DQUOTE,
    ACTIONS(114), 1,
      aux_sym__single_quoted_string_token1,
    STATE(24), 2,
      sym_template,
      aux_sym__single_quoted_string_repeat1,
  [602] = 4,
    ACTIONS(117), 1,
      anon_sym_LBRACE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(122), 1,
      aux_sym__double_quoted_string_token1,
    STATE(25), 2,
      sym_template,
      aux_sym__double_quoted_string_repeat1,
  [616] = 4,
    ACTIONS(125), 1,
      anon_sym_LBRACE,
    ACTIONS(127), 1,
      anon_sym_SQUOTE,
    ACTIONS(129), 1,
      aux_sym__double_quoted_string_token1,
    STATE(29), 2,
      sym_template,
      aux_sym__double_quoted_string_repeat1,
  [630] = 4,
    ACTIONS(131), 1,
      anon_sym_LBRACE,
    ACTIONS(133), 1,
      anon_sym_DQUOTE,
    ACTIONS(135), 1,
      aux_sym__single_quoted_string_token1,
    STATE(28), 2,
      sym_template,
      aux_sym__single_quoted_string_repeat1,
  [644] = 4,
    ACTIONS(131), 1,
      anon_sym_LBRACE,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(139), 1,
      aux_sym__single_quoted_string_token1,
    STATE(24), 2,
      sym_template,
      aux_sym__single_quoted_string_repeat1,
  [658] = 4,
    ACTIONS(125), 1,
      anon_sym_LBRACE,
    ACTIONS(141), 1,
      anon_sym_SQUOTE,
    ACTIONS(143), 1,
      aux_sym__double_quoted_string_token1,
    STATE(25), 2,
      sym_template,
      aux_sym__double_quoted_string_repeat1,
  [672] = 3,
    ACTIONS(147), 1,
      aux_sym_include_token1,
    STATE(68), 1,
      sym__text,
    ACTIONS(145), 2,
      ts_builtin_sym_end,
      sym__newline,
  [683] = 1,
    ACTIONS(149), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      aux_sym__function_args_token1,
      aux_sym__list_operator_token1,
  [690] = 3,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(151), 1,
      aux_sym__interpolated_text_token1,
    STATE(17), 2,
      aux_sym__interpolated_text,
      sym_template,
  [701] = 3,
    ACTIONS(153), 1,
      aux_sym__expression_token1,
    ACTIONS(155), 1,
      anon_sym_PIPE,
    STATE(35), 2,
      sym__filter,
      aux_sym__expression_repeat1,
  [712] = 4,
    ACTIONS(157), 1,
      aux_sym_option_token1,
    ACTIONS(159), 1,
      aux_sym__expression_token1,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    ACTIONS(163), 1,
      anon_sym_PIPE,
  [725] = 3,
    ACTIONS(165), 1,
      aux_sym__expression_token1,
    ACTIONS(167), 1,
      anon_sym_PIPE,
    STATE(35), 2,
      sym__filter,
      aux_sym__expression_repeat1,
  [736] = 3,
    ACTIONS(155), 1,
      anon_sym_PIPE,
    ACTIONS(170), 1,
      aux_sym__expression_token1,
    STATE(33), 2,
      sym__filter,
      aux_sym__expression_repeat1,
  [747] = 1,
    ACTIONS(172), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      aux_sym__function_args_token1,
      aux_sym__list_operator_token1,
  [754] = 2,
    ACTIONS(176), 1,
      aux_sym__interpolated_text_token1,
    ACTIONS(174), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym__newline,
  [763] = 3,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(178), 1,
      aux_sym__interpolated_text_token1,
    STATE(19), 2,
      aux_sym__interpolated_text,
      sym_template,
  [774] = 3,
    ACTIONS(180), 1,
      ts_builtin_sym_end,
    ACTIONS(182), 1,
      sym__newline,
    STATE(40), 1,
      aux_sym_section_repeat1,
  [784] = 3,
    ACTIONS(185), 1,
      ts_builtin_sym_end,
    ACTIONS(187), 1,
      sym__newline,
    STATE(41), 1,
      aux_sym_source_repeat1,
  [794] = 3,
    ACTIONS(159), 1,
      aux_sym__expression_token1,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    ACTIONS(163), 1,
      anon_sym_PIPE,
  [804] = 3,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    ACTIONS(190), 1,
      sym__newline,
    STATE(54), 1,
      aux_sym_source_repeat1,
  [814] = 1,
    ACTIONS(174), 3,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      aux_sym__double_quoted_string_token1,
  [820] = 1,
    ACTIONS(174), 3,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      aux_sym__single_quoted_string_token1,
  [826] = 2,
    ACTIONS(176), 1,
      aux_sym__interpolated_text_token1,
    ACTIONS(174), 2,
      anon_sym_LBRACE,
      sym__newline,
  [834] = 3,
    ACTIONS(192), 1,
      ts_builtin_sym_end,
    ACTIONS(194), 1,
      sym__newline,
    STATE(55), 1,
      aux_sym_section_repeat1,
  [844] = 3,
    ACTIONS(197), 1,
      anon_sym_RPAREN,
    ACTIONS(199), 1,
      aux_sym__function_args_token1,
    STATE(48), 1,
      aux_sym__function_args_repeat1,
  [854] = 2,
    ACTIONS(204), 1,
      aux_sym__list_operator_token1,
    ACTIONS(202), 2,
      anon_sym_RPAREN,
      aux_sym__function_args_token1,
  [862] = 3,
    ACTIONS(206), 1,
      anon_sym_RPAREN,
    ACTIONS(208), 1,
      aux_sym__function_args_token1,
    STATE(48), 1,
      aux_sym__function_args_repeat1,
  [872] = 3,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    ACTIONS(190), 1,
      sym__newline,
    STATE(41), 1,
      aux_sym_source_repeat1,
  [882] = 3,
    ACTIONS(208), 1,
      aux_sym__function_args_token1,
    ACTIONS(210), 1,
      anon_sym_RPAREN,
    STATE(50), 1,
      aux_sym__function_args_repeat1,
  [892] = 2,
    ACTIONS(204), 1,
      aux_sym__list_operator_token1,
    ACTIONS(212), 2,
      anon_sym_RPAREN,
      aux_sym__function_args_token1,
  [900] = 3,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    ACTIONS(214), 1,
      sym__newline,
    STATE(41), 1,
      aux_sym_source_repeat1,
  [910] = 3,
    ACTIONS(216), 1,
      ts_builtin_sym_end,
    ACTIONS(218), 1,
      sym__newline,
    STATE(40), 1,
      aux_sym_section_repeat1,
  [920] = 1,
    ACTIONS(180), 2,
      ts_builtin_sym_end,
      sym__newline,
  [925] = 2,
    ACTIONS(221), 1,
      aux_sym__expression_token1,
    ACTIONS(223), 1,
      anon_sym_PIPE,
  [932] = 2,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      anon_sym_SQUOTE,
  [939] = 2,
    ACTIONS(204), 1,
      aux_sym__list_operator_token1,
    ACTIONS(229), 1,
      anon_sym_RBRACE,
  [946] = 1,
    ACTIONS(231), 2,
      ts_builtin_sym_end,
      sym__newline,
  [951] = 2,
    ACTIONS(233), 1,
      aux_sym__expression_token1,
    ACTIONS(235), 1,
      anon_sym_PIPE,
  [958] = 2,
    ACTIONS(237), 1,
      aux_sym__expression_token1,
    ACTIONS(239), 1,
      anon_sym_PIPE,
  [965] = 2,
    ACTIONS(204), 1,
      aux_sym__list_operator_token1,
    ACTIONS(241), 1,
      anon_sym_RBRACE,
  [972] = 2,
    ACTIONS(204), 1,
      aux_sym__list_operator_token1,
    ACTIONS(243), 1,
      anon_sym_RBRACE,
  [979] = 2,
    ACTIONS(245), 1,
      aux_sym__expression_token1,
    ACTIONS(247), 1,
      anon_sym_PIPE,
  [986] = 1,
    ACTIONS(185), 2,
      ts_builtin_sym_end,
      sym__newline,
  [991] = 2,
    ACTIONS(249), 1,
      aux_sym__expression_token1,
    ACTIONS(251), 1,
      anon_sym_PIPE,
  [998] = 1,
    ACTIONS(253), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1003] = 2,
    ACTIONS(204), 1,
      aux_sym__list_operator_token1,
    ACTIONS(255), 1,
      anon_sym_RBRACE,
  [1010] = 2,
    ACTIONS(257), 1,
      aux_sym__expression_token1,
    ACTIONS(259), 1,
      anon_sym_PIPE,
  [1017] = 1,
    ACTIONS(261), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1022] = 2,
    ACTIONS(263), 1,
      aux_sym__expression_token1,
    ACTIONS(265), 1,
      anon_sym_PIPE,
  [1029] = 1,
    ACTIONS(267), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1034] = 2,
    ACTIONS(269), 1,
      aux_sym__expression_token1,
    ACTIONS(271), 1,
      anon_sym_PIPE,
  [1041] = 2,
    ACTIONS(273), 1,
      aux_sym__expression_token1,
    ACTIONS(275), 1,
      anon_sym_PIPE,
  [1048] = 1,
    ACTIONS(277), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1053] = 1,
    ACTIONS(279), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1058] = 1,
    ACTIONS(197), 2,
      anon_sym_RPAREN,
      aux_sym__function_args_token1,
  [1063] = 2,
    ACTIONS(279), 1,
      anon_sym_PIPE,
    ACTIONS(281), 1,
      aux_sym__expression_token1,
  [1070] = 1,
    ACTIONS(283), 1,
      anon_sym_RBRACK,
  [1074] = 1,
    ACTIONS(285), 1,
      aux_sym_regex_token2,
  [1078] = 1,
    ACTIONS(287), 1,
      aux_sym__string_token1,
  [1082] = 1,
    ACTIONS(289), 1,
      aux_sym_regex_token1,
  [1086] = 1,
    ACTIONS(291), 1,
      aux_sym__section_header_token1,
  [1090] = 1,
    ACTIONS(293), 1,
      sym__template_keyword,
  [1094] = 1,
    ACTIONS(295), 1,
      aux_sym_option_token1,
  [1098] = 1,
    ACTIONS(297), 1,
      anon_sym_RPAREN,
  [1102] = 1,
    ACTIONS(299), 1,
      anon_sym_SQUOTE,
  [1106] = 1,
    ACTIONS(299), 1,
      anon_sym_DQUOTE,
  [1110] = 1,
    ACTIONS(301), 1,
      aux_sym__string_token1,
  [1114] = 1,
    ACTIONS(303), 1,
      ts_builtin_sym_end,
  [1118] = 1,
    ACTIONS(305), 1,
      aux_sym_include_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 51,
  [SMALL_STATE(4)] = 96,
  [SMALL_STATE(5)] = 137,
  [SMALL_STATE(6)] = 178,
  [SMALL_STATE(7)] = 219,
  [SMALL_STATE(8)] = 260,
  [SMALL_STATE(9)] = 301,
  [SMALL_STATE(10)] = 341,
  [SMALL_STATE(11)] = 364,
  [SMALL_STATE(12)] = 387,
  [SMALL_STATE(13)] = 410,
  [SMALL_STATE(14)] = 430,
  [SMALL_STATE(15)] = 450,
  [SMALL_STATE(16)] = 470,
  [SMALL_STATE(17)] = 486,
  [SMALL_STATE(18)] = 501,
  [SMALL_STATE(19)] = 518,
  [SMALL_STATE(20)] = 533,
  [SMALL_STATE(21)] = 548,
  [SMALL_STATE(22)] = 562,
  [SMALL_STATE(23)] = 574,
  [SMALL_STATE(24)] = 588,
  [SMALL_STATE(25)] = 602,
  [SMALL_STATE(26)] = 616,
  [SMALL_STATE(27)] = 630,
  [SMALL_STATE(28)] = 644,
  [SMALL_STATE(29)] = 658,
  [SMALL_STATE(30)] = 672,
  [SMALL_STATE(31)] = 683,
  [SMALL_STATE(32)] = 690,
  [SMALL_STATE(33)] = 701,
  [SMALL_STATE(34)] = 712,
  [SMALL_STATE(35)] = 725,
  [SMALL_STATE(36)] = 736,
  [SMALL_STATE(37)] = 747,
  [SMALL_STATE(38)] = 754,
  [SMALL_STATE(39)] = 763,
  [SMALL_STATE(40)] = 774,
  [SMALL_STATE(41)] = 784,
  [SMALL_STATE(42)] = 794,
  [SMALL_STATE(43)] = 804,
  [SMALL_STATE(44)] = 814,
  [SMALL_STATE(45)] = 820,
  [SMALL_STATE(46)] = 826,
  [SMALL_STATE(47)] = 834,
  [SMALL_STATE(48)] = 844,
  [SMALL_STATE(49)] = 854,
  [SMALL_STATE(50)] = 862,
  [SMALL_STATE(51)] = 872,
  [SMALL_STATE(52)] = 882,
  [SMALL_STATE(53)] = 892,
  [SMALL_STATE(54)] = 900,
  [SMALL_STATE(55)] = 910,
  [SMALL_STATE(56)] = 920,
  [SMALL_STATE(57)] = 925,
  [SMALL_STATE(58)] = 932,
  [SMALL_STATE(59)] = 939,
  [SMALL_STATE(60)] = 946,
  [SMALL_STATE(61)] = 951,
  [SMALL_STATE(62)] = 958,
  [SMALL_STATE(63)] = 965,
  [SMALL_STATE(64)] = 972,
  [SMALL_STATE(65)] = 979,
  [SMALL_STATE(66)] = 986,
  [SMALL_STATE(67)] = 991,
  [SMALL_STATE(68)] = 998,
  [SMALL_STATE(69)] = 1003,
  [SMALL_STATE(70)] = 1010,
  [SMALL_STATE(71)] = 1017,
  [SMALL_STATE(72)] = 1022,
  [SMALL_STATE(73)] = 1029,
  [SMALL_STATE(74)] = 1034,
  [SMALL_STATE(75)] = 1041,
  [SMALL_STATE(76)] = 1048,
  [SMALL_STATE(77)] = 1053,
  [SMALL_STATE(78)] = 1058,
  [SMALL_STATE(79)] = 1063,
  [SMALL_STATE(80)] = 1070,
  [SMALL_STATE(81)] = 1074,
  [SMALL_STATE(82)] = 1078,
  [SMALL_STATE(83)] = 1082,
  [SMALL_STATE(84)] = 1086,
  [SMALL_STATE(85)] = 1090,
  [SMALL_STATE(86)] = 1094,
  [SMALL_STATE(87)] = 1098,
  [SMALL_STATE(88)] = 1102,
  [SMALL_STATE(89)] = 1106,
  [SMALL_STATE(90)] = 1110,
  [SMALL_STATE(91)] = 1114,
  [SMALL_STATE(92)] = 1118,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 2, .production_id = 2),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_option, 2, .production_id = 2), SHIFT(82),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 3),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 2),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__string_repeat1, 2),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_repeat1, 2), SHIFT_REPEAT(23),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_repeat1, 2), SHIFT_REPEAT(6),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_repeat1, 2), SHIFT_REPEAT(82),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 1),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__string, 1), SHIFT(82),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 1),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__string_repeat1, 4),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_repeat1, 4), SHIFT(20),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_repeat1, 4), SHIFT(8),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__string, 1), SHIFT(90),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__string_repeat1, 3),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_repeat1, 3), SHIFT(20),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_repeat1, 3), SHIFT(8),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__interpolated_text, 2),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__interpolated_text, 2), SHIFT_REPEAT(20),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__interpolated_text, 2), SHIFT_REPEAT(8),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__interpolated_text, 2), SHIFT_REPEAT(21),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__interpolated_text, 2), SHIFT_REPEAT(6),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__single_quoted_string_repeat1, 2), SHIFT_REPEAT(5),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__single_quoted_string_repeat1, 2),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__single_quoted_string_repeat1, 2), SHIFT_REPEAT(24),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__double_quoted_string_repeat1, 2), SHIFT_REPEAT(4),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__double_quoted_string_repeat1, 2),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__double_quoted_string_repeat1, 2), SHIFT_REPEAT(25),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__expression_repeat1, 2),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_repeat1, 2), SHIFT_REPEAT(85),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 3),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 3),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template, 3),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(16),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(13),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_section, 1), SHIFT(16),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__function_args_repeat1, 2),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__function_args_repeat1, 2), SHIFT_REPEAT(3),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_argument, 3),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_args, 2),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_args, 1),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_arg, 1),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 2),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_section, 2), SHIFT(16),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 3),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 3),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__section_header, 3),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_quoted_string, 3),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_quoted_string, 3),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quoted_string, 3),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quoted_string, 3),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__filter, 2, .production_id = 3),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__filter, 2, .production_id = 3),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quoted_string, 2),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quoted_string, 2),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_quoted_string, 2),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_quoted_string, 2),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 3, .production_id = 2),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__list_operator, 3),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_operator, 3),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2, .production_id = 1),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex, 4),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 4),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 4),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 4),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [303] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_hgrc(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
