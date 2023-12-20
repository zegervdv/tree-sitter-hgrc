#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 23
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 28
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LBRACK = 1,
  anon_sym_RBRACK = 2,
  aux_sym__section_header_token1 = 3,
  sym_name = 4,
  anon_sym_EQ = 5,
  sym_option_name = 6,
  aux_sym_string_token1 = 7,
  aux_sym_string_token2 = 8,
  anon_sym_false = 9,
  anon_sym_no = 10,
  anon_sym_0 = 11,
  anon_sym_off = 12,
  anon_sym_true = 13,
  anon_sym_yes = 14,
  anon_sym_1 = 15,
  anon_sym_on = 16,
  sym_comment = 17,
  sym_source = 18,
  sym_section = 19,
  sym__section_header = 20,
  sym_option = 21,
  sym__option_value = 22,
  sym_string = 23,
  sym_bool = 24,
  aux_sym_source_repeat1 = 25,
  aux_sym_section_repeat1 = 26,
  aux_sym_string_repeat1 = 27,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
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
  [sym_comment] = "comment",
  [sym_source] = "source",
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
  [sym_comment] = sym_comment,
  [sym_source] = sym_source,
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
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(19);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(63);
      if (lookahead == '0') ADVANCE(51);
      if (lookahead == '1') ADVANCE(59);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == '[') ADVANCE(20);
      if (lookahead == ']') ADVANCE(21);
      if (lookahead == 'f') ADVANCE(5);
      if (lookahead == 'n') ADVANCE(12);
      if (lookahead == 'o') ADVANCE(9);
      if (lookahead == 't') ADVANCE(13);
      if (lookahead == 'y') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '\r') ADVANCE(31);
      if (lookahead == '0') ADVANCE(52);
      if (lookahead == '1') ADVANCE(60);
      if (lookahead == 'f') ADVANCE(33);
      if (lookahead == 'n') ADVANCE(40);
      if (lookahead == 'o') ADVANCE(37);
      if (lookahead == 't') ADVANCE(41);
      if (lookahead == 'y') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(31);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(26);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '\r') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(11);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 9:
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 10:
      if (lookahead == 'f') ADVANCE(53);
      END_STATE();
    case 11:
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 13:
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 14:
      if (lookahead == 's') ADVANCE(57);
      END_STATE();
    case 15:
      if (lookahead == 's') ADVANCE(8);
      END_STATE();
    case 16:
      if (lookahead == 'u') ADVANCE(7);
      END_STATE();
    case 17:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(46);
      END_STATE();
    case 18:
      if (eof) ADVANCE(19);
      if (lookahead == '#') ADVANCE(63);
      if (lookahead == ';') ADVANCE(28);
      if (lookahead == '[') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '=' &&
          lookahead != ']') ADVANCE(30);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym__section_header_token1);
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '\r') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(31);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym__section_header_token1);
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == '\r') ADVANCE(3);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym__section_header_token1);
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '\r') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(32);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_name);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_option_name);
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == '#' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(63);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_option_name);
      if (lookahead == ';') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_option_name);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '\r') ADVANCE(31);
      if (lookahead == '0') ADVANCE(52);
      if (lookahead == '1') ADVANCE(60);
      if (lookahead == 'f') ADVANCE(33);
      if (lookahead == 'n') ADVANCE(40);
      if (lookahead == 'o') ADVANCE(37);
      if (lookahead == 't') ADVANCE(41);
      if (lookahead == 'y') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(31);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '\r') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'a') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(45);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'e') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(45);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'e') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(45);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'e') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(45);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'f') ADVANCE(38);
      if (lookahead == 'n') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(45);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'f') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(45);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'l') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(45);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'o') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(45);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'r') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(45);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 's') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(45);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 's') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(45);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'u') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(45);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_no);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(45);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(45);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_off);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_off);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(45);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(45);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_yes);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_yes);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(45);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(45);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_on);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(45);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 18},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 18},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 18},
  [8] = {.lex_state = 18},
  [9] = {.lex_state = 18},
  [10] = {.lex_state = 18},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 17},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
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
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(22),
    [sym_section] = STATE(4),
    [sym__section_header] = STATE(3),
    [aux_sym_source_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(9), 1,
      aux_sym__section_header_token1,
    ACTIONS(11), 1,
      aux_sym_string_token1,
    STATE(12), 1,
      aux_sym_string_repeat1,
    STATE(18), 3,
      sym__option_value,
      sym_string,
      sym_bool,
    ACTIONS(13), 8,
      anon_sym_false,
      anon_sym_no,
      anon_sym_0,
      anon_sym_off,
      anon_sym_true,
      anon_sym_yes,
      anon_sym_1,
      anon_sym_on,
  [25] = 4,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      sym_option_name,
    ACTIONS(17), 2,
      anon_sym_LBRACK,
      sym_comment,
    STATE(5), 2,
      sym_option,
      aux_sym_section_repeat1,
  [40] = 5,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      sym_comment,
    STATE(3), 1,
      sym__section_header,
    STATE(6), 2,
      sym_section,
      aux_sym_source_repeat1,
  [57] = 4,
    ACTIONS(19), 1,
      sym_option_name,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 2,
      anon_sym_LBRACK,
      sym_comment,
    STATE(7), 2,
      sym_option,
      aux_sym_section_repeat1,
  [72] = 5,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(34), 1,
      sym_comment,
    STATE(3), 1,
      sym__section_header,
    STATE(6), 2,
      sym_section,
      aux_sym_source_repeat1,
  [89] = 4,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(41), 1,
      sym_option_name,
    ACTIONS(39), 2,
      anon_sym_LBRACK,
      sym_comment,
    STATE(7), 2,
      sym_option,
      aux_sym_section_repeat1,
  [104] = 2,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    ACTIONS(46), 3,
      anon_sym_LBRACK,
      sym_option_name,
      sym_comment,
  [113] = 2,
    ACTIONS(48), 1,
      ts_builtin_sym_end,
    ACTIONS(50), 3,
      anon_sym_LBRACK,
      sym_option_name,
      sym_comment,
  [122] = 2,
    ACTIONS(52), 1,
      ts_builtin_sym_end,
    ACTIONS(54), 3,
      anon_sym_LBRACK,
      sym_option_name,
      sym_comment,
  [131] = 3,
    ACTIONS(56), 1,
      aux_sym__section_header_token1,
    ACTIONS(58), 1,
      aux_sym_string_token1,
    STATE(11), 1,
      aux_sym_string_repeat1,
  [141] = 3,
    ACTIONS(11), 1,
      aux_sym_string_token1,
    ACTIONS(61), 1,
      aux_sym__section_header_token1,
    STATE(11), 1,
      aux_sym_string_repeat1,
  [151] = 2,
    ACTIONS(63), 1,
      aux_sym__section_header_token1,
    ACTIONS(66), 1,
      aux_sym_string_token1,
  [158] = 1,
    ACTIONS(68), 2,
      aux_sym__section_header_token1,
      aux_sym_string_token1,
  [163] = 1,
    ACTIONS(70), 1,
      sym_name,
  [167] = 1,
    ACTIONS(72), 1,
      aux_sym__section_header_token1,
  [171] = 1,
    ACTIONS(74), 1,
      aux_sym__section_header_token1,
  [175] = 1,
    ACTIONS(76), 1,
      aux_sym__section_header_token1,
  [179] = 1,
    ACTIONS(78), 1,
      anon_sym_EQ,
  [183] = 1,
    ACTIONS(80), 1,
      aux_sym_string_token2,
  [187] = 1,
    ACTIONS(82), 1,
      anon_sym_RBRACK,
  [191] = 1,
    ACTIONS(84), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 25,
  [SMALL_STATE(4)] = 40,
  [SMALL_STATE(5)] = 57,
  [SMALL_STATE(6)] = 72,
  [SMALL_STATE(7)] = 89,
  [SMALL_STATE(8)] = 104,
  [SMALL_STATE(9)] = 113,
  [SMALL_STATE(10)] = 122,
  [SMALL_STATE(11)] = 131,
  [SMALL_STATE(12)] = 141,
  [SMALL_STATE(13)] = 151,
  [SMALL_STATE(14)] = 158,
  [SMALL_STATE(15)] = 163,
  [SMALL_STATE(16)] = 167,
  [SMALL_STATE(17)] = 171,
  [SMALL_STATE(18)] = 175,
  [SMALL_STATE(19)] = 179,
  [SMALL_STATE(20)] = 183,
  [SMALL_STATE(21)] = 187,
  [SMALL_STATE(22)] = 191,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 1),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 2),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 2),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(15),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(6),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(19),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__section_header, 4),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__section_header, 4),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 4),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 4),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 3),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 3),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(13),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1), SHIFT_REPEAT(20),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 3),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [84] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
