#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 34
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 31
#define ALIAS_COUNT 1
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 3

enum {
  sym_identifier = 1,
  anon_sym_ATstartuml = 2,
  anon_sym_ATenduml = 3,
  anon_sym_BANG = 4,
  anon_sym_include = 5,
  anon_sym_ = 6,
  anon_sym_LBRACE = 7,
  anon_sym_RBRACE = 8,
  anon_sym_LBRACK = 9,
  aux_sym_link_token1 = 10,
  anon_sym_RBRACK = 11,
  anon_sym_LPAREN = 12,
  anon_sym_COMMA = 13,
  anon_sym_RPAREN = 14,
  anon_sym_EQ = 15,
  sym_string = 16,
  sym_single_quote_string = 17,
  sym_unqouted_string = 18,
  sym_diagram = 19,
  sym__startend = 20,
  sym_preprocessor = 21,
  sym_procedure = 22,
  sym_block = 23,
  sym_link = 24,
  sym_argument_list = 25,
  sym__expression = 26,
  sym_named_parameter = 27,
  aux_sym_diagram_repeat1 = 28,
  aux_sym_block_repeat1 = 29,
  aux_sym_argument_list_repeat1 = 30,
  alias_sym_procedure_identifier = 31,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_ATstartuml] = "@startuml",
  [anon_sym_ATenduml] = "@enduml",
  [anon_sym_BANG] = "!",
  [anon_sym_include] = "include",
  [anon_sym_] = " ",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACK] = "[",
  [aux_sym_link_token1] = "link_token1",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_EQ] = "=",
  [sym_string] = "string",
  [sym_single_quote_string] = "single_quote_string",
  [sym_unqouted_string] = "unqouted_string",
  [sym_diagram] = "diagram",
  [sym__startend] = "_startend",
  [sym_preprocessor] = "preprocessor",
  [sym_procedure] = "procedure",
  [sym_block] = "block",
  [sym_link] = "link",
  [sym_argument_list] = "argument_list",
  [sym__expression] = "_expression",
  [sym_named_parameter] = "named_parameter",
  [aux_sym_diagram_repeat1] = "diagram_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
  [alias_sym_procedure_identifier] = "procedure_identifier",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_ATstartuml] = anon_sym_ATstartuml,
  [anon_sym_ATenduml] = anon_sym_ATenduml,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_] = anon_sym_,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [aux_sym_link_token1] = aux_sym_link_token1,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_string] = sym_string,
  [sym_single_quote_string] = sym_single_quote_string,
  [sym_unqouted_string] = sym_unqouted_string,
  [sym_diagram] = sym_diagram,
  [sym__startend] = sym__startend,
  [sym_preprocessor] = sym_preprocessor,
  [sym_procedure] = sym_procedure,
  [sym_block] = sym_block,
  [sym_link] = sym_link,
  [sym_argument_list] = sym_argument_list,
  [sym__expression] = sym__expression,
  [sym_named_parameter] = sym_named_parameter,
  [aux_sym_diagram_repeat1] = aux_sym_diagram_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
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
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_link_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
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
  [sym_single_quote_string] = {
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
  [sym_link] = {
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
  [aux_sym_block_repeat1] = {
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
    {field_url, 3},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(22);
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '$') ADVANCE(20);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == '(') ADVANCE(33);
      if (lookahead == ')') ADVANCE(35);
      if (lookahead == ',') ADVANCE(34);
      if (lookahead == '=') ADVANCE(36);
      if (lookahead == '@') ADVANCE(9);
      if (lookahead == '[') ADVANCE(29);
      if (lookahead == ']') ADVANCE(32);
      if (lookahead == '{') ADVANCE(27);
      if (lookahead == '}') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == ',' ||
          lookahead == '[') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(40);
      if (lookahead == '[') ADVANCE(2);
      if (lookahead == '$' ||
          lookahead == ']') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') ADVANCE(40);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(41);
      if (lookahead == ',') ADVANCE(40);
      if (lookahead == '[') ADVANCE(2);
      if (lookahead == '$' ||
          lookahead == ']') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == ',' ||
          lookahead == ']') ADVANCE(42);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(38);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(39);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(15);
      END_STATE();
    case 8:
      if (lookahead == 'd') ADVANCE(18);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(14);
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 10:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 11:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 12:
      if (lookahead == 'm') ADVANCE(10);
      END_STATE();
    case 13:
      if (lookahead == 'm') ADVANCE(11);
      END_STATE();
    case 14:
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 15:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 16:
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 17:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 18:
      if (lookahead == 'u') ADVANCE(12);
      END_STATE();
    case 19:
      if (lookahead == 'u') ADVANCE(13);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 21:
      if (eof) ADVANCE(22);
      if (lookahead == ' ') ADVANCE(26);
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '$') ADVANCE(20);
      if (lookahead == ')') ADVANCE(35);
      if (lookahead == '@') ADVANCE(9);
      if (lookahead == '[') ADVANCE(29);
      if (lookahead == '{') ADVANCE(27);
      if (lookahead == '}') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(21)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_ATstartuml);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_ATenduml);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_link_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_link_token1);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_single_quote_string);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_unqouted_string);
      if (lookahead == '\n') ADVANCE(40);
      if (lookahead == '[') ADVANCE(2);
      if (lookahead == '$' ||
          lookahead == ']') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') ADVANCE(40);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_unqouted_string);
      if (lookahead == '\n') ADVANCE(41);
      if (lookahead == ',') ADVANCE(40);
      if (lookahead == '[') ADVANCE(2);
      if (lookahead == '$' ||
          lookahead == ']') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_unqouted_string);
      if (lookahead == '\n') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == ',' ||
          lookahead == ']') ADVANCE(42);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_unqouted_string);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == ',' ||
          lookahead == ']') ADVANCE(43);
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
      if (lookahead == 'i') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'n') ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == 'c') ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == 'l') ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == 'u') ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == 'd') ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 21},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 21},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 21},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 30},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 21},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_ATstartuml] = ACTIONS(1),
    [anon_sym_ATenduml] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_single_quote_string] = ACTIONS(1),
  },
  [1] = {
    [sym_diagram] = STATE(28),
    [sym__startend] = STATE(6),
    [sym_preprocessor] = STATE(6),
    [sym_procedure] = STATE(6),
    [aux_sym_diagram_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [anon_sym_ATstartuml] = ACTIONS(7),
    [anon_sym_ATenduml] = ACTIONS(7),
    [anon_sym_BANG] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      anon_sym_,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    STATE(11), 2,
      sym_block,
      sym_link,
    ACTIONS(13), 5,
      anon_sym_ATstartuml,
      anon_sym_ATenduml,
      anon_sym_BANG,
      anon_sym_RBRACE,
      sym_identifier,
  [24] = 4,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    STATE(13), 2,
      sym_block,
      sym_link,
    ACTIONS(21), 6,
      ts_builtin_sym_end,
      anon_sym_ATstartuml,
      anon_sym_ATenduml,
      anon_sym_BANG,
      anon_sym_RBRACE,
      sym_identifier,
  [43] = 5,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_BANG,
    ACTIONS(32), 2,
      anon_sym_ATstartuml,
      anon_sym_ATenduml,
    STATE(4), 4,
      sym__startend,
      sym_preprocessor,
      sym_procedure,
      aux_sym_diagram_repeat1,
  [63] = 2,
    ACTIONS(38), 2,
      ts_builtin_sym_end,
      anon_sym_,
    ACTIONS(40), 7,
      anon_sym_ATstartuml,
      anon_sym_ATenduml,
      anon_sym_BANG,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_identifier,
  [77] = 5,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_BANG,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    ACTIONS(44), 2,
      anon_sym_ATstartuml,
      anon_sym_ATenduml,
    STATE(4), 4,
      sym__startend,
      sym_preprocessor,
      sym_procedure,
      aux_sym_diagram_repeat1,
  [97] = 1,
    ACTIONS(46), 6,
      ts_builtin_sym_end,
      anon_sym_ATstartuml,
      anon_sym_ATenduml,
      anon_sym_BANG,
      anon_sym_RBRACE,
      sym_identifier,
  [106] = 1,
    ACTIONS(48), 6,
      ts_builtin_sym_end,
      anon_sym_ATstartuml,
      anon_sym_ATenduml,
      anon_sym_BANG,
      anon_sym_RBRACE,
      sym_identifier,
  [115] = 5,
    ACTIONS(50), 1,
      sym_identifier,
    ACTIONS(52), 1,
      anon_sym_RPAREN,
    ACTIONS(54), 1,
      sym_string,
    STATE(12), 1,
      aux_sym_argument_list_repeat1,
    STATE(18), 2,
      sym__expression,
      sym_named_parameter,
  [132] = 1,
    ACTIONS(56), 6,
      ts_builtin_sym_end,
      anon_sym_ATstartuml,
      anon_sym_ATenduml,
      anon_sym_BANG,
      anon_sym_RBRACE,
      sym_identifier,
  [141] = 1,
    ACTIONS(21), 6,
      ts_builtin_sym_end,
      anon_sym_ATstartuml,
      anon_sym_ATenduml,
      anon_sym_BANG,
      anon_sym_RBRACE,
      sym_identifier,
  [150] = 5,
    ACTIONS(58), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_RPAREN,
    ACTIONS(63), 1,
      sym_string,
    STATE(12), 1,
      aux_sym_argument_list_repeat1,
    STATE(18), 2,
      sym__expression,
      sym_named_parameter,
  [167] = 1,
    ACTIONS(66), 6,
      ts_builtin_sym_end,
      anon_sym_ATstartuml,
      anon_sym_ATenduml,
      anon_sym_BANG,
      anon_sym_RBRACE,
      sym_identifier,
  [176] = 4,
    ACTIONS(50), 1,
      sym_identifier,
    ACTIONS(54), 1,
      sym_string,
    STATE(9), 1,
      aux_sym_argument_list_repeat1,
    STATE(18), 2,
      sym__expression,
      sym_named_parameter,
  [190] = 2,
    ACTIONS(70), 1,
      anon_sym_EQ,
    ACTIONS(68), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_identifier,
      sym_string,
  [200] = 1,
    ACTIONS(72), 5,
      ts_builtin_sym_end,
      anon_sym_ATstartuml,
      anon_sym_ATenduml,
      anon_sym_BANG,
      sym_identifier,
  [208] = 3,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(74), 1,
      anon_sym_RBRACE,
    STATE(19), 2,
      sym_procedure,
      aux_sym_block_repeat1,
  [219] = 2,
    ACTIONS(78), 1,
      anon_sym_COMMA,
    ACTIONS(76), 3,
      anon_sym_RPAREN,
      sym_identifier,
      sym_string,
  [228] = 3,
    ACTIONS(80), 1,
      sym_identifier,
    ACTIONS(83), 1,
      anon_sym_RBRACE,
    STATE(19), 2,
      sym_procedure,
      aux_sym_block_repeat1,
  [239] = 3,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_RBRACE,
    STATE(17), 2,
      sym_procedure,
      aux_sym_block_repeat1,
  [250] = 2,
    ACTIONS(89), 1,
      anon_sym_,
    ACTIONS(87), 3,
      anon_sym_RPAREN,
      sym_identifier,
      sym_string,
  [259] = 1,
    ACTIONS(91), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_identifier,
      sym_string,
  [266] = 1,
    ACTIONS(93), 3,
      anon_sym_RPAREN,
      sym_identifier,
      sym_string,
  [272] = 1,
    ACTIONS(95), 2,
      anon_sym_include,
      sym_identifier,
  [277] = 2,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    STATE(2), 1,
      sym_argument_list,
  [284] = 1,
    ACTIONS(99), 1,
      aux_sym_link_token1,
  [288] = 1,
    ACTIONS(101), 1,
      sym_unqouted_string,
  [292] = 1,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
  [296] = 1,
    ACTIONS(105), 1,
      sym_string,
  [300] = 1,
    ACTIONS(107), 1,
      anon_sym_LBRACK,
  [304] = 1,
    ACTIONS(109), 1,
      anon_sym_RBRACK,
  [308] = 1,
    ACTIONS(111), 1,
      anon_sym_RBRACK,
  [312] = 1,
    ACTIONS(113), 1,
      anon_sym_,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 24,
  [SMALL_STATE(4)] = 43,
  [SMALL_STATE(5)] = 63,
  [SMALL_STATE(6)] = 77,
  [SMALL_STATE(7)] = 97,
  [SMALL_STATE(8)] = 106,
  [SMALL_STATE(9)] = 115,
  [SMALL_STATE(10)] = 132,
  [SMALL_STATE(11)] = 141,
  [SMALL_STATE(12)] = 150,
  [SMALL_STATE(13)] = 167,
  [SMALL_STATE(14)] = 176,
  [SMALL_STATE(15)] = 190,
  [SMALL_STATE(16)] = 200,
  [SMALL_STATE(17)] = 208,
  [SMALL_STATE(18)] = 219,
  [SMALL_STATE(19)] = 228,
  [SMALL_STATE(20)] = 239,
  [SMALL_STATE(21)] = 250,
  [SMALL_STATE(22)] = 259,
  [SMALL_STATE(23)] = 266,
  [SMALL_STATE(24)] = 272,
  [SMALL_STATE(25)] = 277,
  [SMALL_STATE(26)] = 284,
  [SMALL_STATE(27)] = 288,
  [SMALL_STATE(28)] = 292,
  [SMALL_STATE(29)] = 296,
  [SMALL_STATE(30)] = 300,
  [SMALL_STATE(31)] = 304,
  [SMALL_STATE(32)] = 308,
  [SMALL_STATE(33)] = 312,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure, 2, .production_id = 1),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure, 2, .production_id = 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure, 3, .production_id = 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_repeat1, 2), SHIFT_REPEAT(25),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_repeat1, 2), SHIFT_REPEAT(4),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_repeat1, 2), SHIFT_REPEAT(24),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram, 1),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 5),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(15),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(18),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure, 4, .production_id = 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preprocessor, 4, .production_id = 2),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 1),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(25),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_parameter, 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 3),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [103] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
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
