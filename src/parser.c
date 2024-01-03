#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 95
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 73
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
  anon_sym_BSLASHn = 35,
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
  sym__single_quoted_string = 54,
  sym__double_quoted_string = 55,
  sym_regex = 56,
  sym_keyword = 57,
  sym_function = 58,
  sym__function_args = 59,
  sym__function_arg = 60,
  sym_named_argument = 61,
  sym__list_operator = 62,
  sym__filter = 63,
  sym_escape = 64,
  sym__text = 65,
  aux_sym_source_repeat1 = 66,
  aux_sym_section_repeat1 = 67,
  aux_sym__string_repeat1 = 68,
  aux_sym__expression_repeat1 = 69,
  aux_sym__single_quoted_string_repeat1 = 70,
  aux_sym__double_quoted_string_repeat1 = 71,
  aux_sym__function_args_repeat1 = 72,
  anon_alias_sym_EQ = 73,
  alias_sym_filter = 74,
  alias_sym_path = 75,
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
  [anon_sym_BSLASHn] = "\\n",
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
  [sym_escape] = "escape",
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
  [anon_sym_BSLASHn] = anon_sym_BSLASHn,
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
  [sym_escape] = sym_escape,
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
  [anon_sym_BSLASHn] = {
    .visible = true,
    .named = false,
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
  [sym_escape] = {
    .visible = true,
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
  [7] = 4,
  [8] = 8,
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
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 24,
  [29] = 29,
  [30] = 30,
  [31] = 30,
  [32] = 32,
  [33] = 33,
  [34] = 30,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 38,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 30,
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
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 64,
  [72] = 72,
  [73] = 73,
  [74] = 64,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 64,
  [80] = 70,
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
  [93] = 93,
  [94] = 94,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(23);
      if (lookahead == '\n') ADVANCE(98);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(67);
      if (lookahead == '#') ADVANCE(46);
      if (lookahead == '%') ADVANCE(9);
      if (lookahead == '\'') ADVANCE(70);
      if (lookahead == '(') ADVANCE(77);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == ';') ADVANCE(47);
      if (lookahead == '[') ADVANCE(24);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == ']') ADVANCE(26);
      if (lookahead == 'r') ADVANCE(73);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead == '|') ADVANCE(81);
      if (lookahead == '}') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(82);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(89);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(86);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(90);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(98);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(68);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(69);
      END_STATE();
    case 3:
      if (lookahead == '%') ADVANCE(80);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == ',') ADVANCE(79);
      if (lookahead == '}') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 4:
      if (lookahead == '%') ADVANCE(80);
      if (lookahead == ',') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(70);
      if (lookahead == '\\') ADVANCE(71);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(72);
      END_STATE();
    case 6:
      if (lookahead == 'c') ADVANCE(10);
      END_STATE();
    case 7:
      if (lookahead == 'd') ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 9:
      if (lookahead == 'i') ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == 'l') ADVANCE(13);
      END_STATE();
    case 11:
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 12:
      if (lookahead == 'n') ADVANCE(6);
      END_STATE();
    case 13:
      if (lookahead == 'u') ADVANCE(7);
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
          lookahead != '"') ADVANCE(74);
      END_STATE();
    case 17:
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(75);
      END_STATE();
    case 18:
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(25);
      END_STATE();
    case 19:
      if (eof) ADVANCE(23);
      if (lookahead == '\n') ADVANCE(98);
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
      if (lookahead == '\n') ADVANCE(98);
      if (lookahead == '\r') ADVANCE(48);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(61);
      END_STATE();
    case 21:
      if (eof) ADVANCE(23);
      if (lookahead == '\n') ADVANCE(98);
      if (lookahead == '\r') ADVANCE(28);
      if (lookahead == '#') ADVANCE(46);
      if (lookahead == ';') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(29);
      END_STATE();
    case 22:
      if (eof) ADVANCE(23);
      if (lookahead == '\n') ADVANCE(98);
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
      if (lookahead == '\n') ADVANCE(98);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
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
      if (lookahead == '\n') ADVANCE(98);
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
      if (lookahead == '\n') ADVANCE(98);
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
      if (lookahead == '(') ADVANCE(77);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == '|') ADVANCE(81);
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
      if (lookahead == 'n') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(69);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym__single_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym__double_quoted_string_token1);
      if (lookahead == 'n') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym__double_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_r);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_regex_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_regex_token2);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym__function_args_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym__list_operator_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym__template_keyword);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym__template_keyword);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym__template_keyword);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__template_keyword);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__template_keyword);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(87);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__template_keyword);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__template_keyword);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__template_keyword);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__template_keyword);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__template_keyword);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__template_keyword);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__template_keyword);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__template_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_BSLASHn);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_BSLASHn);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(69);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_BSLASHn);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(72);
      END_STATE();
    case 98:
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
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 21},
  [16] = {.lex_state = 20},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 20},
  [23] = {.lex_state = 20},
  [24] = {.lex_state = 20},
  [25] = {.lex_state = 20},
  [26] = {.lex_state = 20},
  [27] = {.lex_state = 20},
  [28] = {.lex_state = 20},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 20},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 64},
  [33] = {.lex_state = 64},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 64},
  [36] = {.lex_state = 64},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 14},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 14},
  [42] = {.lex_state = 22},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 20},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 64},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 64},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 64},
  [62] = {.lex_state = 64},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 64},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 64},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 64},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 64},
  [76] = {.lex_state = 64},
  [77] = {.lex_state = 64},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 64},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 17},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 16},
  [87] = {.lex_state = 18},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 64},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 15},
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
    [anon_sym_BSLASHn] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(93),
    [sym__statement] = STATE(46),
    [sym_section] = STATE(46),
    [sym__section_header] = STATE(47),
    [sym_include] = STATE(46),
    [sym_comment] = STATE(46),
    [aux_sym_source_repeat1] = STATE(48),
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
    STATE(55), 1,
      sym__expression,
    STATE(90), 1,
      sym__function_args,
    STATE(54), 2,
      sym__function_arg,
      sym_named_argument,
    STATE(80), 2,
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
    STATE(55), 1,
      sym__expression,
    STATE(80), 2,
      sym__bool_true,
      sym__bool_false,
    STATE(81), 2,
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
    STATE(64), 1,
      sym__expression,
    STATE(80), 2,
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
    STATE(71), 1,
      sym__expression,
    STATE(80), 2,
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
    STATE(74), 1,
      sym__expression,
    STATE(80), 2,
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
    STATE(79), 1,
      sym__expression,
    STATE(80), 2,
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
    STATE(50), 1,
      sym__expression,
    STATE(80), 2,
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
    STATE(22), 1,
      aux_sym__string_repeat1,
    STATE(69), 1,
      sym__string,
    STATE(23), 2,
      aux_sym__interpolated_text,
      sym_template,
    STATE(70), 2,
      sym__bool_true,
      sym__bool_false,
    STATE(67), 3,
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
    STATE(58), 4,
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
    STATE(58), 4,
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
    STATE(58), 4,
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
    STATE(58), 4,
      sym__statement,
      sym_section,
      sym_include,
      sym_comment,
  [430] = 5,
    ACTIONS(46), 1,
      anon_sym_LBRACE,
    ACTIONS(48), 1,
      anon_sym_DQUOTE,
    ACTIONS(50), 1,
      aux_sym__single_quoted_string_token1,
    ACTIONS(52), 1,
      anon_sym_BSLASHn,
    STATE(21), 3,
      sym_template,
      sym_escape,
      aux_sym__single_quoted_string_repeat1,
  [448] = 4,
    ACTIONS(56), 1,
      sym_option_name,
    ACTIONS(9), 2,
      anon_sym_POUND,
      anon_sym_SEMI,
    ACTIONS(54), 2,
      ts_builtin_sym_end,
      sym__newline,
    STATE(60), 2,
      sym_option,
      sym_comment,
  [464] = 6,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
    ACTIONS(60), 1,
      aux_sym__interpolated_text_token1,
    ACTIONS(63), 1,
      anon_sym_LBRACE,
    ACTIONS(66), 1,
      sym__newline,
    STATE(16), 1,
      aux_sym__string_repeat1,
    STATE(27), 2,
      aux_sym__interpolated_text,
      sym_template,
  [484] = 5,
    ACTIONS(69), 1,
      anon_sym_LBRACE,
    ACTIONS(72), 1,
      anon_sym_SQUOTE,
    ACTIONS(74), 1,
      aux_sym__double_quoted_string_token1,
    ACTIONS(77), 1,
      anon_sym_BSLASHn,
    STATE(17), 3,
      sym_template,
      sym_escape,
      aux_sym__double_quoted_string_repeat1,
  [502] = 5,
    ACTIONS(80), 1,
      anon_sym_LBRACE,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      aux_sym__single_quoted_string_token1,
    ACTIONS(88), 1,
      anon_sym_BSLASHn,
    STATE(18), 3,
      sym_template,
      sym_escape,
      aux_sym__single_quoted_string_repeat1,
  [520] = 5,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_SQUOTE,
    ACTIONS(95), 1,
      aux_sym__double_quoted_string_token1,
    ACTIONS(97), 1,
      anon_sym_BSLASHn,
    STATE(17), 3,
      sym_template,
      sym_escape,
      aux_sym__double_quoted_string_repeat1,
  [538] = 5,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(97), 1,
      anon_sym_BSLASHn,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(101), 1,
      aux_sym__double_quoted_string_token1,
    STATE(19), 3,
      sym_template,
      sym_escape,
      aux_sym__double_quoted_string_repeat1,
  [556] = 5,
    ACTIONS(46), 1,
      anon_sym_LBRACE,
    ACTIONS(52), 1,
      anon_sym_BSLASHn,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      aux_sym__single_quoted_string_token1,
    STATE(18), 3,
      sym_template,
      sym_escape,
      aux_sym__single_quoted_string_repeat1,
  [574] = 6,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
    ACTIONS(109), 1,
      aux_sym__interpolated_text_token1,
    ACTIONS(111), 1,
      anon_sym_LBRACE,
    ACTIONS(113), 1,
      sym__newline,
    STATE(16), 1,
      aux_sym__string_repeat1,
    STATE(27), 2,
      aux_sym__interpolated_text,
      sym_template,
  [594] = 5,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
    ACTIONS(116), 1,
      aux_sym__interpolated_text_token1,
    ACTIONS(118), 1,
      sym__newline,
    STATE(24), 2,
      aux_sym__interpolated_text,
      sym_template,
  [611] = 4,
    ACTIONS(123), 1,
      aux_sym__interpolated_text_token1,
    ACTIONS(126), 1,
      anon_sym_LBRACE,
    ACTIONS(121), 2,
      ts_builtin_sym_end,
      sym__newline,
    STATE(24), 2,
      aux_sym__interpolated_text,
      sym_template,
  [626] = 4,
    ACTIONS(131), 1,
      aux_sym__interpolated_text_token1,
    ACTIONS(134), 1,
      anon_sym_LBRACE,
    ACTIONS(129), 2,
      ts_builtin_sym_end,
      sym__newline,
    STATE(24), 2,
      aux_sym__interpolated_text,
      sym_template,
  [641] = 4,
    ACTIONS(139), 1,
      aux_sym__interpolated_text_token1,
    ACTIONS(142), 1,
      anon_sym_LBRACE,
    ACTIONS(137), 2,
      ts_builtin_sym_end,
      sym__newline,
    STATE(24), 2,
      aux_sym__interpolated_text,
      sym_template,
  [656] = 4,
    ACTIONS(111), 1,
      anon_sym_LBRACE,
    ACTIONS(145), 1,
      aux_sym__interpolated_text_token1,
    ACTIONS(147), 1,
      sym__newline,
    STATE(28), 2,
      aux_sym__interpolated_text,
      sym_template,
  [670] = 4,
    ACTIONS(121), 1,
      sym__newline,
    ACTIONS(149), 1,
      aux_sym__interpolated_text_token1,
    ACTIONS(152), 1,
      anon_sym_LBRACE,
    STATE(28), 2,
      aux_sym__interpolated_text,
      sym_template,
  [684] = 3,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    STATE(73), 3,
      sym__quoted_string,
      sym__single_quoted_string,
      sym__double_quoted_string,
  [696] = 2,
    ACTIONS(157), 1,
      aux_sym__interpolated_text_token1,
    ACTIONS(155), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym__newline,
  [705] = 2,
    ACTIONS(155), 2,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
    ACTIONS(157), 2,
      aux_sym__double_quoted_string_token1,
      anon_sym_BSLASHn,
  [714] = 3,
    ACTIONS(159), 1,
      aux_sym__expression_token1,
    ACTIONS(161), 1,
      anon_sym_PIPE,
    STATE(32), 2,
      sym__filter,
      aux_sym__expression_repeat1,
  [725] = 4,
    ACTIONS(164), 1,
      aux_sym_option_token1,
    ACTIONS(166), 1,
      aux_sym__expression_token1,
    ACTIONS(168), 1,
      anon_sym_LPAREN,
    ACTIONS(170), 1,
      anon_sym_PIPE,
  [738] = 2,
    ACTIONS(155), 2,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
    ACTIONS(157), 2,
      aux_sym__single_quoted_string_token1,
      anon_sym_BSLASHn,
  [747] = 3,
    ACTIONS(172), 1,
      aux_sym__expression_token1,
    ACTIONS(174), 1,
      anon_sym_PIPE,
    STATE(32), 2,
      sym__filter,
      aux_sym__expression_repeat1,
  [758] = 3,
    ACTIONS(174), 1,
      anon_sym_PIPE,
    ACTIONS(176), 1,
      aux_sym__expression_token1,
    STATE(35), 2,
      sym__filter,
      aux_sym__expression_repeat1,
  [769] = 1,
    ACTIONS(178), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      aux_sym__function_args_token1,
      aux_sym__list_operator_token1,
  [776] = 2,
    ACTIONS(180), 2,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
    ACTIONS(182), 2,
      aux_sym__double_quoted_string_token1,
      anon_sym_BSLASHn,
  [785] = 3,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(184), 1,
      aux_sym__interpolated_text_token1,
    STATE(26), 2,
      aux_sym__interpolated_text,
      sym_template,
  [796] = 2,
    ACTIONS(180), 2,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
    ACTIONS(182), 2,
      aux_sym__single_quoted_string_token1,
      anon_sym_BSLASHn,
  [805] = 3,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(186), 1,
      aux_sym__interpolated_text_token1,
    STATE(25), 2,
      aux_sym__interpolated_text,
      sym_template,
  [816] = 3,
    ACTIONS(190), 1,
      aux_sym_include_token1,
    STATE(63), 1,
      sym__text,
    ACTIONS(188), 2,
      ts_builtin_sym_end,
      sym__newline,
  [827] = 1,
    ACTIONS(192), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      aux_sym__function_args_token1,
      aux_sym__list_operator_token1,
  [834] = 3,
    ACTIONS(194), 1,
      ts_builtin_sym_end,
    ACTIONS(196), 1,
      sym__newline,
    STATE(44), 1,
      aux_sym_section_repeat1,
  [844] = 3,
    ACTIONS(199), 1,
      anon_sym_RPAREN,
    ACTIONS(201), 1,
      aux_sym__function_args_token1,
    STATE(45), 1,
      aux_sym__function_args_repeat1,
  [854] = 3,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    ACTIONS(204), 1,
      sym__newline,
    STATE(52), 1,
      aux_sym_source_repeat1,
  [864] = 3,
    ACTIONS(206), 1,
      ts_builtin_sym_end,
    ACTIONS(208), 1,
      sym__newline,
    STATE(56), 1,
      aux_sym_section_repeat1,
  [874] = 3,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    ACTIONS(204), 1,
      sym__newline,
    STATE(57), 1,
      aux_sym_source_repeat1,
  [884] = 2,
    ACTIONS(157), 1,
      aux_sym__interpolated_text_token1,
    ACTIONS(155), 2,
      anon_sym_LBRACE,
      sym__newline,
  [892] = 2,
    ACTIONS(213), 1,
      aux_sym__list_operator_token1,
    ACTIONS(211), 2,
      anon_sym_RPAREN,
      aux_sym__function_args_token1,
  [900] = 3,
    ACTIONS(215), 1,
      anon_sym_RPAREN,
    ACTIONS(217), 1,
      aux_sym__function_args_token1,
    STATE(45), 1,
      aux_sym__function_args_repeat1,
  [910] = 3,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
    ACTIONS(219), 1,
      sym__newline,
    STATE(57), 1,
      aux_sym_source_repeat1,
  [920] = 3,
    ACTIONS(166), 1,
      aux_sym__expression_token1,
    ACTIONS(168), 1,
      anon_sym_LPAREN,
    ACTIONS(170), 1,
      anon_sym_PIPE,
  [930] = 3,
    ACTIONS(217), 1,
      aux_sym__function_args_token1,
    ACTIONS(221), 1,
      anon_sym_RPAREN,
    STATE(51), 1,
      aux_sym__function_args_repeat1,
  [940] = 2,
    ACTIONS(213), 1,
      aux_sym__list_operator_token1,
    ACTIONS(223), 2,
      anon_sym_RPAREN,
      aux_sym__function_args_token1,
  [948] = 3,
    ACTIONS(225), 1,
      ts_builtin_sym_end,
    ACTIONS(227), 1,
      sym__newline,
    STATE(44), 1,
      aux_sym_section_repeat1,
  [958] = 3,
    ACTIONS(230), 1,
      ts_builtin_sym_end,
    ACTIONS(232), 1,
      sym__newline,
    STATE(57), 1,
      aux_sym_source_repeat1,
  [968] = 1,
    ACTIONS(230), 2,
      ts_builtin_sym_end,
      sym__newline,
  [973] = 2,
    ACTIONS(235), 1,
      aux_sym__expression_token1,
    ACTIONS(237), 1,
      anon_sym_PIPE,
  [980] = 1,
    ACTIONS(194), 2,
      ts_builtin_sym_end,
      sym__newline,
  [985] = 2,
    ACTIONS(239), 1,
      aux_sym__expression_token1,
    ACTIONS(241), 1,
      anon_sym_PIPE,
  [992] = 2,
    ACTIONS(243), 1,
      aux_sym__expression_token1,
    ACTIONS(245), 1,
      anon_sym_PIPE,
  [999] = 1,
    ACTIONS(247), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1004] = 2,
    ACTIONS(213), 1,
      aux_sym__list_operator_token1,
    ACTIONS(249), 1,
      anon_sym_RBRACE,
  [1011] = 2,
    ACTIONS(251), 1,
      aux_sym__expression_token1,
    ACTIONS(253), 1,
      anon_sym_PIPE,
  [1018] = 1,
    ACTIONS(255), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1023] = 1,
    ACTIONS(257), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1028] = 2,
    ACTIONS(259), 1,
      aux_sym__expression_token1,
    ACTIONS(261), 1,
      anon_sym_PIPE,
  [1035] = 1,
    ACTIONS(263), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1040] = 1,
    ACTIONS(265), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1045] = 2,
    ACTIONS(213), 1,
      aux_sym__list_operator_token1,
    ACTIONS(267), 1,
      anon_sym_RBRACE,
  [1052] = 2,
    ACTIONS(269), 1,
      anon_sym_DQUOTE,
    ACTIONS(271), 1,
      anon_sym_SQUOTE,
  [1059] = 2,
    ACTIONS(273), 1,
      aux_sym__expression_token1,
    ACTIONS(275), 1,
      anon_sym_PIPE,
  [1066] = 2,
    ACTIONS(213), 1,
      aux_sym__list_operator_token1,
    ACTIONS(277), 1,
      anon_sym_RBRACE,
  [1073] = 2,
    ACTIONS(279), 1,
      aux_sym__expression_token1,
    ACTIONS(281), 1,
      anon_sym_PIPE,
  [1080] = 2,
    ACTIONS(283), 1,
      aux_sym__expression_token1,
    ACTIONS(285), 1,
      anon_sym_PIPE,
  [1087] = 2,
    ACTIONS(287), 1,
      aux_sym__expression_token1,
    ACTIONS(289), 1,
      anon_sym_PIPE,
  [1094] = 1,
    ACTIONS(291), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1099] = 2,
    ACTIONS(213), 1,
      aux_sym__list_operator_token1,
    ACTIONS(293), 1,
      anon_sym_RBRACE,
  [1106] = 2,
    ACTIONS(265), 1,
      anon_sym_PIPE,
    ACTIONS(295), 1,
      aux_sym__expression_token1,
  [1113] = 1,
    ACTIONS(199), 2,
      anon_sym_RPAREN,
      aux_sym__function_args_token1,
  [1118] = 1,
    ACTIONS(297), 1,
      aux_sym__string_token1,
  [1122] = 1,
    ACTIONS(299), 1,
      aux_sym_regex_token2,
  [1126] = 1,
    ACTIONS(301), 1,
      anon_sym_DQUOTE,
  [1130] = 1,
    ACTIONS(303), 1,
      anon_sym_RBRACK,
  [1134] = 1,
    ACTIONS(305), 1,
      aux_sym_regex_token1,
  [1138] = 1,
    ACTIONS(307), 1,
      aux_sym__section_header_token1,
  [1142] = 1,
    ACTIONS(309), 1,
      aux_sym__string_token1,
  [1146] = 1,
    ACTIONS(311), 1,
      sym__template_keyword,
  [1150] = 1,
    ACTIONS(313), 1,
      anon_sym_RPAREN,
  [1154] = 1,
    ACTIONS(301), 1,
      anon_sym_SQUOTE,
  [1158] = 1,
    ACTIONS(315), 1,
      aux_sym_option_token1,
  [1162] = 1,
    ACTIONS(317), 1,
      ts_builtin_sym_end,
  [1166] = 1,
    ACTIONS(319), 1,
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
  [SMALL_STATE(15)] = 448,
  [SMALL_STATE(16)] = 464,
  [SMALL_STATE(17)] = 484,
  [SMALL_STATE(18)] = 502,
  [SMALL_STATE(19)] = 520,
  [SMALL_STATE(20)] = 538,
  [SMALL_STATE(21)] = 556,
  [SMALL_STATE(22)] = 574,
  [SMALL_STATE(23)] = 594,
  [SMALL_STATE(24)] = 611,
  [SMALL_STATE(25)] = 626,
  [SMALL_STATE(26)] = 641,
  [SMALL_STATE(27)] = 656,
  [SMALL_STATE(28)] = 670,
  [SMALL_STATE(29)] = 684,
  [SMALL_STATE(30)] = 696,
  [SMALL_STATE(31)] = 705,
  [SMALL_STATE(32)] = 714,
  [SMALL_STATE(33)] = 725,
  [SMALL_STATE(34)] = 738,
  [SMALL_STATE(35)] = 747,
  [SMALL_STATE(36)] = 758,
  [SMALL_STATE(37)] = 769,
  [SMALL_STATE(38)] = 776,
  [SMALL_STATE(39)] = 785,
  [SMALL_STATE(40)] = 796,
  [SMALL_STATE(41)] = 805,
  [SMALL_STATE(42)] = 816,
  [SMALL_STATE(43)] = 827,
  [SMALL_STATE(44)] = 834,
  [SMALL_STATE(45)] = 844,
  [SMALL_STATE(46)] = 854,
  [SMALL_STATE(47)] = 864,
  [SMALL_STATE(48)] = 874,
  [SMALL_STATE(49)] = 884,
  [SMALL_STATE(50)] = 892,
  [SMALL_STATE(51)] = 900,
  [SMALL_STATE(52)] = 910,
  [SMALL_STATE(53)] = 920,
  [SMALL_STATE(54)] = 930,
  [SMALL_STATE(55)] = 940,
  [SMALL_STATE(56)] = 948,
  [SMALL_STATE(57)] = 958,
  [SMALL_STATE(58)] = 968,
  [SMALL_STATE(59)] = 973,
  [SMALL_STATE(60)] = 980,
  [SMALL_STATE(61)] = 985,
  [SMALL_STATE(62)] = 992,
  [SMALL_STATE(63)] = 999,
  [SMALL_STATE(64)] = 1004,
  [SMALL_STATE(65)] = 1011,
  [SMALL_STATE(66)] = 1018,
  [SMALL_STATE(67)] = 1023,
  [SMALL_STATE(68)] = 1028,
  [SMALL_STATE(69)] = 1035,
  [SMALL_STATE(70)] = 1040,
  [SMALL_STATE(71)] = 1045,
  [SMALL_STATE(72)] = 1052,
  [SMALL_STATE(73)] = 1059,
  [SMALL_STATE(74)] = 1066,
  [SMALL_STATE(75)] = 1073,
  [SMALL_STATE(76)] = 1080,
  [SMALL_STATE(77)] = 1087,
  [SMALL_STATE(78)] = 1094,
  [SMALL_STATE(79)] = 1099,
  [SMALL_STATE(80)] = 1106,
  [SMALL_STATE(81)] = 1113,
  [SMALL_STATE(82)] = 1118,
  [SMALL_STATE(83)] = 1122,
  [SMALL_STATE(84)] = 1126,
  [SMALL_STATE(85)] = 1130,
  [SMALL_STATE(86)] = 1134,
  [SMALL_STATE(87)] = 1138,
  [SMALL_STATE(88)] = 1142,
  [SMALL_STATE(89)] = 1146,
  [SMALL_STATE(90)] = 1150,
  [SMALL_STATE(91)] = 1154,
  [SMALL_STATE(92)] = 1158,
  [SMALL_STATE(93)] = 1162,
  [SMALL_STATE(94)] = 1166,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 2, .production_id = 2),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_option, 2, .production_id = 2), SHIFT(88),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 2),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 3),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 1),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__string_repeat1, 2),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_repeat1, 2), SHIFT_REPEAT(27),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_repeat1, 2), SHIFT_REPEAT(6),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_repeat1, 2), SHIFT_REPEAT(88),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__double_quoted_string_repeat1, 2), SHIFT_REPEAT(4),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__double_quoted_string_repeat1, 2),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__double_quoted_string_repeat1, 2), SHIFT_REPEAT(17),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__double_quoted_string_repeat1, 2), SHIFT_REPEAT(38),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__single_quoted_string_repeat1, 2), SHIFT_REPEAT(5),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__single_quoted_string_repeat1, 2),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__single_quoted_string_repeat1, 2), SHIFT_REPEAT(18),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__single_quoted_string_repeat1, 2), SHIFT_REPEAT(40),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__string, 1), SHIFT(88),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__string, 1), SHIFT(82),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__interpolated_text, 2),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__interpolated_text, 2), SHIFT_REPEAT(24),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__interpolated_text, 2), SHIFT_REPEAT(7),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__string_repeat1, 4),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_repeat1, 4), SHIFT(24),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_repeat1, 4), SHIFT(7),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__string_repeat1, 3),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_repeat1, 3), SHIFT(24),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_repeat1, 3), SHIFT(7),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__interpolated_text, 2), SHIFT_REPEAT(28),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__interpolated_text, 2), SHIFT_REPEAT(6),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 3),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template, 3),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__expression_repeat1, 2),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_repeat1, 2), SHIFT_REPEAT(89),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 2),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape, 1),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape, 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 3),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(15),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__function_args_repeat1, 2),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__function_args_repeat1, 2), SHIFT_REPEAT(3),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_section, 1), SHIFT(15),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_argument, 3),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_args, 2),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_args, 1),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_arg, 1),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 2),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_section, 2), SHIFT(15),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(13),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 4),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 4),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quoted_string, 3),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quoted_string, 3),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_quoted_string, 2),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_quoted_string, 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__filter, 2, .production_id = 3),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__filter, 2, .production_id = 3),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__section_header, 3),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 3, .production_id = 2),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 3),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 3),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__list_operator, 3),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_operator, 3),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex, 4),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 4),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_quoted_string, 3),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_quoted_string, 3),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quoted_string, 2),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quoted_string, 2),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2, .production_id = 1),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [317] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
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
