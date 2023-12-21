#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 30
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 33
#define ALIAS_COUNT 0
#define TOKEN_COUNT 22
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_PERCENTinclude = 1,
  aux_sym_include_token1 = 2,
  anon_sym_LBRACK = 3,
  anon_sym_RBRACK = 4,
  sym_name = 5,
  anon_sym_EQ = 6,
  sym_option_name = 7,
  aux_sym_string_token1 = 8,
  aux_sym_string_token2 = 9,
  anon_sym_false = 10,
  anon_sym_no = 11,
  anon_sym_0 = 12,
  anon_sym_off = 13,
  anon_sym_true = 14,
  anon_sym_yes = 15,
  anon_sym_1 = 16,
  anon_sym_on = 17,
  anon_sym_True = 18,
  anon_sym_False = 19,
  sym_path = 20,
  sym_comment = 21,
  sym_source = 22,
  sym_include = 23,
  sym_section = 24,
  sym__section_header = 25,
  sym_option = 26,
  sym__option_value = 27,
  sym_string = 28,
  sym_bool = 29,
  aux_sym_source_repeat1 = 30,
  aux_sym_section_repeat1 = 31,
  aux_sym_string_repeat1 = 32,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_PERCENTinclude] = "%include",
  [aux_sym_include_token1] = "include_token1",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_name] = "name",
  [anon_sym_EQ] = "=",
  [sym_option_name] = "option_name",
  [aux_sym_string_token1] = "string_token1",
  [aux_sym_string_token2] = "string_token2",
  [anon_sym_false] = "false",
  [anon_sym_no] = "no",
  [anon_sym_0] = "0",
  [anon_sym_off] = "off",
  [anon_sym_true] = "true",
  [anon_sym_yes] = "yes",
  [anon_sym_1] = "1",
  [anon_sym_on] = "on",
  [anon_sym_True] = "True",
  [anon_sym_False] = "False",
  [sym_path] = "path",
  [sym_comment] = "comment",
  [sym_source] = "source",
  [sym_include] = "include",
  [sym_section] = "section",
  [sym__section_header] = "_section_header",
  [sym_option] = "option",
  [sym__option_value] = "_option_value",
  [sym_string] = "string",
  [sym_bool] = "bool",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_section_repeat1] = "section_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_PERCENTinclude] = anon_sym_PERCENTinclude,
  [aux_sym_include_token1] = aux_sym_include_token1,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_name] = sym_name,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_option_name] = sym_option_name,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_no] = anon_sym_no,
  [anon_sym_0] = anon_sym_0,
  [anon_sym_off] = anon_sym_off,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_yes] = anon_sym_yes,
  [anon_sym_1] = anon_sym_1,
  [anon_sym_on] = anon_sym_on,
  [anon_sym_True] = anon_sym_True,
  [anon_sym_False] = anon_sym_False,
  [sym_path] = sym_path,
  [sym_comment] = sym_comment,
  [sym_source] = sym_source,
  [sym_include] = sym_include,
  [sym_section] = sym_section,
  [sym__section_header] = sym__section_header,
  [sym_option] = sym_option,
  [sym__option_value] = sym__option_value,
  [sym_string] = sym_string,
  [sym_bool] = sym_bool,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym_section_repeat1] = aux_sym_section_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_PERCENTinclude] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_include_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_option_name] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_off] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_yes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_on] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_True] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_False] = {
    .visible = true,
    .named = false,
  },
  [sym_path] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym_include] = {
    .visible = true,
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
  [sym__option_value] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_bool] = {
    .visible = true,
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
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
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
  [6] = 6,
  [7] = 7,
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
  [28] = 28,
  [29] = 29,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(34);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(91);
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '/' ||
          lookahead == '~') ADVANCE(32);
      if (lookahead == '%') ADVANCE(17);
      if (lookahead == '0') ADVANCE(74);
      if (lookahead == '1') ADVANCE(82);
      if (lookahead == '=') ADVANCE(43);
      if (lookahead == 'F') ADVANCE(5);
      if (lookahead == 'T') ADVANCE(23);
      if (lookahead == '[') ADVANCE(39);
      if (lookahead == ']') ADVANCE(40);
      if (lookahead == 'f') ADVANCE(6);
      if (lookahead == 'n') ADVANCE(22);
      if (lookahead == 'o') ADVANCE(15);
      if (lookahead == 't') ADVANCE(24);
      if (lookahead == 'y') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == '\r') ADVANCE(46);
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '/' ||
          lookahead == '~') ADVANCE(67);
      if (lookahead == '0') ADVANCE(75);
      if (lookahead == '1') ADVANCE(83);
      if (lookahead == 'F') ADVANCE(48);
      if (lookahead == 'T') ADVANCE(60);
      if (lookahead == 'f') ADVANCE(49);
      if (lookahead == 'n') ADVANCE(59);
      if (lookahead == 'o') ADVANCE(55);
      if (lookahead == 't') ADVANCE(61);
      if (lookahead == 'y') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead != 0) ADVANCE(68);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '\r') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead != 0) ADVANCE(68);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(42);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(19);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(20);
      END_STATE();
    case 7:
      if (lookahead == 'c') ADVANCE(18);
      END_STATE();
    case 8:
      if (lookahead == 'd') ADVANCE(14);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 15:
      if (lookahead == 'f') ADVANCE(16);
      if (lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 16:
      if (lookahead == 'f') ADVANCE(76);
      END_STATE();
    case 17:
      if (lookahead == 'i') ADVANCE(21);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(7);
      END_STATE();
    case 22:
      if (lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 23:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 24:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 25:
      if (lookahead == 's') ADVANCE(80);
      END_STATE();
    case 26:
      if (lookahead == 's') ADVANCE(12);
      END_STATE();
    case 27:
      if (lookahead == 's') ADVANCE(13);
      END_STATE();
    case 28:
      if (lookahead == 'u') ADVANCE(8);
      END_STATE();
    case 29:
      if (lookahead == 'u') ADVANCE(10);
      END_STATE();
    case 30:
      if (lookahead == 'u') ADVANCE(11);
      END_STATE();
    case 31:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(69);
      END_STATE();
    case 32:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(90);
      END_STATE();
    case 33:
      if (eof) ADVANCE(34);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(91);
      if (lookahead == '%') ADVANCE(17);
      if (lookahead == '[') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '=' &&
          lookahead != ']') ADVANCE(45);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_PERCENTinclude);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_include_token1);
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == '\r') ADVANCE(46);
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '/' ||
          lookahead == '~') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(46);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_include_token1);
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '\r') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(47);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_include_token1);
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == '\r') ADVANCE(3);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_name);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_option_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '%' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_option_name);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '%' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == '\r') ADVANCE(46);
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '/' ||
          lookahead == '~') ADVANCE(67);
      if (lookahead == '0') ADVANCE(75);
      if (lookahead == '1') ADVANCE(83);
      if (lookahead == 'F') ADVANCE(48);
      if (lookahead == 'T') ADVANCE(60);
      if (lookahead == 'f') ADVANCE(49);
      if (lookahead == 'n') ADVANCE(59);
      if (lookahead == 'o') ADVANCE(55);
      if (lookahead == 't') ADVANCE(61);
      if (lookahead == 'y') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead != 0) ADVANCE(68);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '\r') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead != 0) ADVANCE(68);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'a') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'a') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'e') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'e') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'e') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'e') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'e') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'f') ADVANCE(56);
      if (lookahead == 'n') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'f') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'l') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'l') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'o') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'r') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'r') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 's') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 's') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 's') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'u') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'u') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(90);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_no);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_off);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_off);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_yes);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_yes);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_on);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_True);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_True);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_False);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_False);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_path);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(91);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 33},
  [6] = {.lex_state = 33},
  [7] = {.lex_state = 33},
  [8] = {.lex_state = 33},
  [9] = {.lex_state = 33},
  [10] = {.lex_state = 33},
  [11] = {.lex_state = 33},
  [12] = {.lex_state = 33},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 31},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 4},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_PERCENTinclude] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_no] = ACTIONS(1),
    [anon_sym_0] = ACTIONS(1),
    [anon_sym_off] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_yes] = ACTIONS(1),
    [anon_sym_1] = ACTIONS(1),
    [anon_sym_on] = ACTIONS(1),
    [anon_sym_True] = ACTIONS(1),
    [anon_sym_False] = ACTIONS(1),
    [sym_path] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(28),
    [sym_include] = STATE(3),
    [sym_section] = STATE(3),
    [sym__section_header] = STATE(5),
    [aux_sym_source_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_PERCENTinclude] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
  [2] = {
    [sym__option_value] = STATE(24),
    [sym_string] = STATE(24),
    [sym_bool] = STATE(24),
    [aux_sym_string_repeat1] = STATE(15),
    [aux_sym_include_token1] = ACTIONS(11),
    [aux_sym_string_token1] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_no] = ACTIONS(15),
    [anon_sym_0] = ACTIONS(15),
    [anon_sym_off] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_yes] = ACTIONS(15),
    [anon_sym_1] = ACTIONS(15),
    [anon_sym_on] = ACTIONS(15),
    [anon_sym_True] = ACTIONS(15),
    [anon_sym_False] = ACTIONS(15),
    [sym_path] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(5), 1,
      anon_sym_PERCENTinclude,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      sym_comment,
    STATE(5), 1,
      sym__section_header,
    STATE(4), 3,
      sym_include,
      sym_section,
      aux_sym_source_repeat1,
  [21] = 6,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      anon_sym_PERCENTinclude,
    ACTIONS(28), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym_comment,
    STATE(5), 1,
      sym__section_header,
    STATE(4), 3,
      sym_include,
      sym_section,
      aux_sym_source_repeat1,
  [42] = 5,
    ACTIONS(34), 1,
      ts_builtin_sym_end,
    ACTIONS(38), 1,
      sym_option_name,
    ACTIONS(40), 1,
      sym_comment,
    ACTIONS(36), 2,
      anon_sym_PERCENTinclude,
      anon_sym_LBRACK,
    STATE(6), 2,
      sym_option,
      aux_sym_section_repeat1,
  [60] = 5,
    ACTIONS(38), 1,
      sym_option_name,
    ACTIONS(40), 1,
      sym_comment,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    ACTIONS(44), 2,
      anon_sym_PERCENTinclude,
      anon_sym_LBRACK,
    STATE(7), 2,
      sym_option,
      aux_sym_section_repeat1,
  [78] = 5,
    ACTIONS(46), 1,
      ts_builtin_sym_end,
    ACTIONS(50), 1,
      sym_option_name,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(48), 2,
      anon_sym_PERCENTinclude,
      anon_sym_LBRACK,
    STATE(7), 2,
      sym_option,
      aux_sym_section_repeat1,
  [96] = 2,
    ACTIONS(46), 2,
      ts_builtin_sym_end,
      sym_option_name,
    ACTIONS(48), 3,
      anon_sym_PERCENTinclude,
      anon_sym_LBRACK,
      sym_comment,
  [106] = 2,
    ACTIONS(56), 2,
      ts_builtin_sym_end,
      sym_option_name,
    ACTIONS(58), 3,
      anon_sym_PERCENTinclude,
      anon_sym_LBRACK,
      sym_comment,
  [116] = 2,
    ACTIONS(60), 2,
      ts_builtin_sym_end,
      sym_option_name,
    ACTIONS(62), 3,
      anon_sym_PERCENTinclude,
      anon_sym_LBRACK,
      sym_comment,
  [126] = 2,
    ACTIONS(64), 2,
      ts_builtin_sym_end,
      sym_option_name,
    ACTIONS(66), 3,
      anon_sym_PERCENTinclude,
      anon_sym_LBRACK,
      sym_comment,
  [136] = 2,
    ACTIONS(68), 2,
      ts_builtin_sym_end,
      sym_option_name,
    ACTIONS(70), 3,
      anon_sym_PERCENTinclude,
      anon_sym_LBRACK,
      sym_comment,
  [146] = 1,
    ACTIONS(72), 4,
      ts_builtin_sym_end,
      anon_sym_PERCENTinclude,
      anon_sym_LBRACK,
      sym_comment,
  [153] = 3,
    ACTIONS(74), 1,
      aux_sym_include_token1,
    ACTIONS(76), 1,
      aux_sym_string_token1,
    STATE(14), 1,
      aux_sym_string_repeat1,
  [163] = 3,
    ACTIONS(13), 1,
      aux_sym_string_token1,
    ACTIONS(79), 1,
      aux_sym_include_token1,
    STATE(14), 1,
      aux_sym_string_repeat1,
  [173] = 2,
    ACTIONS(81), 1,
      aux_sym_include_token1,
    ACTIONS(84), 1,
      aux_sym_string_token1,
  [180] = 2,
    ACTIONS(86), 1,
      aux_sym_include_token1,
    ACTIONS(88), 1,
      sym_comment,
  [187] = 1,
    ACTIONS(90), 2,
      aux_sym_include_token1,
      aux_sym_string_token1,
  [192] = 1,
    ACTIONS(92), 1,
      sym_path,
  [196] = 1,
    ACTIONS(94), 1,
      aux_sym_include_token1,
  [200] = 1,
    ACTIONS(96), 1,
      aux_sym_include_token1,
  [204] = 1,
    ACTIONS(98), 1,
      anon_sym_EQ,
  [208] = 1,
    ACTIONS(100), 1,
      aux_sym_include_token1,
  [212] = 1,
    ACTIONS(102), 1,
      aux_sym_include_token1,
  [216] = 1,
    ACTIONS(104), 1,
      anon_sym_RBRACK,
  [220] = 1,
    ACTIONS(106), 1,
      aux_sym_include_token1,
  [224] = 1,
    ACTIONS(108), 1,
      aux_sym_string_token2,
  [228] = 1,
    ACTIONS(110), 1,
      ts_builtin_sym_end,
  [232] = 1,
    ACTIONS(112), 1,
      sym_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 21,
  [SMALL_STATE(5)] = 42,
  [SMALL_STATE(6)] = 60,
  [SMALL_STATE(7)] = 78,
  [SMALL_STATE(8)] = 96,
  [SMALL_STATE(9)] = 106,
  [SMALL_STATE(10)] = 116,
  [SMALL_STATE(11)] = 126,
  [SMALL_STATE(12)] = 136,
  [SMALL_STATE(13)] = 146,
  [SMALL_STATE(14)] = 153,
  [SMALL_STATE(15)] = 163,
  [SMALL_STATE(16)] = 173,
  [SMALL_STATE(17)] = 180,
  [SMALL_STATE(18)] = 187,
  [SMALL_STATE(19)] = 192,
  [SMALL_STATE(20)] = 196,
  [SMALL_STATE(21)] = 200,
  [SMALL_STATE(22)] = 204,
  [SMALL_STATE(23)] = 208,
  [SMALL_STATE(24)] = 212,
  [SMALL_STATE(25)] = 216,
  [SMALL_STATE(26)] = 220,
  [SMALL_STATE(27)] = 224,
  [SMALL_STATE(28)] = 228,
  [SMALL_STATE(29)] = 232,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(19),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(29),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(4),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 1),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 2),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 2),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(22),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(21),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 4),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 4),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__section_header, 5),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__section_header, 5),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 3),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 3),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__section_header, 4),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__section_header, 4),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 3),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(16),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1), SHIFT_REPEAT(27),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 3),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [110] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
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
