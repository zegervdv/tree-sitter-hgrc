#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 93
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 70
#define ALIAS_COUNT 3
#define TOKEN_COUNT 35
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
  anon_sym_DQUOTE = 20,
  aux_sym__single_quoted_string_token1 = 21,
  anon_sym_SQUOTE = 22,
  aux_sym__double_quoted_string_token1 = 23,
  anon_sym_r = 24,
  aux_sym_regex_token1 = 25,
  aux_sym_regex_token2 = 26,
  sym_number = 27,
  anon_sym_LPAREN = 28,
  anon_sym_RPAREN = 29,
  anon_sym_COMMA = 30,
  aux_sym__list_operator_token1 = 31,
  anon_sym_PIPE = 32,
  sym__template_keyword = 33,
  sym__newline = 34,
  sym_source = 35,
  sym__statement = 36,
  sym_section = 37,
  sym__section_header = 38,
  sym_option = 39,
  sym__value = 40,
  sym_string = 41,
  sym__string = 42,
  sym_bool = 43,
  sym__bool_true = 44,
  sym__bool_false = 45,
  sym_include = 46,
  sym_comment = 47,
  aux_sym__interpolated_text = 48,
  sym_template = 49,
  sym__expression = 50,
  sym__quoted_string = 51,
  sym__single_quoted_string = 52,
  sym__double_quoted_string = 53,
  sym_regex = 54,
  sym_keyword = 55,
  sym_function = 56,
  sym__function_args = 57,
  sym__function_arg = 58,
  sym_named_argument = 59,
  sym__list_operator = 60,
  sym__filter = 61,
  sym__text = 62,
  aux_sym_source_repeat1 = 63,
  aux_sym_section_repeat1 = 64,
  aux_sym__string_repeat1 = 65,
  aux_sym__expression_repeat1 = 66,
  aux_sym__single_quoted_string_repeat1 = 67,
  aux_sym__double_quoted_string_repeat1 = 68,
  aux_sym__function_args_repeat1 = 69,
  anon_alias_sym_EQ = 70,
  alias_sym_filter = 71,
  alias_sym_path = 72,
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
  [anon_sym_COMMA] = ",",
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
  [anon_sym_COMMA] = anon_sym_COMMA,
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
  [anon_sym_COMMA] = {
    .visible = true,
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
  [5] = 5,
  [6] = 5,
  [7] = 5,
  [8] = 8,
  [9] = 5,
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
  [21] = 21,
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
  [32] = 23,
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
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 47,
  [54] = 47,
  [55] = 47,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 68,
  [71] = 68,
  [72] = 68,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 35,
  [79] = 79,
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
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '#') ADVANCE(46);
      if (lookahead == '%') ADVANCE(10);
      if (lookahead == '\'') ADVANCE(66);
      if (lookahead == '(') ADVANCE(72);
      if (lookahead == ')') ADVANCE(73);
      if (lookahead == ',') ADVANCE(74);
      if (lookahead == ';') ADVANCE(47);
      if (lookahead == '[') ADVANCE(24);
      if (lookahead == ']') ADVANCE(26);
      if (lookahead == 'r') ADVANCE(68);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead == '|') ADVANCE(76);
      if (lookahead == '}') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(77);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(84);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(81);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(85);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(90);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(65);
      END_STATE();
    case 3:
      if (lookahead == '%') ADVANCE(75);
      if (lookahead == '(') ADVANCE(72);
      if (lookahead == ')') ADVANCE(73);
      if (lookahead == ',') ADVANCE(74);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == '|') ADVANCE(76);
      if (lookahead == '}') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 4:
      if (lookahead == '%') ADVANCE(75);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '%') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(66);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(67);
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
          lookahead != '"') ADVANCE(69);
      END_STATE();
    case 17:
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(70);
      END_STATE();
    case 18:
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(25);
      END_STATE();
    case 19:
      if (eof) ADVANCE(23);
      if (lookahead == '\n') ADVANCE(90);
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
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '\r') ADVANCE(48);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(61);
      END_STATE();
    case 21:
      if (eof) ADVANCE(23);
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '\r') ADVANCE(28);
      if (lookahead == '#') ADVANCE(46);
      if (lookahead == ';') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(29);
      END_STATE();
    case 22:
      if (eof) ADVANCE(23);
      if (lookahead == '\n') ADVANCE(90);
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
      if (lookahead == '\n') ADVANCE(90);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
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
      if (lookahead == '\n') ADVANCE(90);
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
      if (lookahead == '\n') ADVANCE(90);
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
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym__single_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym__double_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_r);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_regex_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_regex_token2);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym__list_operator_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym__template_keyword);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym__template_keyword);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym__template_keyword);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__template_keyword);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym__template_keyword);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(82);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym__template_keyword);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym__template_keyword);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym__template_keyword);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__template_keyword);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__template_keyword);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__template_keyword);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__template_keyword);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__template_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 90:
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
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 19},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 20},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 20},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 21},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 20},
  [23] = {.lex_state = 20},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 20},
  [26] = {.lex_state = 20},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 20},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 20},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 14},
  [47] = {.lex_state = 20},
  [48] = {.lex_state = 14},
  [49] = {.lex_state = 22},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 20},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 16},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 18},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 17},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 3},
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
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [sym__template_keyword] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(91),
    [sym__statement] = STATE(52),
    [sym_section] = STATE(52),
    [sym__section_header] = STATE(56),
    [sym_include] = STATE(52),
    [sym_comment] = STATE(52),
    [aux_sym_source_repeat1] = STATE(57),
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
    STATE(64), 1,
      sym__expression,
    STATE(89), 1,
      sym__function_args,
    STATE(35), 2,
      sym__bool_true,
      sym__bool_false,
    STATE(63), 2,
      sym__function_arg,
      sym_named_argument,
    ACTIONS(13), 6,
      aux_sym__bool_true_token1,
      aux_sym__bool_true_token2,
      aux_sym__bool_true_token3,
      aux_sym__bool_false_token1,
      aux_sym__bool_false_token2,
      aux_sym__bool_false_token3,
    STATE(17), 8,
      sym_bool,
      sym__quoted_string,
      sym__single_quoted_string,
      sym__double_quoted_string,
      sym_regex,
      sym_keyword,
      sym_function,
      sym__list_operator,
  [51] = 11,
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
    ACTIONS(27), 1,
      aux_sym__string_token1,
    STATE(64), 1,
      sym__expression,
    STATE(35), 2,
      sym__bool_true,
      sym__bool_false,
    STATE(79), 2,
      sym__function_arg,
      sym_named_argument,
    ACTIONS(13), 6,
      aux_sym__bool_true_token1,
      aux_sym__bool_true_token2,
      aux_sym__bool_true_token3,
      aux_sym__bool_false_token1,
      aux_sym__bool_false_token2,
      aux_sym__bool_false_token3,
    STATE(17), 8,
      sym_bool,
      sym__quoted_string,
      sym__single_quoted_string,
      sym__double_quoted_string,
      sym_regex,
      sym_keyword,
      sym_function,
      sym__list_operator,
  [99] = 10,
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
    STATE(64), 1,
      sym__expression,
    STATE(35), 2,
      sym__bool_true,
      sym__bool_false,
    STATE(65), 2,
      sym__function_arg,
      sym_named_argument,
    ACTIONS(13), 6,
      aux_sym__bool_true_token1,
      aux_sym__bool_true_token2,
      aux_sym__bool_true_token3,
      aux_sym__bool_false_token1,
      aux_sym__bool_false_token2,
      aux_sym__bool_false_token3,
    STATE(17), 8,
      sym_bool,
      sym__quoted_string,
      sym__single_quoted_string,
      sym__double_quoted_string,
      sym_regex,
      sym_keyword,
      sym_function,
      sym__list_operator,
  [144] = 9,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_r,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(29), 1,
      sym__template_keyword,
    STATE(72), 1,
      sym__expression,
    STATE(35), 2,
      sym__bool_true,
      sym__bool_false,
    ACTIONS(13), 6,
      aux_sym__bool_true_token1,
      aux_sym__bool_true_token2,
      aux_sym__bool_true_token3,
      aux_sym__bool_false_token1,
      aux_sym__bool_false_token2,
      aux_sym__bool_false_token3,
    STATE(17), 8,
      sym_bool,
      sym__quoted_string,
      sym__single_quoted_string,
      sym__double_quoted_string,
      sym_regex,
      sym_keyword,
      sym_function,
      sym__list_operator,
  [185] = 9,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_r,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(29), 1,
      sym__template_keyword,
    STATE(71), 1,
      sym__expression,
    STATE(35), 2,
      sym__bool_true,
      sym__bool_false,
    ACTIONS(13), 6,
      aux_sym__bool_true_token1,
      aux_sym__bool_true_token2,
      aux_sym__bool_true_token3,
      aux_sym__bool_false_token1,
      aux_sym__bool_false_token2,
      aux_sym__bool_false_token3,
    STATE(17), 8,
      sym_bool,
      sym__quoted_string,
      sym__single_quoted_string,
      sym__double_quoted_string,
      sym_regex,
      sym_keyword,
      sym_function,
      sym__list_operator,
  [226] = 9,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_r,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(29), 1,
      sym__template_keyword,
    STATE(68), 1,
      sym__expression,
    STATE(35), 2,
      sym__bool_true,
      sym__bool_false,
    ACTIONS(13), 6,
      aux_sym__bool_true_token1,
      aux_sym__bool_true_token2,
      aux_sym__bool_true_token3,
      aux_sym__bool_false_token1,
      aux_sym__bool_false_token2,
      aux_sym__bool_false_token3,
    STATE(17), 8,
      sym_bool,
      sym__quoted_string,
      sym__single_quoted_string,
      sym__double_quoted_string,
      sym_regex,
      sym_keyword,
      sym_function,
      sym__list_operator,
  [267] = 9,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_r,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(29), 1,
      sym__template_keyword,
    STATE(59), 1,
      sym__expression,
    STATE(35), 2,
      sym__bool_true,
      sym__bool_false,
    ACTIONS(13), 6,
      aux_sym__bool_true_token1,
      aux_sym__bool_true_token2,
      aux_sym__bool_true_token3,
      aux_sym__bool_false_token1,
      aux_sym__bool_false_token2,
      aux_sym__bool_false_token3,
    STATE(17), 8,
      sym_bool,
      sym__quoted_string,
      sym__single_quoted_string,
      sym__double_quoted_string,
      sym_regex,
      sym_keyword,
      sym_function,
      sym__list_operator,
  [308] = 9,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_r,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(29), 1,
      sym__template_keyword,
    STATE(70), 1,
      sym__expression,
    STATE(35), 2,
      sym__bool_true,
      sym__bool_false,
    ACTIONS(13), 6,
      aux_sym__bool_true_token1,
      aux_sym__bool_true_token2,
      aux_sym__bool_true_token3,
      aux_sym__bool_false_token1,
      aux_sym__bool_false_token2,
      aux_sym__bool_false_token3,
    STATE(17), 8,
      sym_bool,
      sym__quoted_string,
      sym__single_quoted_string,
      sym__double_quoted_string,
      sym_regex,
      sym_keyword,
      sym_function,
      sym__list_operator,
  [349] = 10,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      aux_sym__interpolated_text_token1,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym__newline,
    STATE(18), 1,
      aux_sym__string_repeat1,
    STATE(66), 1,
      sym__string,
    STATE(22), 2,
      aux_sym__interpolated_text,
      sym_template,
    STATE(78), 2,
      sym__bool_true,
      sym__bool_false,
    STATE(77), 3,
      sym__value,
      sym_string,
      sym_bool,
    ACTIONS(33), 6,
      aux_sym__bool_true_token1,
      aux_sym__bool_true_token2,
      aux_sym__bool_true_token3,
      aux_sym__bool_false_token1,
      aux_sym__bool_false_token2,
      aux_sym__bool_false_token3,
  [389] = 6,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(7), 1,
      anon_sym_PERCENTinclude,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    STATE(56), 1,
      sym__section_header,
    ACTIONS(9), 2,
      anon_sym_POUND,
      anon_sym_SEMI,
    STATE(73), 4,
      sym__statement,
      sym_section,
      sym_include,
      sym_comment,
  [412] = 6,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(7), 1,
      anon_sym_PERCENTinclude,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    STATE(56), 1,
      sym__section_header,
    ACTIONS(9), 2,
      anon_sym_POUND,
      anon_sym_SEMI,
    STATE(73), 4,
      sym__statement,
      sym_section,
      sym_include,
      sym_comment,
  [435] = 6,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(7), 1,
      anon_sym_PERCENTinclude,
    ACTIONS(46), 1,
      ts_builtin_sym_end,
    STATE(56), 1,
      sym__section_header,
    ACTIONS(9), 2,
      anon_sym_POUND,
      anon_sym_SEMI,
    STATE(73), 4,
      sym__statement,
      sym_section,
      sym_include,
      sym_comment,
  [458] = 5,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(7), 1,
      anon_sym_PERCENTinclude,
    STATE(56), 1,
      sym__section_header,
    ACTIONS(9), 2,
      anon_sym_POUND,
      anon_sym_SEMI,
    STATE(73), 4,
      sym__statement,
      sym_section,
      sym_include,
      sym_comment,
  [478] = 3,
    ACTIONS(50), 1,
      anon_sym_PIPE,
    STATE(19), 2,
      sym__filter,
      aux_sym__expression_repeat1,
    ACTIONS(48), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym__list_operator_token1,
  [492] = 6,
    ACTIONS(52), 1,
      ts_builtin_sym_end,
    ACTIONS(54), 1,
      aux_sym__interpolated_text_token1,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(60), 1,
      sym__newline,
    STATE(16), 1,
      aux_sym__string_repeat1,
    STATE(42), 2,
      aux_sym__interpolated_text,
      sym_template,
  [512] = 3,
    ACTIONS(50), 1,
      anon_sym_PIPE,
    STATE(15), 2,
      sym__filter,
      aux_sym__expression_repeat1,
    ACTIONS(63), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym__list_operator_token1,
  [526] = 6,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    ACTIONS(67), 1,
      aux_sym__interpolated_text_token1,
    ACTIONS(69), 1,
      anon_sym_LBRACE,
    ACTIONS(71), 1,
      sym__newline,
    STATE(16), 1,
      aux_sym__string_repeat1,
    STATE(42), 2,
      aux_sym__interpolated_text,
      sym_template,
  [546] = 3,
    ACTIONS(76), 1,
      anon_sym_PIPE,
    STATE(19), 2,
      sym__filter,
      aux_sym__expression_repeat1,
    ACTIONS(74), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym__list_operator_token1,
  [560] = 4,
    ACTIONS(81), 1,
      sym_option_name,
    ACTIONS(9), 2,
      anon_sym_POUND,
      anon_sym_SEMI,
    ACTIONS(79), 2,
      ts_builtin_sym_end,
      sym__newline,
    STATE(67), 2,
      sym_option,
      sym_comment,
  [576] = 2,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 5,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym__list_operator_token1,
      anon_sym_PIPE,
  [587] = 5,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    ACTIONS(87), 1,
      aux_sym__interpolated_text_token1,
    ACTIONS(89), 1,
      sym__newline,
    STATE(23), 2,
      aux_sym__interpolated_text,
      sym_template,
  [604] = 4,
    ACTIONS(94), 1,
      aux_sym__interpolated_text_token1,
    ACTIONS(97), 1,
      anon_sym_LBRACE,
    ACTIONS(92), 2,
      ts_builtin_sym_end,
      sym__newline,
    STATE(23), 2,
      aux_sym__interpolated_text,
      sym_template,
  [619] = 3,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(100), 1,
      aux_sym_option_token1,
    ACTIONS(83), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym__list_operator_token1,
      anon_sym_PIPE,
  [632] = 4,
    ACTIONS(104), 1,
      aux_sym__interpolated_text_token1,
    ACTIONS(107), 1,
      anon_sym_LBRACE,
    ACTIONS(102), 2,
      ts_builtin_sym_end,
      sym__newline,
    STATE(23), 2,
      aux_sym__interpolated_text,
      sym_template,
  [647] = 4,
    ACTIONS(112), 1,
      aux_sym__interpolated_text_token1,
    ACTIONS(115), 1,
      anon_sym_LBRACE,
    ACTIONS(110), 2,
      ts_builtin_sym_end,
      sym__newline,
    STATE(23), 2,
      aux_sym__interpolated_text,
      sym_template,
  [662] = 1,
    ACTIONS(118), 5,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym__list_operator_token1,
      anon_sym_PIPE,
  [670] = 1,
    ACTIONS(120), 5,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym__list_operator_token1,
      anon_sym_PIPE,
  [678] = 1,
    ACTIONS(122), 5,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym__list_operator_token1,
      anon_sym_PIPE,
  [686] = 4,
    ACTIONS(124), 1,
      anon_sym_LBRACE,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    ACTIONS(129), 1,
      aux_sym__single_quoted_string_token1,
    STATE(30), 2,
      sym_template,
      aux_sym__single_quoted_string_repeat1,
  [700] = 1,
    ACTIONS(132), 5,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym__list_operator_token1,
      anon_sym_PIPE,
  [708] = 4,
    ACTIONS(92), 1,
      sym__newline,
    ACTIONS(134), 1,
      aux_sym__interpolated_text_token1,
    ACTIONS(137), 1,
      anon_sym_LBRACE,
    STATE(32), 2,
      aux_sym__interpolated_text,
      sym_template,
  [722] = 4,
    ACTIONS(140), 1,
      anon_sym_LBRACE,
    ACTIONS(142), 1,
      anon_sym_DQUOTE,
    ACTIONS(144), 1,
      aux_sym__single_quoted_string_token1,
    STATE(45), 2,
      sym_template,
      aux_sym__single_quoted_string_repeat1,
  [736] = 4,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
    ACTIONS(148), 1,
      anon_sym_SQUOTE,
    ACTIONS(150), 1,
      aux_sym__double_quoted_string_token1,
    STATE(37), 2,
      sym_template,
      aux_sym__double_quoted_string_repeat1,
  [750] = 1,
    ACTIONS(152), 5,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym__list_operator_token1,
      anon_sym_PIPE,
  [758] = 1,
    ACTIONS(154), 5,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym__list_operator_token1,
      anon_sym_PIPE,
  [766] = 4,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
    ACTIONS(156), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      aux_sym__double_quoted_string_token1,
    STATE(38), 2,
      sym_template,
      aux_sym__double_quoted_string_repeat1,
  [780] = 4,
    ACTIONS(160), 1,
      anon_sym_LBRACE,
    ACTIONS(163), 1,
      anon_sym_SQUOTE,
    ACTIONS(165), 1,
      aux_sym__double_quoted_string_token1,
    STATE(38), 2,
      sym_template,
      aux_sym__double_quoted_string_repeat1,
  [794] = 1,
    ACTIONS(168), 5,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym__list_operator_token1,
      anon_sym_PIPE,
  [802] = 3,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    STATE(36), 3,
      sym__quoted_string,
      sym__single_quoted_string,
      sym__double_quoted_string,
  [814] = 1,
    ACTIONS(170), 5,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym__list_operator_token1,
      anon_sym_PIPE,
  [822] = 4,
    ACTIONS(69), 1,
      anon_sym_LBRACE,
    ACTIONS(172), 1,
      aux_sym__interpolated_text_token1,
    ACTIONS(174), 1,
      sym__newline,
    STATE(32), 2,
      aux_sym__interpolated_text,
      sym_template,
  [836] = 1,
    ACTIONS(176), 5,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym__list_operator_token1,
      anon_sym_PIPE,
  [844] = 1,
    ACTIONS(178), 5,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym__list_operator_token1,
      anon_sym_PIPE,
  [852] = 4,
    ACTIONS(140), 1,
      anon_sym_LBRACE,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      aux_sym__single_quoted_string_token1,
    STATE(30), 2,
      sym_template,
      aux_sym__single_quoted_string_repeat1,
  [866] = 3,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(184), 1,
      aux_sym__interpolated_text_token1,
    STATE(25), 2,
      aux_sym__interpolated_text,
      sym_template,
  [877] = 2,
    ACTIONS(188), 1,
      aux_sym__interpolated_text_token1,
    ACTIONS(186), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym__newline,
  [886] = 3,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(190), 1,
      aux_sym__interpolated_text_token1,
    STATE(26), 2,
      aux_sym__interpolated_text,
      sym_template,
  [897] = 3,
    ACTIONS(194), 1,
      aux_sym_include_token1,
    STATE(74), 1,
      sym__text,
    ACTIONS(192), 2,
      ts_builtin_sym_end,
      sym__newline,
  [908] = 3,
    ACTIONS(196), 1,
      ts_builtin_sym_end,
    ACTIONS(198), 1,
      sym__newline,
    STATE(50), 1,
      aux_sym_section_repeat1,
  [918] = 3,
    ACTIONS(201), 1,
      ts_builtin_sym_end,
    ACTIONS(203), 1,
      sym__newline,
    STATE(51), 1,
      aux_sym_source_repeat1,
  [928] = 3,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    ACTIONS(206), 1,
      sym__newline,
    STATE(61), 1,
      aux_sym_source_repeat1,
  [938] = 1,
    ACTIONS(186), 3,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      aux_sym__double_quoted_string_token1,
  [944] = 1,
    ACTIONS(186), 3,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      aux_sym__single_quoted_string_token1,
  [950] = 2,
    ACTIONS(188), 1,
      aux_sym__interpolated_text_token1,
    ACTIONS(186), 2,
      anon_sym_LBRACE,
      sym__newline,
  [958] = 3,
    ACTIONS(208), 1,
      ts_builtin_sym_end,
    ACTIONS(210), 1,
      sym__newline,
    STATE(62), 1,
      aux_sym_section_repeat1,
  [968] = 3,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    ACTIONS(206), 1,
      sym__newline,
    STATE(51), 1,
      aux_sym_source_repeat1,
  [978] = 3,
    ACTIONS(213), 1,
      anon_sym_RPAREN,
    ACTIONS(215), 1,
      anon_sym_COMMA,
    STATE(58), 1,
      aux_sym__function_args_repeat1,
  [988] = 2,
    ACTIONS(220), 1,
      aux_sym__list_operator_token1,
    ACTIONS(218), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [996] = 3,
    ACTIONS(222), 1,
      anon_sym_RPAREN,
    ACTIONS(224), 1,
      anon_sym_COMMA,
    STATE(58), 1,
      aux_sym__function_args_repeat1,
  [1006] = 3,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    ACTIONS(226), 1,
      sym__newline,
    STATE(51), 1,
      aux_sym_source_repeat1,
  [1016] = 3,
    ACTIONS(228), 1,
      ts_builtin_sym_end,
    ACTIONS(230), 1,
      sym__newline,
    STATE(50), 1,
      aux_sym_section_repeat1,
  [1026] = 3,
    ACTIONS(224), 1,
      anon_sym_COMMA,
    ACTIONS(233), 1,
      anon_sym_RPAREN,
    STATE(60), 1,
      aux_sym__function_args_repeat1,
  [1036] = 2,
    ACTIONS(220), 1,
      aux_sym__list_operator_token1,
    ACTIONS(235), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1044] = 1,
    ACTIONS(237), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1049] = 1,
    ACTIONS(239), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1054] = 1,
    ACTIONS(196), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1059] = 2,
    ACTIONS(220), 1,
      aux_sym__list_operator_token1,
    ACTIONS(241), 1,
      anon_sym_RBRACE,
  [1066] = 1,
    ACTIONS(243), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1071] = 2,
    ACTIONS(220), 1,
      aux_sym__list_operator_token1,
    ACTIONS(245), 1,
      anon_sym_RBRACE,
  [1078] = 2,
    ACTIONS(220), 1,
      aux_sym__list_operator_token1,
    ACTIONS(247), 1,
      anon_sym_RBRACE,
  [1085] = 2,
    ACTIONS(220), 1,
      aux_sym__list_operator_token1,
    ACTIONS(249), 1,
      anon_sym_RBRACE,
  [1092] = 1,
    ACTIONS(201), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1097] = 1,
    ACTIONS(251), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1102] = 1,
    ACTIONS(253), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1107] = 2,
    ACTIONS(255), 1,
      anon_sym_DQUOTE,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
  [1114] = 1,
    ACTIONS(259), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1119] = 1,
    ACTIONS(152), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1124] = 1,
    ACTIONS(213), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1129] = 1,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
  [1133] = 1,
    ACTIONS(263), 1,
      aux_sym_regex_token1,
  [1137] = 1,
    ACTIONS(265), 1,
      aux_sym_option_token1,
  [1141] = 1,
    ACTIONS(267), 1,
      anon_sym_RBRACK,
  [1145] = 1,
    ACTIONS(261), 1,
      anon_sym_DQUOTE,
  [1149] = 1,
    ACTIONS(269), 1,
      aux_sym__string_token1,
  [1153] = 1,
    ACTIONS(271), 1,
      aux_sym__section_header_token1,
  [1157] = 1,
    ACTIONS(273), 1,
      aux_sym__string_token1,
  [1161] = 1,
    ACTIONS(275), 1,
      aux_sym_regex_token2,
  [1165] = 1,
    ACTIONS(277), 1,
      anon_sym_RPAREN,
  [1169] = 1,
    ACTIONS(279), 1,
      sym__template_keyword,
  [1173] = 1,
    ACTIONS(281), 1,
      ts_builtin_sym_end,
  [1177] = 1,
    ACTIONS(283), 1,
      aux_sym_include_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 51,
  [SMALL_STATE(4)] = 99,
  [SMALL_STATE(5)] = 144,
  [SMALL_STATE(6)] = 185,
  [SMALL_STATE(7)] = 226,
  [SMALL_STATE(8)] = 267,
  [SMALL_STATE(9)] = 308,
  [SMALL_STATE(10)] = 349,
  [SMALL_STATE(11)] = 389,
  [SMALL_STATE(12)] = 412,
  [SMALL_STATE(13)] = 435,
  [SMALL_STATE(14)] = 458,
  [SMALL_STATE(15)] = 478,
  [SMALL_STATE(16)] = 492,
  [SMALL_STATE(17)] = 512,
  [SMALL_STATE(18)] = 526,
  [SMALL_STATE(19)] = 546,
  [SMALL_STATE(20)] = 560,
  [SMALL_STATE(21)] = 576,
  [SMALL_STATE(22)] = 587,
  [SMALL_STATE(23)] = 604,
  [SMALL_STATE(24)] = 619,
  [SMALL_STATE(25)] = 632,
  [SMALL_STATE(26)] = 647,
  [SMALL_STATE(27)] = 662,
  [SMALL_STATE(28)] = 670,
  [SMALL_STATE(29)] = 678,
  [SMALL_STATE(30)] = 686,
  [SMALL_STATE(31)] = 700,
  [SMALL_STATE(32)] = 708,
  [SMALL_STATE(33)] = 722,
  [SMALL_STATE(34)] = 736,
  [SMALL_STATE(35)] = 750,
  [SMALL_STATE(36)] = 758,
  [SMALL_STATE(37)] = 766,
  [SMALL_STATE(38)] = 780,
  [SMALL_STATE(39)] = 794,
  [SMALL_STATE(40)] = 802,
  [SMALL_STATE(41)] = 814,
  [SMALL_STATE(42)] = 822,
  [SMALL_STATE(43)] = 836,
  [SMALL_STATE(44)] = 844,
  [SMALL_STATE(45)] = 852,
  [SMALL_STATE(46)] = 866,
  [SMALL_STATE(47)] = 877,
  [SMALL_STATE(48)] = 886,
  [SMALL_STATE(49)] = 897,
  [SMALL_STATE(50)] = 908,
  [SMALL_STATE(51)] = 918,
  [SMALL_STATE(52)] = 928,
  [SMALL_STATE(53)] = 938,
  [SMALL_STATE(54)] = 944,
  [SMALL_STATE(55)] = 950,
  [SMALL_STATE(56)] = 958,
  [SMALL_STATE(57)] = 968,
  [SMALL_STATE(58)] = 978,
  [SMALL_STATE(59)] = 988,
  [SMALL_STATE(60)] = 996,
  [SMALL_STATE(61)] = 1006,
  [SMALL_STATE(62)] = 1016,
  [SMALL_STATE(63)] = 1026,
  [SMALL_STATE(64)] = 1036,
  [SMALL_STATE(65)] = 1044,
  [SMALL_STATE(66)] = 1049,
  [SMALL_STATE(67)] = 1054,
  [SMALL_STATE(68)] = 1059,
  [SMALL_STATE(69)] = 1066,
  [SMALL_STATE(70)] = 1071,
  [SMALL_STATE(71)] = 1078,
  [SMALL_STATE(72)] = 1085,
  [SMALL_STATE(73)] = 1092,
  [SMALL_STATE(74)] = 1097,
  [SMALL_STATE(75)] = 1102,
  [SMALL_STATE(76)] = 1107,
  [SMALL_STATE(77)] = 1114,
  [SMALL_STATE(78)] = 1119,
  [SMALL_STATE(79)] = 1124,
  [SMALL_STATE(80)] = 1129,
  [SMALL_STATE(81)] = 1133,
  [SMALL_STATE(82)] = 1137,
  [SMALL_STATE(83)] = 1141,
  [SMALL_STATE(84)] = 1145,
  [SMALL_STATE(85)] = 1149,
  [SMALL_STATE(86)] = 1153,
  [SMALL_STATE(87)] = 1157,
  [SMALL_STATE(88)] = 1161,
  [SMALL_STATE(89)] = 1165,
  [SMALL_STATE(90)] = 1169,
  [SMALL_STATE(91)] = 1173,
  [SMALL_STATE(92)] = 1177,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 2, .production_id = 2),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_option, 2, .production_id = 2), SHIFT(87),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 2),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 3),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 2),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__string_repeat1, 2),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_repeat1, 2), SHIFT_REPEAT(42),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_repeat1, 2), SHIFT_REPEAT(6),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_repeat1, 2), SHIFT_REPEAT(87),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 1),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__string, 1), SHIFT(87),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expression_repeat1, 2),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_repeat1, 2), SHIFT_REPEAT(90),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 1),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__string, 1), SHIFT(85),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__interpolated_text, 2),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__interpolated_text, 2), SHIFT_REPEAT(23),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__interpolated_text, 2), SHIFT_REPEAT(5),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__string_repeat1, 3),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_repeat1, 3), SHIFT(23),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_repeat1, 3), SHIFT(5),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__string_repeat1, 4),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_repeat1, 4), SHIFT(23),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_repeat1, 4), SHIFT(5),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 4),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__filter, 2, .production_id = 3),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quoted_string, 3),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__single_quoted_string_repeat1, 2), SHIFT_REPEAT(9),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__single_quoted_string_repeat1, 2),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__single_quoted_string_repeat1, 2), SHIFT_REPEAT(30),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_quoted_string, 3),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__interpolated_text, 2), SHIFT_REPEAT(32),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__interpolated_text, 2), SHIFT_REPEAT(6),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_operator, 3),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__double_quoted_string_repeat1, 2), SHIFT_REPEAT(7),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__double_quoted_string_repeat1, 2),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__double_quoted_string_repeat1, 2), SHIFT_REPEAT(38),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quoted_string, 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 3),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 4),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_quoted_string, 2),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 3),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template, 3),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(20),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(14),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_section, 1), SHIFT(20),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__function_args_repeat1, 2),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__function_args_repeat1, 2), SHIFT_REPEAT(3),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_argument, 3),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_args, 2),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 2),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_section, 2), SHIFT(20),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_args, 1),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_arg, 1),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__function_args_repeat1, 3),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__section_header, 3),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2, .production_id = 1),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 3, .production_id = 2),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [281] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
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
