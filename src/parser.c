#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 93
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 72
#define ALIAS_COUNT 3
#define TOKEN_COUNT 37
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
  aux_sym__double_quoted_string_token1 = 22,
  anon_sym_SQUOTE = 23,
  aux_sym__single_quoted_string_token1 = 24,
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
  sym_escape = 35,
  sym__newline = 36,
  sym_source = 37,
  sym__statement = 38,
  sym_section = 39,
  sym__section_header = 40,
  sym_option = 41,
  sym__value = 42,
  sym_string = 43,
  sym__string = 44,
  sym_bool = 45,
  sym__bool_true = 46,
  sym__bool_false = 47,
  sym_include = 48,
  sym_comment = 49,
  aux_sym__interpolated_text = 50,
  sym_template = 51,
  sym__expression = 52,
  sym__quoted_string = 53,
  sym__double_quoted_string = 54,
  sym__single_quoted_string = 55,
  sym_regex = 56,
  sym_keyword = 57,
  sym_function = 58,
  sym__function_args = 59,
  sym__function_arg = 60,
  sym_named_argument = 61,
  sym__list_operator = 62,
  sym__filter = 63,
  sym__text = 64,
  aux_sym_source_repeat1 = 65,
  aux_sym_section_repeat1 = 66,
  aux_sym__string_repeat1 = 67,
  aux_sym__expression_repeat1 = 68,
  aux_sym__double_quoted_string_repeat1 = 69,
  aux_sym__single_quoted_string_repeat1 = 70,
  aux_sym__function_args_repeat1 = 71,
  anon_alias_sym_EQ = 72,
  alias_sym_filter = 73,
  alias_sym_path = 74,
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
  [aux_sym__double_quoted_string_token1] = "_double_quoted_string_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym__single_quoted_string_token1] = "_single_quoted_string_token1",
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
  [sym_escape] = "escape",
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
  [sym__double_quoted_string] = "string",
  [sym__single_quoted_string] = "string",
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
  [aux_sym__double_quoted_string_repeat1] = "_double_quoted_string_repeat1",
  [aux_sym__single_quoted_string_repeat1] = "_single_quoted_string_repeat1",
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
  [aux_sym__double_quoted_string_token1] = aux_sym__double_quoted_string_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym__single_quoted_string_token1] = aux_sym__single_quoted_string_token1,
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
  [sym_escape] = sym_escape,
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
  [sym__double_quoted_string] = sym_string,
  [sym__single_quoted_string] = sym_string,
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
  [aux_sym__double_quoted_string_repeat1] = aux_sym__double_quoted_string_repeat1,
  [aux_sym__single_quoted_string_repeat1] = aux_sym__single_quoted_string_repeat1,
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
  [aux_sym__double_quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__single_quoted_string_token1] = {
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
  [sym_escape] = {
    .visible = true,
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
  [sym__double_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym__single_quoted_string] = {
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
  [aux_sym__double_quoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__single_quoted_string_repeat1] = {
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
  [8] = 5,
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
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 16,
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
  [39] = 32,
  [40] = 32,
  [41] = 41,
  [42] = 32,
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
  [63] = 62,
  [64] = 62,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 71,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 62,
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
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(68);
      if (lookahead == '#') ADVANCE(46);
      if (lookahead == '%') ADVANCE(10);
      if (lookahead == '\'') ADVANCE(70);
      if (lookahead == '(') ADVANCE(76);
      if (lookahead == ')') ADVANCE(77);
      if (lookahead == ';') ADVANCE(47);
      if (lookahead == '[') ADVANCE(24);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == ']') ADVANCE(26);
      if (lookahead == 'r') ADVANCE(72);
      if (lookahead == '{') ADVANCE(63);
      if (lookahead == '|') ADVANCE(80);
      if (lookahead == '}') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(81);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(88);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(85);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(89);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(95);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(68);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == '{') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(69);
      END_STATE();
    case 3:
      if (lookahead == '%') ADVANCE(79);
      if (lookahead == ')') ADVANCE(77);
      if (lookahead == ',') ADVANCE(78);
      if (lookahead == '}') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 4:
      if (lookahead == '%') ADVANCE(79);
      if (lookahead == ',') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(70);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == '{') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(71);
      END_STATE();
    case 6:
      if (lookahead == '\\') ADVANCE(61);
      if (lookahead == '{') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(62);
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
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 15:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(45);
      END_STATE();
    case 16:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(73);
      END_STATE();
    case 17:
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(74);
      END_STATE();
    case 18:
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(25);
      END_STATE();
    case 19:
      if (eof) ADVANCE(23);
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '\r') ADVANCE(48);
      if (lookahead == '\\') ADVANCE(61);
      if (lookahead == '{') ADVANCE(63);
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
          lookahead != '}') ADVANCE(62);
      END_STATE();
    case 20:
      if (eof) ADVANCE(23);
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '\r') ADVANCE(48);
      if (lookahead == '\\') ADVANCE(61);
      if (lookahead == '{') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(62);
      END_STATE();
    case 21:
      if (eof) ADVANCE(23);
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '\r') ADVANCE(28);
      if (lookahead == '#') ADVANCE(46);
      if (lookahead == ';') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(29);
      END_STATE();
    case 22:
      if (eof) ADVANCE(23);
      if (lookahead == '\n') ADVANCE(95);
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
      if (lookahead == '\n') ADVANCE(95);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym__bool_true_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(62);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym__bool_true_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym__bool_true_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(62);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym__bool_true_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym__bool_true_token3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(62);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym__bool_false_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym__bool_false_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(62);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym__bool_false_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym__bool_false_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(62);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym__bool_false_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym__bool_false_token3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(62);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_PERCENTinclude);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_include_token1);
      if (lookahead == '\n') ADVANCE(95);
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
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(62);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym__interpolated_text_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(62);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym__interpolated_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(62);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym__interpolated_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(62);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym__interpolated_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(62);
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
          lookahead != '}') ADVANCE(62);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym__interpolated_text_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(62);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym__interpolated_text_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(62);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym__interpolated_text_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(62);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym__interpolated_text_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(62);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym__interpolated_text_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(62);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym__interpolated_text_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(62);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym__interpolated_text_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(62);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym__interpolated_text_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym__interpolated_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym__expression_token1);
      if (lookahead == '(') ADVANCE(76);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == '|') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(66);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(67);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym__expression_token1);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(66);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym__expression_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym__double_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym__single_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_r);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_regex_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_regex_token2);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym__function_args_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym__list_operator_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym__template_keyword);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym__template_keyword);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym__template_keyword);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym__template_keyword);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__template_keyword);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(86);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__template_keyword);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__template_keyword);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__template_keyword);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__template_keyword);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__template_keyword);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__template_keyword);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__template_keyword);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__template_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_escape);
      END_STATE();
    case 95:
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
  [16] = {.lex_state = 20},
  [17] = {.lex_state = 20},
  [18] = {.lex_state = 21},
  [19] = {.lex_state = 20},
  [20] = {.lex_state = 20},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 20},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 20},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 20},
  [33] = {.lex_state = 65},
  [34] = {.lex_state = 22},
  [35] = {.lex_state = 65},
  [36] = {.lex_state = 65},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 20},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 65},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 65},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 65},
  [59] = {.lex_state = 65},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 65},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 65},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 65},
  [68] = {.lex_state = 65},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 65},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 65},
  [75] = {.lex_state = 65},
  [76] = {.lex_state = 65},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 17},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 16},
  [86] = {.lex_state = 18},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 65},
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
    [sym_escape] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(91),
    [sym__statement] = STATE(45),
    [sym_section] = STATE(45),
    [sym__section_header] = STATE(46),
    [sym_include] = STATE(45),
    [sym_comment] = STATE(45),
    [aux_sym_source_repeat1] = STATE(47),
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
    STATE(54), 1,
      sym__expression,
    STATE(83), 1,
      sym__function_args,
    STATE(53), 2,
      sym__function_arg,
      sym_named_argument,
    STATE(75), 2,
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
      sym__double_quoted_string,
      sym__single_quoted_string,
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
    STATE(54), 1,
      sym__expression,
    STATE(75), 2,
      sym__bool_true,
      sym__bool_false,
    STATE(78), 2,
      sym__function_arg,
      sym_named_argument,
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
      sym__double_quoted_string,
      sym__single_quoted_string,
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
    STATE(49), 1,
      sym__expression,
    STATE(75), 2,
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
      sym__double_quoted_string,
      sym__single_quoted_string,
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
    STATE(62), 1,
      sym__expression,
    STATE(75), 2,
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
      sym__double_quoted_string,
      sym__single_quoted_string,
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
    STATE(63), 1,
      sym__expression,
    STATE(75), 2,
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
      sym__double_quoted_string,
      sym__single_quoted_string,
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
    STATE(79), 1,
      sym__expression,
    STATE(75), 2,
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
      sym__double_quoted_string,
      sym__single_quoted_string,
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
    STATE(64), 1,
      sym__expression,
    STATE(75), 2,
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
      sym__double_quoted_string,
      sym__single_quoted_string,
      sym_regex,
      sym_keyword,
      sym_function,
      sym__list_operator,
  [301] = 11,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      aux_sym__interpolated_text_token1,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 1,
      sym_escape,
    ACTIONS(39), 1,
      sym__newline,
    STATE(14), 1,
      aux_sym__string_repeat1,
    STATE(69), 1,
      sym__string,
    STATE(19), 2,
      aux_sym__interpolated_text,
      sym_template,
    STATE(71), 2,
      sym__bool_true,
      sym__bool_false,
    STATE(56), 3,
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
  [344] = 6,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(7), 1,
      anon_sym_PERCENTinclude,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    STATE(46), 1,
      sym__section_header,
    ACTIONS(9), 2,
      anon_sym_POUND,
      anon_sym_SEMI,
    STATE(57), 4,
      sym__statement,
      sym_section,
      sym_include,
      sym_comment,
  [367] = 6,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(7), 1,
      anon_sym_PERCENTinclude,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    STATE(46), 1,
      sym__section_header,
    ACTIONS(9), 2,
      anon_sym_POUND,
      anon_sym_SEMI,
    STATE(57), 4,
      sym__statement,
      sym_section,
      sym_include,
      sym_comment,
  [390] = 6,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(7), 1,
      anon_sym_PERCENTinclude,
    ACTIONS(46), 1,
      ts_builtin_sym_end,
    STATE(46), 1,
      sym__section_header,
    ACTIONS(9), 2,
      anon_sym_POUND,
      anon_sym_SEMI,
    STATE(57), 4,
      sym__statement,
      sym_section,
      sym_include,
      sym_comment,
  [413] = 5,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(7), 1,
      anon_sym_PERCENTinclude,
    STATE(46), 1,
      sym__section_header,
    ACTIONS(9), 2,
      anon_sym_POUND,
      anon_sym_SEMI,
    STATE(57), 4,
      sym__statement,
      sym_section,
      sym_include,
      sym_comment,
  [433] = 7,
    ACTIONS(48), 1,
      ts_builtin_sym_end,
    ACTIONS(50), 1,
      aux_sym__interpolated_text_token1,
    ACTIONS(52), 1,
      anon_sym_LBRACE,
    ACTIONS(54), 1,
      sym_escape,
    ACTIONS(56), 1,
      sym__newline,
    STATE(15), 1,
      aux_sym__string_repeat1,
    STATE(23), 2,
      aux_sym__interpolated_text,
      sym_template,
  [456] = 7,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    ACTIONS(61), 1,
      aux_sym__interpolated_text_token1,
    ACTIONS(64), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      sym_escape,
    ACTIONS(70), 1,
      sym__newline,
    STATE(15), 1,
      aux_sym__string_repeat1,
    STATE(23), 2,
      aux_sym__interpolated_text,
      sym_template,
  [479] = 5,
    ACTIONS(75), 1,
      aux_sym__interpolated_text_token1,
    ACTIONS(78), 1,
      anon_sym_LBRACE,
    ACTIONS(81), 1,
      sym_escape,
    ACTIONS(73), 2,
      ts_builtin_sym_end,
      sym__newline,
    STATE(16), 2,
      aux_sym__interpolated_text,
      sym_template,
  [497] = 5,
    ACTIONS(86), 1,
      aux_sym__interpolated_text_token1,
    ACTIONS(89), 1,
      anon_sym_LBRACE,
    ACTIONS(92), 1,
      sym_escape,
    ACTIONS(84), 2,
      ts_builtin_sym_end,
      sym__newline,
    STATE(16), 2,
      aux_sym__interpolated_text,
      sym_template,
  [515] = 4,
    ACTIONS(97), 1,
      sym_option_name,
    ACTIONS(9), 2,
      anon_sym_POUND,
      anon_sym_SEMI,
    ACTIONS(95), 2,
      ts_builtin_sym_end,
      sym__newline,
    STATE(60), 2,
      sym_option,
      sym_comment,
  [531] = 6,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(48), 1,
      ts_builtin_sym_end,
    ACTIONS(99), 1,
      aux_sym__interpolated_text_token1,
    ACTIONS(101), 1,
      sym_escape,
    ACTIONS(103), 1,
      sym__newline,
    STATE(16), 2,
      aux_sym__interpolated_text,
      sym_template,
  [551] = 5,
    ACTIONS(108), 1,
      aux_sym__interpolated_text_token1,
    ACTIONS(111), 1,
      anon_sym_LBRACE,
    ACTIONS(114), 1,
      sym_escape,
    ACTIONS(106), 2,
      ts_builtin_sym_end,
      sym__newline,
    STATE(16), 2,
      aux_sym__interpolated_text,
      sym_template,
  [569] = 4,
    ACTIONS(117), 1,
      anon_sym_LBRACE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(122), 2,
      aux_sym__single_quoted_string_token1,
      sym_escape,
    STATE(21), 2,
      sym_template,
      aux_sym__single_quoted_string_repeat1,
  [584] = 4,
    ACTIONS(125), 1,
      anon_sym_LBRACE,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    ACTIONS(129), 2,
      aux_sym__double_quoted_string_token1,
      sym_escape,
    STATE(24), 2,
      sym_template,
      aux_sym__double_quoted_string_repeat1,
  [599] = 5,
    ACTIONS(52), 1,
      anon_sym_LBRACE,
    ACTIONS(131), 1,
      aux_sym__interpolated_text_token1,
    ACTIONS(133), 1,
      sym_escape,
    ACTIONS(135), 1,
      sym__newline,
    STATE(25), 2,
      aux_sym__interpolated_text,
      sym_template,
  [616] = 4,
    ACTIONS(125), 1,
      anon_sym_LBRACE,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(139), 2,
      aux_sym__double_quoted_string_token1,
      sym_escape,
    STATE(28), 2,
      sym_template,
      aux_sym__double_quoted_string_repeat1,
  [631] = 5,
    ACTIONS(73), 1,
      sym__newline,
    ACTIONS(141), 1,
      aux_sym__interpolated_text_token1,
    ACTIONS(144), 1,
      anon_sym_LBRACE,
    ACTIONS(147), 1,
      sym_escape,
    STATE(25), 2,
      aux_sym__interpolated_text,
      sym_template,
  [648] = 4,
    ACTIONS(150), 1,
      anon_sym_LBRACE,
    ACTIONS(152), 1,
      anon_sym_SQUOTE,
    ACTIONS(154), 2,
      aux_sym__single_quoted_string_token1,
      sym_escape,
    STATE(21), 2,
      sym_template,
      aux_sym__single_quoted_string_repeat1,
  [663] = 4,
    ACTIONS(150), 1,
      anon_sym_LBRACE,
    ACTIONS(156), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 2,
      aux_sym__single_quoted_string_token1,
      sym_escape,
    STATE(26), 2,
      sym_template,
      aux_sym__single_quoted_string_repeat1,
  [678] = 4,
    ACTIONS(160), 1,
      anon_sym_LBRACE,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    ACTIONS(165), 2,
      aux_sym__double_quoted_string_token1,
      sym_escape,
    STATE(28), 2,
      sym_template,
      aux_sym__double_quoted_string_repeat1,
  [693] = 4,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(168), 1,
      aux_sym__interpolated_text_token1,
    ACTIONS(170), 1,
      sym_escape,
    STATE(17), 2,
      aux_sym__interpolated_text,
      sym_template,
  [707] = 4,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(172), 1,
      aux_sym__interpolated_text_token1,
    ACTIONS(174), 1,
      sym_escape,
    STATE(20), 2,
      aux_sym__interpolated_text,
      sym_template,
  [721] = 3,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    STATE(72), 3,
      sym__quoted_string,
      sym__double_quoted_string,
      sym__single_quoted_string,
  [733] = 2,
    ACTIONS(178), 1,
      aux_sym__interpolated_text_token1,
    ACTIONS(176), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym_escape,
      sym__newline,
  [743] = 3,
    ACTIONS(180), 1,
      aux_sym__expression_token1,
    ACTIONS(182), 1,
      anon_sym_PIPE,
    STATE(33), 2,
      sym__filter,
      aux_sym__expression_repeat1,
  [754] = 3,
    ACTIONS(187), 1,
      aux_sym_include_token1,
    STATE(77), 1,
      sym__text,
    ACTIONS(185), 2,
      ts_builtin_sym_end,
      sym__newline,
  [765] = 3,
    ACTIONS(189), 1,
      aux_sym__expression_token1,
    ACTIONS(191), 1,
      anon_sym_PIPE,
    STATE(33), 2,
      sym__filter,
      aux_sym__expression_repeat1,
  [776] = 3,
    ACTIONS(191), 1,
      anon_sym_PIPE,
    ACTIONS(193), 1,
      aux_sym__expression_token1,
    STATE(35), 2,
      sym__filter,
      aux_sym__expression_repeat1,
  [787] = 1,
    ACTIONS(195), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      aux_sym__function_args_token1,
      aux_sym__list_operator_token1,
  [794] = 1,
    ACTIONS(197), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      aux_sym__function_args_token1,
      aux_sym__list_operator_token1,
  [801] = 2,
    ACTIONS(178), 1,
      aux_sym__interpolated_text_token1,
    ACTIONS(176), 3,
      anon_sym_LBRACE,
      sym_escape,
      sym__newline,
  [810] = 1,
    ACTIONS(176), 4,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      aux_sym__single_quoted_string_token1,
      sym_escape,
  [817] = 4,
    ACTIONS(199), 1,
      aux_sym_option_token1,
    ACTIONS(201), 1,
      aux_sym__expression_token1,
    ACTIONS(203), 1,
      anon_sym_LPAREN,
    ACTIONS(205), 1,
      anon_sym_PIPE,
  [830] = 1,
    ACTIONS(176), 4,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      aux_sym__double_quoted_string_token1,
      sym_escape,
  [837] = 3,
    ACTIONS(207), 1,
      ts_builtin_sym_end,
    ACTIONS(209), 1,
      sym__newline,
    STATE(43), 1,
      aux_sym_section_repeat1,
  [847] = 3,
    ACTIONS(212), 1,
      ts_builtin_sym_end,
    ACTIONS(214), 1,
      sym__newline,
    STATE(44), 1,
      aux_sym_source_repeat1,
  [857] = 3,
    ACTIONS(46), 1,
      ts_builtin_sym_end,
    ACTIONS(217), 1,
      sym__newline,
    STATE(51), 1,
      aux_sym_source_repeat1,
  [867] = 3,
    ACTIONS(219), 1,
      ts_builtin_sym_end,
    ACTIONS(221), 1,
      sym__newline,
    STATE(55), 1,
      aux_sym_section_repeat1,
  [877] = 3,
    ACTIONS(46), 1,
      ts_builtin_sym_end,
    ACTIONS(217), 1,
      sym__newline,
    STATE(44), 1,
      aux_sym_source_repeat1,
  [887] = 3,
    ACTIONS(224), 1,
      anon_sym_RPAREN,
    ACTIONS(226), 1,
      aux_sym__function_args_token1,
    STATE(48), 1,
      aux_sym__function_args_repeat1,
  [897] = 2,
    ACTIONS(231), 1,
      aux_sym__list_operator_token1,
    ACTIONS(229), 2,
      anon_sym_RPAREN,
      aux_sym__function_args_token1,
  [905] = 3,
    ACTIONS(233), 1,
      anon_sym_RPAREN,
    ACTIONS(235), 1,
      aux_sym__function_args_token1,
    STATE(48), 1,
      aux_sym__function_args_repeat1,
  [915] = 3,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    ACTIONS(237), 1,
      sym__newline,
    STATE(44), 1,
      aux_sym_source_repeat1,
  [925] = 3,
    ACTIONS(201), 1,
      aux_sym__expression_token1,
    ACTIONS(203), 1,
      anon_sym_LPAREN,
    ACTIONS(205), 1,
      anon_sym_PIPE,
  [935] = 3,
    ACTIONS(235), 1,
      aux_sym__function_args_token1,
    ACTIONS(239), 1,
      anon_sym_RPAREN,
    STATE(50), 1,
      aux_sym__function_args_repeat1,
  [945] = 2,
    ACTIONS(231), 1,
      aux_sym__list_operator_token1,
    ACTIONS(241), 2,
      anon_sym_RPAREN,
      aux_sym__function_args_token1,
  [953] = 3,
    ACTIONS(243), 1,
      ts_builtin_sym_end,
    ACTIONS(245), 1,
      sym__newline,
    STATE(43), 1,
      aux_sym_section_repeat1,
  [963] = 1,
    ACTIONS(248), 2,
      ts_builtin_sym_end,
      sym__newline,
  [968] = 1,
    ACTIONS(212), 2,
      ts_builtin_sym_end,
      sym__newline,
  [973] = 2,
    ACTIONS(250), 1,
      aux_sym__expression_token1,
    ACTIONS(252), 1,
      anon_sym_PIPE,
  [980] = 2,
    ACTIONS(254), 1,
      aux_sym__expression_token1,
    ACTIONS(256), 1,
      anon_sym_PIPE,
  [987] = 1,
    ACTIONS(207), 2,
      ts_builtin_sym_end,
      sym__newline,
  [992] = 2,
    ACTIONS(258), 1,
      aux_sym__expression_token1,
    ACTIONS(260), 1,
      anon_sym_PIPE,
  [999] = 2,
    ACTIONS(231), 1,
      aux_sym__list_operator_token1,
    ACTIONS(262), 1,
      anon_sym_RBRACE,
  [1006] = 2,
    ACTIONS(231), 1,
      aux_sym__list_operator_token1,
    ACTIONS(264), 1,
      anon_sym_RBRACE,
  [1013] = 2,
    ACTIONS(231), 1,
      aux_sym__list_operator_token1,
    ACTIONS(266), 1,
      anon_sym_RBRACE,
  [1020] = 2,
    ACTIONS(268), 1,
      aux_sym__expression_token1,
    ACTIONS(270), 1,
      anon_sym_PIPE,
  [1027] = 1,
    ACTIONS(272), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1032] = 2,
    ACTIONS(274), 1,
      aux_sym__expression_token1,
    ACTIONS(276), 1,
      anon_sym_PIPE,
  [1039] = 2,
    ACTIONS(278), 1,
      aux_sym__expression_token1,
    ACTIONS(280), 1,
      anon_sym_PIPE,
  [1046] = 1,
    ACTIONS(282), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1051] = 1,
    ACTIONS(284), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1056] = 1,
    ACTIONS(286), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1061] = 2,
    ACTIONS(288), 1,
      aux_sym__expression_token1,
    ACTIONS(290), 1,
      anon_sym_PIPE,
  [1068] = 2,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      anon_sym_SQUOTE,
  [1075] = 2,
    ACTIONS(296), 1,
      aux_sym__expression_token1,
    ACTIONS(298), 1,
      anon_sym_PIPE,
  [1082] = 2,
    ACTIONS(286), 1,
      anon_sym_PIPE,
    ACTIONS(300), 1,
      aux_sym__expression_token1,
  [1089] = 2,
    ACTIONS(302), 1,
      aux_sym__expression_token1,
    ACTIONS(304), 1,
      anon_sym_PIPE,
  [1096] = 1,
    ACTIONS(306), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1101] = 1,
    ACTIONS(224), 2,
      anon_sym_RPAREN,
      aux_sym__function_args_token1,
  [1106] = 2,
    ACTIONS(231), 1,
      aux_sym__list_operator_token1,
    ACTIONS(308), 1,
      anon_sym_RBRACE,
  [1113] = 1,
    ACTIONS(310), 1,
      sym__template_keyword,
  [1117] = 1,
    ACTIONS(312), 1,
      aux_sym_regex_token2,
  [1121] = 1,
    ACTIONS(314), 1,
      aux_sym__string_token1,
  [1125] = 1,
    ACTIONS(316), 1,
      anon_sym_RPAREN,
  [1129] = 1,
    ACTIONS(318), 1,
      anon_sym_RBRACK,
  [1133] = 1,
    ACTIONS(320), 1,
      aux_sym_regex_token1,
  [1137] = 1,
    ACTIONS(322), 1,
      aux_sym__section_header_token1,
  [1141] = 1,
    ACTIONS(324), 1,
      anon_sym_SQUOTE,
  [1145] = 1,
    ACTIONS(324), 1,
      anon_sym_DQUOTE,
  [1149] = 1,
    ACTIONS(326), 1,
      aux_sym_option_token1,
  [1153] = 1,
    ACTIONS(328), 1,
      aux_sym__string_token1,
  [1157] = 1,
    ACTIONS(330), 1,
      ts_builtin_sym_end,
  [1161] = 1,
    ACTIONS(332), 1,
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
  [SMALL_STATE(10)] = 344,
  [SMALL_STATE(11)] = 367,
  [SMALL_STATE(12)] = 390,
  [SMALL_STATE(13)] = 413,
  [SMALL_STATE(14)] = 433,
  [SMALL_STATE(15)] = 456,
  [SMALL_STATE(16)] = 479,
  [SMALL_STATE(17)] = 497,
  [SMALL_STATE(18)] = 515,
  [SMALL_STATE(19)] = 531,
  [SMALL_STATE(20)] = 551,
  [SMALL_STATE(21)] = 569,
  [SMALL_STATE(22)] = 584,
  [SMALL_STATE(23)] = 599,
  [SMALL_STATE(24)] = 616,
  [SMALL_STATE(25)] = 631,
  [SMALL_STATE(26)] = 648,
  [SMALL_STATE(27)] = 663,
  [SMALL_STATE(28)] = 678,
  [SMALL_STATE(29)] = 693,
  [SMALL_STATE(30)] = 707,
  [SMALL_STATE(31)] = 721,
  [SMALL_STATE(32)] = 733,
  [SMALL_STATE(33)] = 743,
  [SMALL_STATE(34)] = 754,
  [SMALL_STATE(35)] = 765,
  [SMALL_STATE(36)] = 776,
  [SMALL_STATE(37)] = 787,
  [SMALL_STATE(38)] = 794,
  [SMALL_STATE(39)] = 801,
  [SMALL_STATE(40)] = 810,
  [SMALL_STATE(41)] = 817,
  [SMALL_STATE(42)] = 830,
  [SMALL_STATE(43)] = 837,
  [SMALL_STATE(44)] = 847,
  [SMALL_STATE(45)] = 857,
  [SMALL_STATE(46)] = 867,
  [SMALL_STATE(47)] = 877,
  [SMALL_STATE(48)] = 887,
  [SMALL_STATE(49)] = 897,
  [SMALL_STATE(50)] = 905,
  [SMALL_STATE(51)] = 915,
  [SMALL_STATE(52)] = 925,
  [SMALL_STATE(53)] = 935,
  [SMALL_STATE(54)] = 945,
  [SMALL_STATE(55)] = 953,
  [SMALL_STATE(56)] = 963,
  [SMALL_STATE(57)] = 968,
  [SMALL_STATE(58)] = 973,
  [SMALL_STATE(59)] = 980,
  [SMALL_STATE(60)] = 987,
  [SMALL_STATE(61)] = 992,
  [SMALL_STATE(62)] = 999,
  [SMALL_STATE(63)] = 1006,
  [SMALL_STATE(64)] = 1013,
  [SMALL_STATE(65)] = 1020,
  [SMALL_STATE(66)] = 1027,
  [SMALL_STATE(67)] = 1032,
  [SMALL_STATE(68)] = 1039,
  [SMALL_STATE(69)] = 1046,
  [SMALL_STATE(70)] = 1051,
  [SMALL_STATE(71)] = 1056,
  [SMALL_STATE(72)] = 1061,
  [SMALL_STATE(73)] = 1068,
  [SMALL_STATE(74)] = 1075,
  [SMALL_STATE(75)] = 1082,
  [SMALL_STATE(76)] = 1089,
  [SMALL_STATE(77)] = 1096,
  [SMALL_STATE(78)] = 1101,
  [SMALL_STATE(79)] = 1106,
  [SMALL_STATE(80)] = 1113,
  [SMALL_STATE(81)] = 1117,
  [SMALL_STATE(82)] = 1121,
  [SMALL_STATE(83)] = 1125,
  [SMALL_STATE(84)] = 1129,
  [SMALL_STATE(85)] = 1133,
  [SMALL_STATE(86)] = 1137,
  [SMALL_STATE(87)] = 1141,
  [SMALL_STATE(88)] = 1145,
  [SMALL_STATE(89)] = 1149,
  [SMALL_STATE(90)] = 1153,
  [SMALL_STATE(91)] = 1157,
  [SMALL_STATE(92)] = 1161,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 2, .production_id = 2),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_option, 2, .production_id = 2), SHIFT(90),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 3),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 2),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 1),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__string, 1), SHIFT(90),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__string_repeat1, 2),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_repeat1, 2), SHIFT_REPEAT(23),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_repeat1, 2), SHIFT_REPEAT(8),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_repeat1, 2), SHIFT_REPEAT(23),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_repeat1, 2), SHIFT_REPEAT(90),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__interpolated_text, 2),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__interpolated_text, 2), SHIFT_REPEAT(16),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__interpolated_text, 2), SHIFT_REPEAT(7),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__interpolated_text, 2), SHIFT_REPEAT(16),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__string_repeat1, 4),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_repeat1, 4), SHIFT(16),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_repeat1, 4), SHIFT(7),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_repeat1, 4), SHIFT(16),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 1),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__string, 1), SHIFT(82),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__string_repeat1, 3),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_repeat1, 3), SHIFT(16),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_repeat1, 3), SHIFT(7),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_repeat1, 3), SHIFT(16),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__single_quoted_string_repeat1, 2), SHIFT_REPEAT(5),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__single_quoted_string_repeat1, 2),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__single_quoted_string_repeat1, 2), SHIFT_REPEAT(21),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__interpolated_text, 2), SHIFT_REPEAT(25),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__interpolated_text, 2), SHIFT_REPEAT(8),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__interpolated_text, 2), SHIFT_REPEAT(25),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__double_quoted_string_repeat1, 2), SHIFT_REPEAT(6),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__double_quoted_string_repeat1, 2),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__double_quoted_string_repeat1, 2), SHIFT_REPEAT(28),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 3),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template, 3),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__expression_repeat1, 2),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_repeat1, 2), SHIFT_REPEAT(80),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 2),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 3),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(18),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(13),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_section, 1), SHIFT(18),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__function_args_repeat1, 2),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__function_args_repeat1, 2), SHIFT_REPEAT(3),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_argument, 3),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_args, 2),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_args, 1),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_arg, 1),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 2),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_section, 2), SHIFT(18),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 3, .production_id = 2),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_quoted_string, 2),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_quoted_string, 2),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quoted_string, 3),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quoted_string, 3),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_quoted_string, 3),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_quoted_string, 3),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__filter, 2, .production_id = 3),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__filter, 2, .production_id = 3),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__section_header, 3),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 3),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 3),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quoted_string, 2),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quoted_string, 2),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2, .production_id = 1),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__list_operator, 3),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_operator, 3),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex, 4),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 4),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 4),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 4),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [330] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
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
