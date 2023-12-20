#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 25
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 31
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_PERCENTinclude = 1,
  anon_sym_LBRACK = 2,
  anon_sym_RBRACK = 3,
  aux_sym__section_header_token1 = 4,
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
  sym_path = 18,
  sym_comment = 19,
  sym_source = 20,
  sym_include = 21,
  sym_section = 22,
  sym__section_header = 23,
  sym_option = 24,
  sym__option_value = 25,
  sym_string = 26,
  sym_bool = 27,
  aux_sym_source_repeat1 = 28,
  aux_sym_section_repeat1 = 29,
  aux_sym_string_repeat1 = 30,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_PERCENTinclude] = "%include",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [aux_sym__section_header_token1] = "_section_header_token1",
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
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym__section_header_token1] = aux_sym__section_header_token1,
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__section_header_token1] = {
    .visible = false,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(27);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(73);
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '/' ||
          lookahead == '~') ADVANCE(25);
      if (lookahead == '%') ADVANCE(14);
      if (lookahead == '0') ADVANCE(60);
      if (lookahead == '1') ADVANCE(68);
      if (lookahead == '=') ADVANCE(36);
      if (lookahead == '[') ADVANCE(29);
      if (lookahead == ']') ADVANCE(30);
      if (lookahead == 'f') ADVANCE(5);
      if (lookahead == 'n') ADVANCE(18);
      if (lookahead == 'o') ADVANCE(12);
      if (lookahead == 't') ADVANCE(19);
      if (lookahead == 'y') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(31);
      if (lookahead == '\r') ADVANCE(39);
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '/' ||
          lookahead == '~') ADVANCE(53);
      if (lookahead == '0') ADVANCE(61);
      if (lookahead == '1') ADVANCE(69);
      if (lookahead == 'f') ADVANCE(41);
      if (lookahead == 'n') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(45);
      if (lookahead == 't') ADVANCE(49);
      if (lookahead == 'y') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == '\r') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(35);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(16);
      END_STATE();
    case 6:
      if (lookahead == 'c') ADVANCE(15);
      END_STATE();
    case 7:
      if (lookahead == 'd') ADVANCE(11);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 12:
      if (lookahead == 'f') ADVANCE(13);
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 13:
      if (lookahead == 'f') ADVANCE(62);
      END_STATE();
    case 14:
      if (lookahead == 'i') ADVANCE(17);
      END_STATE();
    case 15:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 17:
      if (lookahead == 'n') ADVANCE(6);
      END_STATE();
    case 18:
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 19:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 20:
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 21:
      if (lookahead == 's') ADVANCE(10);
      END_STATE();
    case 22:
      if (lookahead == 'u') ADVANCE(7);
      END_STATE();
    case 23:
      if (lookahead == 'u') ADVANCE(9);
      END_STATE();
    case 24:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(55);
      END_STATE();
    case 25:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(72);
      END_STATE();
    case 26:
      if (eof) ADVANCE(27);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(73);
      if (lookahead == '%') ADVANCE(14);
      if (lookahead == '[') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '=' &&
          lookahead != ']') ADVANCE(38);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_PERCENTinclude);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym__section_header_token1);
      if (lookahead == '\n') ADVANCE(31);
      if (lookahead == '\r') ADVANCE(39);
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '/' ||
          lookahead == '~') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(39);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym__section_header_token1);
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == '\r') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(40);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym__section_header_token1);
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '\r') ADVANCE(3);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_name);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_option_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '%' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_option_name);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '%' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(31);
      if (lookahead == '\r') ADVANCE(39);
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '/' ||
          lookahead == '~') ADVANCE(53);
      if (lookahead == '0') ADVANCE(61);
      if (lookahead == '1') ADVANCE(69);
      if (lookahead == 'f') ADVANCE(41);
      if (lookahead == 'n') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(45);
      if (lookahead == 't') ADVANCE(49);
      if (lookahead == 'y') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == '\r') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'a') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(54);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'e') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(54);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'e') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(54);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'e') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(54);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'f') ADVANCE(46);
      if (lookahead == 'n') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(54);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'f') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(54);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'l') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(54);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'o') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(54);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'r') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(54);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 's') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(54);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 's') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(54);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'u') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(54);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(72);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(54);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_no);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(54);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(54);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_off);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_off);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(54);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(54);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_yes);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_yes);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(54);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(54);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_on);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(54);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_path);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(73);
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
  [5] = {.lex_state = 26},
  [6] = {.lex_state = 26},
  [7] = {.lex_state = 26},
  [8] = {.lex_state = 26},
  [9] = {.lex_state = 26},
  [10] = {.lex_state = 26},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 24},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 4},
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
    [sym_path] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(23),
    [sym_include] = STATE(3),
    [sym_section] = STATE(3),
    [sym__section_header] = STATE(5),
    [aux_sym_source_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_PERCENTinclude] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(11), 1,
      aux_sym__section_header_token1,
    ACTIONS(13), 1,
      aux_sym_string_token1,
    ACTIONS(17), 1,
      sym_path,
    STATE(13), 1,
      aux_sym_string_repeat1,
    STATE(19), 3,
      sym__option_value,
      sym_string,
      sym_bool,
    ACTIONS(15), 8,
      anon_sym_false,
      anon_sym_no,
      anon_sym_0,
      anon_sym_off,
      anon_sym_true,
      anon_sym_yes,
      anon_sym_1,
      anon_sym_on,
  [28] = 6,
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
  [49] = 6,
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
  [70] = 4,
    ACTIONS(34), 1,
      ts_builtin_sym_end,
    ACTIONS(38), 1,
      sym_option_name,
    STATE(6), 2,
      sym_option,
      aux_sym_section_repeat1,
    ACTIONS(36), 3,
      anon_sym_PERCENTinclude,
      anon_sym_LBRACK,
      sym_comment,
  [86] = 4,
    ACTIONS(38), 1,
      sym_option_name,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
    STATE(7), 2,
      sym_option,
      aux_sym_section_repeat1,
    ACTIONS(42), 3,
      anon_sym_PERCENTinclude,
      anon_sym_LBRACK,
      sym_comment,
  [102] = 4,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    ACTIONS(48), 1,
      sym_option_name,
    STATE(7), 2,
      sym_option,
      aux_sym_section_repeat1,
    ACTIONS(46), 3,
      anon_sym_PERCENTinclude,
      anon_sym_LBRACK,
      sym_comment,
  [118] = 2,
    ACTIONS(51), 2,
      ts_builtin_sym_end,
      sym_option_name,
    ACTIONS(53), 3,
      anon_sym_PERCENTinclude,
      anon_sym_LBRACK,
      sym_comment,
  [128] = 2,
    ACTIONS(55), 2,
      ts_builtin_sym_end,
      sym_option_name,
    ACTIONS(57), 3,
      anon_sym_PERCENTinclude,
      anon_sym_LBRACK,
      sym_comment,
  [138] = 2,
    ACTIONS(59), 2,
      ts_builtin_sym_end,
      sym_option_name,
    ACTIONS(61), 3,
      anon_sym_PERCENTinclude,
      anon_sym_LBRACK,
      sym_comment,
  [148] = 1,
    ACTIONS(63), 4,
      ts_builtin_sym_end,
      anon_sym_PERCENTinclude,
      anon_sym_LBRACK,
      sym_comment,
  [155] = 3,
    ACTIONS(65), 1,
      aux_sym__section_header_token1,
    ACTIONS(67), 1,
      aux_sym_string_token1,
    STATE(12), 1,
      aux_sym_string_repeat1,
  [165] = 3,
    ACTIONS(13), 1,
      aux_sym_string_token1,
    ACTIONS(70), 1,
      aux_sym__section_header_token1,
    STATE(12), 1,
      aux_sym_string_repeat1,
  [175] = 1,
    ACTIONS(72), 2,
      aux_sym__section_header_token1,
      aux_sym_string_token1,
  [180] = 2,
    ACTIONS(74), 1,
      aux_sym__section_header_token1,
    ACTIONS(77), 1,
      aux_sym_string_token1,
  [187] = 1,
    ACTIONS(79), 1,
      aux_sym__section_header_token1,
  [191] = 1,
    ACTIONS(81), 1,
      sym_path,
  [195] = 1,
    ACTIONS(83), 1,
      aux_sym__section_header_token1,
  [199] = 1,
    ACTIONS(85), 1,
      aux_sym__section_header_token1,
  [203] = 1,
    ACTIONS(87), 1,
      anon_sym_EQ,
  [207] = 1,
    ACTIONS(89), 1,
      aux_sym_string_token2,
  [211] = 1,
    ACTIONS(91), 1,
      anon_sym_RBRACK,
  [215] = 1,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
  [219] = 1,
    ACTIONS(95), 1,
      sym_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 28,
  [SMALL_STATE(4)] = 49,
  [SMALL_STATE(5)] = 70,
  [SMALL_STATE(6)] = 86,
  [SMALL_STATE(7)] = 102,
  [SMALL_STATE(8)] = 118,
  [SMALL_STATE(9)] = 128,
  [SMALL_STATE(10)] = 138,
  [SMALL_STATE(11)] = 148,
  [SMALL_STATE(12)] = 155,
  [SMALL_STATE(13)] = 165,
  [SMALL_STATE(14)] = 175,
  [SMALL_STATE(15)] = 180,
  [SMALL_STATE(16)] = 187,
  [SMALL_STATE(17)] = 191,
  [SMALL_STATE(18)] = 195,
  [SMALL_STATE(19)] = 199,
  [SMALL_STATE(20)] = 203,
  [SMALL_STATE(21)] = 207,
  [SMALL_STATE(22)] = 211,
  [SMALL_STATE(23)] = 215,
  [SMALL_STATE(24)] = 219,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(17),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(24),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(4),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 1),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 2),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 2),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(20),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 3),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 4),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 4),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__section_header, 4),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__section_header, 4),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(15),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 3),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1), SHIFT_REPEAT(21),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [93] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
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
