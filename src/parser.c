#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 22
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 23
#define ALIAS_COUNT 1
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 3

enum {
  sym_identifier = 1,
  anon_sym_ATstartuml = 2,
  anon_sym_ATenduml = 3,
  anon_sym_BANGinclude = 4,
  anon_sym_ = 5,
  anon_sym_LPAREN = 6,
  anon_sym_RPAREN = 7,
  anon_sym_COMMA = 8,
  anon_sym_DOLLAR = 9,
  anon_sym_EQ = 10,
  sym_string = 11,
  sym_unqouted_string = 12,
  sym_diagram = 13,
  sym__startend = 14,
  sym_preprocessor = 15,
  sym_procedure = 16,
  sym_block = 17,
  sym_argument_list = 18,
  sym__expression = 19,
  sym_named_parameter = 20,
  aux_sym_diagram_repeat1 = 21,
  aux_sym_argument_list_repeat1 = 22,
  alias_sym_procedure_identifier = 23,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_ATstartuml] = "@startuml",
  [anon_sym_ATenduml] = "@enduml",
  [anon_sym_BANGinclude] = "include",
  [anon_sym_] = " ",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_EQ] = "=",
  [sym_string] = "string",
  [sym_unqouted_string] = "unqouted_string",
  [sym_diagram] = "diagram",
  [sym__startend] = "_startend",
  [sym_preprocessor] = "preprocessor",
  [sym_procedure] = "procedure",
  [sym_block] = "block",
  [sym_argument_list] = "argument_list",
  [sym__expression] = "_expression",
  [sym_named_parameter] = "named_parameter",
  [aux_sym_diagram_repeat1] = "diagram_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
  [alias_sym_procedure_identifier] = "procedure_identifier",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_ATstartuml] = anon_sym_ATstartuml,
  [anon_sym_ATenduml] = anon_sym_ATenduml,
  [anon_sym_BANGinclude] = anon_sym_BANGinclude,
  [anon_sym_] = anon_sym_,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_string] = sym_string,
  [sym_unqouted_string] = sym_unqouted_string,
  [sym_diagram] = sym_diagram,
  [sym__startend] = sym__startend,
  [sym_preprocessor] = sym_preprocessor,
  [sym_procedure] = sym_procedure,
  [sym_block] = sym_block,
  [sym_argument_list] = sym_argument_list,
  [sym__expression] = sym__expression,
  [sym_named_parameter] = sym_named_parameter,
  [aux_sym_diagram_repeat1] = aux_sym_diagram_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
  [alias_sym_procedure_identifier] = alias_sym_procedure_identifier,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATstartuml] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATenduml] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGinclude] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
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
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_unqouted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_diagram] = {
    .visible = true,
    .named = true,
  },
  [sym__startend] = {
    .visible = false,
    .named = true,
  },
  [sym_preprocessor] = {
    .visible = true,
    .named = true,
  },
  [sym_procedure] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_named_parameter] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_diagram_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_procedure_identifier] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_url = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_url] = "url",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_url, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_procedure_identifier,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(24);
      if (lookahead == '!') ADVANCE(10);
      if (lookahead == '$') ADVANCE(32);
      if (lookahead == '(') ADVANCE(29);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == ',') ADVANCE(31);
      if (lookahead == '=') ADVANCE(33);
      if (lookahead == '@') ADVANCE(9);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(28);
      if (lookahead == '$') ADVANCE(32);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(35);
      if (lookahead == '\'') ADVANCE(36);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(18);
      END_STATE();
    case 5:
      if (lookahead == 'c') ADVANCE(13);
      END_STATE();
    case 6:
      if (lookahead == 'd') ADVANCE(21);
      END_STATE();
    case 7:
      if (lookahead == 'd') ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(17);
      if (lookahead == 's') ADVANCE(19);
      END_STATE();
    case 10:
      if (lookahead == 'i') ADVANCE(16);
      END_STATE();
    case 11:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 12:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 13:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 14:
      if (lookahead == 'm') ADVANCE(11);
      END_STATE();
    case 15:
      if (lookahead == 'm') ADVANCE(12);
      END_STATE();
    case 16:
      if (lookahead == 'n') ADVANCE(5);
      END_STATE();
    case 17:
      if (lookahead == 'n') ADVANCE(6);
      END_STATE();
    case 18:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 19:
      if (lookahead == 't') ADVANCE(4);
      END_STATE();
    case 20:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 21:
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 22:
      if (lookahead == 'u') ADVANCE(7);
      END_STATE();
    case 23:
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_ATstartuml);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_ATenduml);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_BANGinclude);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(35);
      if (lookahead == '\'') ADVANCE(36);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_unqouted_string);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_unqouted_string);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(ts_builtin_sym_end);
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
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_ATstartuml] = ACTIONS(1),
    [anon_sym_ATenduml] = ACTIONS(1),
    [anon_sym_BANGinclude] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
  },
  [1] = {
    [sym_diagram] = STATE(19),
    [sym__startend] = STATE(2),
    [sym_preprocessor] = STATE(2),
    [sym_procedure] = STATE(2),
    [aux_sym_diagram_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [anon_sym_ATstartuml] = ACTIONS(7),
    [anon_sym_ATenduml] = ACTIONS(7),
    [anon_sym_BANGinclude] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_BANGinclude,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 2,
      anon_sym_ATstartuml,
      anon_sym_ATenduml,
    STATE(3), 4,
      sym__startend,
      sym_preprocessor,
      sym_procedure,
      aux_sym_diagram_repeat1,
  [20] = 5,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_BANGinclude,
    ACTIONS(20), 2,
      anon_sym_ATstartuml,
      anon_sym_ATenduml,
    STATE(3), 4,
      sym__startend,
      sym_preprocessor,
      sym_procedure,
      aux_sym_diagram_repeat1,
  [40] = 5,
    ACTIONS(28), 1,
      anon_sym_DOLLAR,
    STATE(6), 1,
      aux_sym_argument_list_repeat1,
    STATE(18), 1,
      sym_argument_list,
    ACTIONS(26), 2,
      sym_identifier,
      sym_string,
    STATE(9), 2,
      sym__expression,
      sym_named_parameter,
  [58] = 5,
    ACTIONS(33), 1,
      anon_sym_RPAREN,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    STATE(5), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(30), 2,
      sym_identifier,
      sym_string,
    STATE(9), 2,
      sym__expression,
      sym_named_parameter,
  [76] = 5,
    ACTIONS(28), 1,
      anon_sym_DOLLAR,
    ACTIONS(38), 1,
      anon_sym_RPAREN,
    STATE(5), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(26), 2,
      sym_identifier,
      sym_string,
    STATE(9), 2,
      sym__expression,
      sym_named_parameter,
  [94] = 1,
    ACTIONS(40), 5,
      ts_builtin_sym_end,
      anon_sym_ATstartuml,
      anon_sym_ATenduml,
      anon_sym_BANGinclude,
      sym_identifier,
  [102] = 1,
    ACTIONS(42), 5,
      ts_builtin_sym_end,
      anon_sym_ATstartuml,
      anon_sym_ATenduml,
      anon_sym_BANGinclude,
      sym_identifier,
  [110] = 2,
    ACTIONS(46), 1,
      anon_sym_COMMA,
    ACTIONS(44), 4,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      sym_identifier,
      sym_string,
  [120] = 1,
    ACTIONS(48), 5,
      ts_builtin_sym_end,
      anon_sym_ATstartuml,
      anon_sym_ATenduml,
      anon_sym_BANGinclude,
      sym_identifier,
  [128] = 2,
    ACTIONS(52), 1,
      anon_sym_,
    ACTIONS(50), 4,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      sym_identifier,
      sym_string,
  [138] = 1,
    ACTIONS(54), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOLLAR,
      sym_identifier,
      sym_string,
  [146] = 1,
    ACTIONS(56), 4,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      sym_identifier,
      sym_string,
  [153] = 2,
    ACTIONS(58), 1,
      anon_sym_LPAREN,
    STATE(8), 1,
      sym_block,
  [160] = 1,
    ACTIONS(60), 1,
      sym_unqouted_string,
  [164] = 1,
    ACTIONS(62), 1,
      anon_sym_,
  [168] = 1,
    ACTIONS(64), 1,
      sym_identifier,
  [172] = 1,
    ACTIONS(66), 1,
      anon_sym_RPAREN,
  [176] = 1,
    ACTIONS(68), 1,
      ts_builtin_sym_end,
  [180] = 1,
    ACTIONS(70), 1,
      anon_sym_EQ,
  [184] = 1,
    ACTIONS(72), 1,
      sym_string,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 20,
  [SMALL_STATE(4)] = 40,
  [SMALL_STATE(5)] = 58,
  [SMALL_STATE(6)] = 76,
  [SMALL_STATE(7)] = 94,
  [SMALL_STATE(8)] = 102,
  [SMALL_STATE(9)] = 110,
  [SMALL_STATE(10)] = 120,
  [SMALL_STATE(11)] = 128,
  [SMALL_STATE(12)] = 138,
  [SMALL_STATE(13)] = 146,
  [SMALL_STATE(14)] = 153,
  [SMALL_STATE(15)] = 160,
  [SMALL_STATE(16)] = 164,
  [SMALL_STATE(17)] = 168,
  [SMALL_STATE(18)] = 172,
  [SMALL_STATE(19)] = 176,
  [SMALL_STATE(20)] = 180,
  [SMALL_STATE(21)] = 184,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_repeat1, 2), SHIFT_REPEAT(14),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_repeat1, 2), SHIFT_REPEAT(3),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_repeat1, 2), SHIFT_REPEAT(16),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(9),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(17),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 1),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preprocessor, 3, .production_id = 2),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure, 2, .production_id = 1),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 1),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_parameter, 4),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 3),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [68] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_plantuml(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
