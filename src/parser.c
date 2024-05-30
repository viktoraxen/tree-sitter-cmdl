#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 111
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 42
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 8

enum ts_symbol_identifiers {
  anon_sym_component = 1,
  anon_sym_LPAREN = 2,
  anon_sym_RPAREN = 3,
  anon_sym_EQ_GT = 4,
  anon_sym_end = 5,
  anon_sym_signal = 6,
  anon_sym_LT_EQ = 7,
  anon_sym_COMMA = 8,
  anon_sym_not = 9,
  anon_sym_and = 10,
  anon_sym_or = 11,
  sym_identifier = 12,
  sym_number = 13,
  sym_source_file = 14,
  aux_sym__statements = 15,
  sym__statement = 16,
  sym_component = 17,
  sym_component_inputs = 18,
  sym_component_outputs = 19,
  sym_component_body = 20,
  sym_declaration = 21,
  sym__declaration_left = 22,
  sym__declaration_right = 23,
  sym_declaration_left_list = 24,
  sym_declaration_right_list = 25,
  sym_assignment = 26,
  sym__assignment_left = 27,
  sym__assignment_right = 28,
  sym_assignment_left_list = 29,
  sym_assignment_right_list = 30,
  sym__expression = 31,
  sym__expression_primary = 32,
  sym_expression_component = 33,
  sym__expression_component_input = 34,
  sym_expression_component_input_list = 35,
  sym_expression_unary = 36,
  sym_expression_binary = 37,
  sym__atomic = 38,
  sym__identifiers = 39,
  aux_sym_declaration_left_list_repeat1 = 40,
  aux_sym_declaration_right_list_repeat1 = 41,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_component] = "component",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_end] = "end",
  [anon_sym_signal] = "signal",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_COMMA] = ",",
  [anon_sym_not] = "not",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [sym_source_file] = "source_file",
  [aux_sym__statements] = "_statements",
  [sym__statement] = "_statement",
  [sym_component] = "component",
  [sym_component_inputs] = "component_inputs",
  [sym_component_outputs] = "component_outputs",
  [sym_component_body] = "component_body",
  [sym_declaration] = "declaration",
  [sym__declaration_left] = "_declaration_left",
  [sym__declaration_right] = "_declaration_right",
  [sym_declaration_left_list] = "declaration_left_list",
  [sym_declaration_right_list] = "declaration_right_list",
  [sym_assignment] = "assignment",
  [sym__assignment_left] = "_assignment_left",
  [sym__assignment_right] = "_assignment_right",
  [sym_assignment_left_list] = "assignment_left_list",
  [sym_assignment_right_list] = "assignment_right_list",
  [sym__expression] = "_expression",
  [sym__expression_primary] = "_expression_primary",
  [sym_expression_component] = "expression_component",
  [sym__expression_component_input] = "_expression_component_input",
  [sym_expression_component_input_list] = "expression_component_input_list",
  [sym_expression_unary] = "expression_unary",
  [sym_expression_binary] = "expression_binary",
  [sym__atomic] = "_atomic",
  [sym__identifiers] = "_identifiers",
  [aux_sym_declaration_left_list_repeat1] = "declaration_left_list_repeat1",
  [aux_sym_declaration_right_list_repeat1] = "declaration_right_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_component] = anon_sym_component,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_signal] = anon_sym_signal,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_or] = anon_sym_or,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [sym_source_file] = sym_source_file,
  [aux_sym__statements] = aux_sym__statements,
  [sym__statement] = sym__statement,
  [sym_component] = sym_component,
  [sym_component_inputs] = sym_component_inputs,
  [sym_component_outputs] = sym_component_outputs,
  [sym_component_body] = sym_component_body,
  [sym_declaration] = sym_declaration,
  [sym__declaration_left] = sym__declaration_left,
  [sym__declaration_right] = sym__declaration_right,
  [sym_declaration_left_list] = sym_declaration_left_list,
  [sym_declaration_right_list] = sym_declaration_right_list,
  [sym_assignment] = sym_assignment,
  [sym__assignment_left] = sym__assignment_left,
  [sym__assignment_right] = sym__assignment_right,
  [sym_assignment_left_list] = sym_assignment_left_list,
  [sym_assignment_right_list] = sym_assignment_right_list,
  [sym__expression] = sym__expression,
  [sym__expression_primary] = sym__expression_primary,
  [sym_expression_component] = sym_expression_component,
  [sym__expression_component_input] = sym__expression_component_input,
  [sym_expression_component_input_list] = sym_expression_component_input_list,
  [sym_expression_unary] = sym_expression_unary,
  [sym_expression_binary] = sym_expression_binary,
  [sym__atomic] = sym__atomic,
  [sym__identifiers] = sym__identifiers,
  [aux_sym_declaration_left_list_repeat1] = aux_sym_declaration_left_list_repeat1,
  [aux_sym_declaration_right_list_repeat1] = aux_sym_declaration_right_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_component] = {
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
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_signal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__statements] = {
    .visible = false,
    .named = false,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_component] = {
    .visible = true,
    .named = true,
  },
  [sym_component_inputs] = {
    .visible = true,
    .named = true,
  },
  [sym_component_outputs] = {
    .visible = true,
    .named = true,
  },
  [sym_component_body] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__declaration_left] = {
    .visible = false,
    .named = true,
  },
  [sym__declaration_right] = {
    .visible = false,
    .named = true,
  },
  [sym_declaration_left_list] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration_right_list] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym__assignment_left] = {
    .visible = false,
    .named = true,
  },
  [sym__assignment_right] = {
    .visible = false,
    .named = true,
  },
  [sym_assignment_left_list] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment_right_list] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym__expression_primary] = {
    .visible = false,
    .named = true,
  },
  [sym_expression_component] = {
    .visible = true,
    .named = true,
  },
  [sym__expression_component_input] = {
    .visible = false,
    .named = true,
  },
  [sym_expression_component_input_list] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_unary] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_binary] = {
    .visible = true,
    .named = true,
  },
  [sym__atomic] = {
    .visible = false,
    .named = true,
  },
  [sym__identifiers] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_declaration_left_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_declaration_right_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_body = 1,
  field_inputs = 2,
  field_left = 3,
  field_name = 4,
  field_operand = 5,
  field_outputs = 6,
  field_right = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_inputs] = "inputs",
  [field_left] = "left",
  [field_name] = "name",
  [field_operand] = "operand",
  [field_outputs] = "outputs",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 1},
  [5] = {.index = 6, .length = 2},
  [6] = {.index = 8, .length = 3},
  [7] = {.index = 11, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_left, 1},
  [1] =
    {field_left, 0},
    {field_right, 2},
  [3] =
    {field_left, 1},
    {field_right, 3},
  [5] =
    {field_operand, 1},
  [6] =
    {field_inputs, 2},
    {field_name, 0},
  [8] =
    {field_inputs, 3},
    {field_name, 1},
    {field_outputs, 6},
  [11] =
    {field_body, 7},
    {field_inputs, 3},
    {field_name, 1},
    {field_outputs, 6},
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
  [5] = 3,
  [6] = 2,
  [7] = 3,
  [8] = 8,
  [9] = 4,
  [10] = 8,
  [11] = 11,
  [12] = 12,
  [13] = 12,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 18,
  [20] = 15,
  [21] = 16,
  [22] = 15,
  [23] = 17,
  [24] = 18,
  [25] = 16,
  [26] = 17,
  [27] = 27,
  [28] = 28,
  [29] = 27,
  [30] = 30,
  [31] = 28,
  [32] = 30,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 37,
  [41] = 39,
  [42] = 42,
  [43] = 34,
  [44] = 36,
  [45] = 38,
  [46] = 46,
  [47] = 35,
  [48] = 42,
  [49] = 33,
  [50] = 50,
  [51] = 51,
  [52] = 51,
  [53] = 53,
  [54] = 50,
  [55] = 55,
  [56] = 56,
  [57] = 53,
  [58] = 46,
  [59] = 59,
  [60] = 60,
  [61] = 59,
  [62] = 28,
  [63] = 63,
  [64] = 37,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 63,
  [70] = 39,
  [71] = 42,
  [72] = 34,
  [73] = 68,
  [74] = 35,
  [75] = 65,
  [76] = 67,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 79,
  [81] = 56,
  [82] = 82,
  [83] = 77,
  [84] = 50,
  [85] = 77,
  [86] = 86,
  [87] = 87,
  [88] = 55,
  [89] = 86,
  [90] = 78,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 93,
  [99] = 94,
  [100] = 100,
  [101] = 100,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 94,
  [106] = 104,
  [107] = 103,
  [108] = 96,
  [109] = 97,
  [110] = 95,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(15);
      ADVANCE_MAP(
        '(', 17,
        ')', 18,
        ',', 24,
        '<', 5,
        '=', 6,
        'a', 38,
        'c', 43,
        'e', 41,
        'n', 44,
        'o', 47,
        's', 35,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 1:
      if (lookahead == '(') ADVANCE(17);
      if (lookahead == ')') ADVANCE(18);
      if (lookahead == ',') ADVANCE(24);
      if (lookahead == 'a') ADVANCE(9);
      if (lookahead == 'e') ADVANCE(10);
      if (lookahead == 'o') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 2:
      if (lookahead == '(') ADVANCE(17);
      if (lookahead == ',') ADVANCE(24);
      if (lookahead == 'a') ADVANCE(38);
      if (lookahead == 'c') ADVANCE(43);
      if (lookahead == 'e') ADVANCE(41);
      if (lookahead == 'o') ADVANCE(47);
      if (lookahead == 's') ADVANCE(35);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(17);
      if (lookahead == 'n') ADVANCE(44);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 4:
      if (lookahead == ',') ADVANCE(24);
      if (lookahead == '<') ADVANCE(5);
      if (lookahead == 'c') ADVANCE(43);
      if (lookahead == 'e') ADVANCE(41);
      if (lookahead == 's') ADVANCE(35);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(23);
      END_STATE();
    case 6:
      if (lookahead == '>') ADVANCE(19);
      END_STATE();
    case 7:
      if (lookahead == 'd') ADVANCE(26);
      END_STATE();
    case 8:
      if (lookahead == 'd') ADVANCE(20);
      END_STATE();
    case 9:
      if (lookahead == 'n') ADVANCE(7);
      END_STATE();
    case 10:
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 11:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 12:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 13:
      if (eof) ADVANCE(15);
      if (lookahead == '(') ADVANCE(17);
      if (lookahead == ',') ADVANCE(24);
      if (lookahead == 'a') ADVANCE(38);
      if (lookahead == 'c') ADVANCE(43);
      if (lookahead == 'o') ADVANCE(47);
      if (lookahead == 's') ADVANCE(35);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 14:
      if (eof) ADVANCE(15);
      if (lookahead == ')') ADVANCE(18);
      if (lookahead == ',') ADVANCE(24);
      if (lookahead == '<') ADVANCE(5);
      if (lookahead == 'c') ADVANCE(43);
      if (lookahead == 's') ADVANCE(35);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_component);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_end);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_signal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_not);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_and);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_or);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 14},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 14},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 14},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 13},
  [30] = {.lex_state = 13},
  [31] = {.lex_state = 13},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 14},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 13},
  [36] = {.lex_state = 14},
  [37] = {.lex_state = 13},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 13},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 13},
  [43] = {.lex_state = 13},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 14},
  [46] = {.lex_state = 14},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 14},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 14},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 14},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 14},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 14},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 14},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 14},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 14},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 12},
  [79] = {.lex_state = 12},
  [80] = {.lex_state = 12},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 12},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 12},
  [90] = {.lex_state = 12},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 12},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 12},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 12},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 12},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_component] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_signal] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(102),
    [aux_sym__statements] = STATE(14),
    [sym__statement] = STATE(14),
    [sym_component] = STATE(14),
    [sym_declaration] = STATE(14),
    [sym_assignment] = STATE(14),
    [sym__assignment_left] = STATE(101),
    [sym_assignment_left_list] = STATE(101),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_component] = ACTIONS(5),
    [anon_sym_signal] = ACTIONS(7),
    [sym_identifier] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_not,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      sym_number,
    STATE(67), 2,
      sym__assignment_right,
      sym_assignment_right_list,
    STATE(30), 6,
      sym__expression,
      sym__expression_primary,
      sym_expression_component,
      sym_expression_unary,
      sym_expression_binary,
      sym__atomic,
  [25] = 6,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_not,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      sym_number,
    STATE(99), 2,
      sym__expression_component_input,
      sym_expression_component_input_list,
    STATE(60), 6,
      sym__expression,
      sym__expression_primary,
      sym_expression_component,
      sym_expression_unary,
      sym_expression_binary,
      sym__atomic,
  [50] = 7,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(27), 1,
      anon_sym_component,
    ACTIONS(29), 1,
      anon_sym_end,
    ACTIONS(31), 1,
      anon_sym_signal,
    STATE(108), 1,
      sym_component_body,
    STATE(100), 2,
      sym__assignment_left,
      sym_assignment_left_list,
    STATE(11), 5,
      aux_sym__statements,
      sym__statement,
      sym_component,
      sym_declaration,
      sym_assignment,
  [77] = 6,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_not,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      sym_number,
    STATE(94), 2,
      sym__expression_component_input,
      sym_expression_component_input_list,
    STATE(60), 6,
      sym__expression,
      sym__expression_primary,
      sym_expression_component,
      sym_expression_unary,
      sym_expression_binary,
      sym__atomic,
  [102] = 6,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      sym_number,
    STATE(76), 2,
      sym__assignment_right,
      sym_assignment_right_list,
    STATE(32), 6,
      sym__expression,
      sym__expression_primary,
      sym_expression_component,
      sym_expression_unary,
      sym_expression_binary,
      sym__atomic,
  [127] = 6,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_not,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      sym_number,
    STATE(105), 2,
      sym__expression_component_input,
      sym_expression_component_input_list,
    STATE(60), 6,
      sym__expression,
      sym__expression_primary,
      sym_expression_component,
      sym_expression_unary,
      sym_expression_binary,
      sym__atomic,
  [152] = 6,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_not,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(41), 1,
      sym_number,
    STATE(73), 2,
      sym__declaration_right,
      sym_declaration_right_list,
    STATE(29), 6,
      sym__expression,
      sym__expression_primary,
      sym_expression_component,
      sym_expression_unary,
      sym_expression_binary,
      sym__atomic,
  [177] = 7,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(27), 1,
      anon_sym_component,
    ACTIONS(31), 1,
      anon_sym_signal,
    ACTIONS(43), 1,
      anon_sym_end,
    STATE(96), 1,
      sym_component_body,
    STATE(100), 2,
      sym__assignment_left,
      sym_assignment_left_list,
    STATE(11), 5,
      aux_sym__statements,
      sym__statement,
      sym_component,
      sym_declaration,
      sym_assignment,
  [204] = 6,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(45), 1,
      sym_number,
    STATE(68), 2,
      sym__declaration_right,
      sym_declaration_right_list,
    STATE(27), 6,
      sym__expression,
      sym__expression_primary,
      sym_expression_component,
      sym_expression_unary,
      sym_expression_binary,
      sym__atomic,
  [229] = 6,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(27), 1,
      anon_sym_component,
    ACTIONS(31), 1,
      anon_sym_signal,
    ACTIONS(47), 1,
      anon_sym_end,
    STATE(100), 2,
      sym__assignment_left,
      sym_assignment_left_list,
    STATE(13), 5,
      aux_sym__statements,
      sym__statement,
      sym_component,
      sym_declaration,
      sym_assignment,
  [253] = 6,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      anon_sym_component,
    ACTIONS(54), 1,
      anon_sym_signal,
    ACTIONS(57), 1,
      sym_identifier,
    STATE(101), 2,
      sym__assignment_left,
      sym_assignment_left_list,
    STATE(12), 5,
      aux_sym__statements,
      sym__statement,
      sym_component,
      sym_declaration,
      sym_assignment,
  [277] = 6,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(60), 1,
      anon_sym_component,
    ACTIONS(63), 1,
      anon_sym_end,
    ACTIONS(65), 1,
      anon_sym_signal,
    STATE(100), 2,
      sym__assignment_left,
      sym_assignment_left_list,
    STATE(13), 5,
      aux_sym__statements,
      sym__statement,
      sym_component,
      sym_declaration,
      sym_assignment,
  [301] = 6,
    ACTIONS(5), 1,
      anon_sym_component,
    ACTIONS(7), 1,
      anon_sym_signal,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(68), 1,
      ts_builtin_sym_end,
    STATE(101), 2,
      sym__assignment_left,
      sym_assignment_left_list,
    STATE(12), 5,
      aux_sym__statements,
      sym__statement,
      sym_component,
      sym_declaration,
      sym_assignment,
  [325] = 5,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_not,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(70), 1,
      sym_number,
    STATE(64), 6,
      sym__expression,
      sym__expression_primary,
      sym_expression_component,
      sym_expression_unary,
      sym_expression_binary,
      sym__atomic,
  [346] = 5,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_not,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(72), 1,
      sym_number,
    STATE(85), 6,
      sym__expression,
      sym__expression_primary,
      sym_expression_component,
      sym_expression_unary,
      sym_expression_binary,
      sym__atomic,
  [367] = 5,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_not,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(74), 1,
      sym_number,
    STATE(42), 6,
      sym__expression,
      sym__expression_primary,
      sym_expression_component,
      sym_expression_unary,
      sym_expression_binary,
      sym__atomic,
  [388] = 5,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_not,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(76), 1,
      sym_number,
    STATE(43), 6,
      sym__expression,
      sym__expression_primary,
      sym_expression_component,
      sym_expression_unary,
      sym_expression_binary,
      sym__atomic,
  [409] = 5,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(78), 1,
      sym_number,
    STATE(34), 6,
      sym__expression,
      sym__expression_primary,
      sym_expression_component,
      sym_expression_unary,
      sym_expression_binary,
      sym__atomic,
  [430] = 5,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(80), 1,
      sym_number,
    STATE(40), 6,
      sym__expression,
      sym__expression_primary,
      sym_expression_component,
      sym_expression_unary,
      sym_expression_binary,
      sym__atomic,
  [451] = 5,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_not,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(82), 1,
      sym_number,
    STATE(77), 6,
      sym__expression,
      sym__expression_primary,
      sym_expression_component,
      sym_expression_unary,
      sym_expression_binary,
      sym__atomic,
  [472] = 5,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_not,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(84), 1,
      sym_number,
    STATE(37), 6,
      sym__expression,
      sym__expression_primary,
      sym_expression_component,
      sym_expression_unary,
      sym_expression_binary,
      sym__atomic,
  [493] = 5,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_not,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(86), 1,
      sym_number,
    STATE(71), 6,
      sym__expression,
      sym__expression_primary,
      sym_expression_component,
      sym_expression_unary,
      sym_expression_binary,
      sym__atomic,
  [514] = 5,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_not,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(88), 1,
      sym_number,
    STATE(72), 6,
      sym__expression,
      sym__expression_primary,
      sym_expression_component,
      sym_expression_unary,
      sym_expression_binary,
      sym__atomic,
  [535] = 5,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_not,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(90), 1,
      sym_number,
    STATE(83), 6,
      sym__expression,
      sym__expression_primary,
      sym_expression_component,
      sym_expression_unary,
      sym_expression_binary,
      sym__atomic,
  [556] = 5,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(92), 1,
      sym_number,
    STATE(48), 6,
      sym__expression,
      sym__expression_primary,
      sym_expression_component,
      sym_expression_unary,
      sym_expression_binary,
      sym__atomic,
  [577] = 4,
    ACTIONS(96), 1,
      anon_sym_COMMA,
    STATE(53), 1,
      aux_sym_declaration_right_list_repeat1,
    ACTIONS(98), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(94), 4,
      anon_sym_component,
      anon_sym_end,
      anon_sym_signal,
      sym_identifier,
  [594] = 3,
    ACTIONS(102), 1,
      anon_sym_LPAREN,
    ACTIONS(104), 1,
      anon_sym_COMMA,
    ACTIONS(100), 6,
      anon_sym_component,
      anon_sym_end,
      anon_sym_signal,
      anon_sym_and,
      anon_sym_or,
      sym_identifier,
  [609] = 5,
    ACTIONS(106), 1,
      ts_builtin_sym_end,
    ACTIONS(108), 1,
      anon_sym_COMMA,
    STATE(57), 1,
      aux_sym_declaration_right_list_repeat1,
    ACTIONS(110), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(94), 3,
      anon_sym_component,
      anon_sym_signal,
      sym_identifier,
  [628] = 5,
    ACTIONS(108), 1,
      anon_sym_COMMA,
    ACTIONS(112), 1,
      ts_builtin_sym_end,
    STATE(51), 1,
      aux_sym_declaration_right_list_repeat1,
    ACTIONS(110), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(114), 3,
      anon_sym_component,
      anon_sym_signal,
      sym_identifier,
  [647] = 3,
    ACTIONS(116), 1,
      anon_sym_LPAREN,
    ACTIONS(104), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
    ACTIONS(100), 5,
      anon_sym_component,
      anon_sym_signal,
      anon_sym_and,
      anon_sym_or,
      sym_identifier,
  [662] = 4,
    ACTIONS(96), 1,
      anon_sym_COMMA,
    STATE(52), 1,
      aux_sym_declaration_right_list_repeat1,
    ACTIONS(98), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(114), 4,
      anon_sym_component,
      anon_sym_end,
      anon_sym_signal,
      sym_identifier,
  [679] = 4,
    ACTIONS(122), 1,
      anon_sym_COMMA,
    STATE(33), 1,
      aux_sym_declaration_left_list_repeat1,
    ACTIONS(118), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LT_EQ,
    ACTIONS(120), 3,
      anon_sym_component,
      anon_sym_signal,
      sym_identifier,
  [696] = 2,
    ACTIONS(127), 1,
      anon_sym_COMMA,
    ACTIONS(125), 6,
      anon_sym_component,
      anon_sym_end,
      anon_sym_signal,
      anon_sym_and,
      anon_sym_or,
      sym_identifier,
  [708] = 2,
    ACTIONS(129), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
    ACTIONS(131), 5,
      anon_sym_component,
      anon_sym_signal,
      anon_sym_and,
      anon_sym_or,
      sym_identifier,
  [720] = 4,
    ACTIONS(137), 1,
      anon_sym_COMMA,
    STATE(45), 1,
      aux_sym_declaration_left_list_repeat1,
    ACTIONS(133), 2,
      ts_builtin_sym_end,
      anon_sym_LT_EQ,
    ACTIONS(135), 3,
      anon_sym_component,
      anon_sym_signal,
      sym_identifier,
  [736] = 2,
    ACTIONS(139), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
    ACTIONS(141), 5,
      anon_sym_component,
      anon_sym_signal,
      anon_sym_and,
      anon_sym_or,
      sym_identifier,
  [748] = 4,
    ACTIONS(145), 1,
      anon_sym_LT_EQ,
    ACTIONS(147), 1,
      anon_sym_COMMA,
    STATE(49), 1,
      aux_sym_declaration_left_list_repeat1,
    ACTIONS(143), 4,
      anon_sym_component,
      anon_sym_end,
      anon_sym_signal,
      sym_identifier,
  [764] = 2,
    ACTIONS(149), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
    ACTIONS(151), 5,
      anon_sym_component,
      anon_sym_signal,
      anon_sym_and,
      anon_sym_or,
      sym_identifier,
  [776] = 2,
    ACTIONS(139), 1,
      anon_sym_COMMA,
    ACTIONS(141), 6,
      anon_sym_component,
      anon_sym_end,
      anon_sym_signal,
      anon_sym_and,
      anon_sym_or,
      sym_identifier,
  [788] = 2,
    ACTIONS(149), 1,
      anon_sym_COMMA,
    ACTIONS(151), 6,
      anon_sym_component,
      anon_sym_end,
      anon_sym_signal,
      anon_sym_and,
      anon_sym_or,
      sym_identifier,
  [800] = 3,
    ACTIONS(110), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(153), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
    ACTIONS(155), 3,
      anon_sym_component,
      anon_sym_signal,
      sym_identifier,
  [814] = 2,
    ACTIONS(127), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
    ACTIONS(125), 5,
      anon_sym_component,
      anon_sym_signal,
      anon_sym_and,
      anon_sym_or,
      sym_identifier,
  [826] = 4,
    ACTIONS(133), 1,
      anon_sym_LT_EQ,
    ACTIONS(147), 1,
      anon_sym_COMMA,
    STATE(38), 1,
      aux_sym_declaration_left_list_repeat1,
    ACTIONS(135), 4,
      anon_sym_component,
      anon_sym_end,
      anon_sym_signal,
      sym_identifier,
  [842] = 4,
    ACTIONS(137), 1,
      anon_sym_COMMA,
    STATE(33), 1,
      aux_sym_declaration_left_list_repeat1,
    ACTIONS(145), 2,
      ts_builtin_sym_end,
      anon_sym_LT_EQ,
    ACTIONS(143), 3,
      anon_sym_component,
      anon_sym_signal,
      sym_identifier,
  [858] = 2,
    ACTIONS(120), 3,
      anon_sym_component,
      anon_sym_signal,
      sym_identifier,
    ACTIONS(118), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LT_EQ,
      anon_sym_COMMA,
  [870] = 2,
    ACTIONS(129), 1,
      anon_sym_COMMA,
    ACTIONS(131), 6,
      anon_sym_component,
      anon_sym_end,
      anon_sym_signal,
      anon_sym_and,
      anon_sym_or,
      sym_identifier,
  [882] = 3,
    ACTIONS(153), 1,
      anon_sym_COMMA,
    ACTIONS(98), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(155), 4,
      anon_sym_component,
      anon_sym_end,
      anon_sym_signal,
      sym_identifier,
  [896] = 4,
    ACTIONS(118), 1,
      anon_sym_LT_EQ,
    ACTIONS(157), 1,
      anon_sym_COMMA,
    STATE(49), 1,
      aux_sym_declaration_left_list_repeat1,
    ACTIONS(120), 4,
      anon_sym_component,
      anon_sym_end,
      anon_sym_signal,
      sym_identifier,
  [912] = 3,
    ACTIONS(160), 1,
      anon_sym_COMMA,
    STATE(50), 1,
      aux_sym_declaration_right_list_repeat1,
    ACTIONS(155), 4,
      anon_sym_component,
      anon_sym_end,
      anon_sym_signal,
      sym_identifier,
  [925] = 4,
    ACTIONS(108), 1,
      anon_sym_COMMA,
    ACTIONS(163), 1,
      ts_builtin_sym_end,
    STATE(54), 1,
      aux_sym_declaration_right_list_repeat1,
    ACTIONS(165), 3,
      anon_sym_component,
      anon_sym_signal,
      sym_identifier,
  [940] = 3,
    ACTIONS(96), 1,
      anon_sym_COMMA,
    STATE(50), 1,
      aux_sym_declaration_right_list_repeat1,
    ACTIONS(165), 4,
      anon_sym_component,
      anon_sym_end,
      anon_sym_signal,
      sym_identifier,
  [953] = 3,
    ACTIONS(96), 1,
      anon_sym_COMMA,
    STATE(50), 1,
      aux_sym_declaration_right_list_repeat1,
    ACTIONS(167), 4,
      anon_sym_component,
      anon_sym_end,
      anon_sym_signal,
      sym_identifier,
  [966] = 4,
    ACTIONS(153), 1,
      ts_builtin_sym_end,
    ACTIONS(169), 1,
      anon_sym_COMMA,
    STATE(54), 1,
      aux_sym_declaration_right_list_repeat1,
    ACTIONS(155), 3,
      anon_sym_component,
      anon_sym_signal,
      sym_identifier,
  [981] = 3,
    ACTIONS(147), 1,
      anon_sym_COMMA,
    STATE(56), 1,
      aux_sym_declaration_left_list_repeat1,
    ACTIONS(172), 4,
      anon_sym_component,
      anon_sym_end,
      anon_sym_signal,
      sym_identifier,
  [994] = 3,
    ACTIONS(147), 1,
      anon_sym_COMMA,
    STATE(49), 1,
      aux_sym_declaration_left_list_repeat1,
    ACTIONS(174), 4,
      anon_sym_component,
      anon_sym_end,
      anon_sym_signal,
      sym_identifier,
  [1007] = 4,
    ACTIONS(108), 1,
      anon_sym_COMMA,
    ACTIONS(176), 1,
      ts_builtin_sym_end,
    STATE(54), 1,
      aux_sym_declaration_right_list_repeat1,
    ACTIONS(167), 3,
      anon_sym_component,
      anon_sym_signal,
      sym_identifier,
  [1022] = 2,
    ACTIONS(118), 2,
      anon_sym_LT_EQ,
      anon_sym_COMMA,
    ACTIONS(120), 4,
      anon_sym_component,
      anon_sym_end,
      anon_sym_signal,
      sym_identifier,
  [1033] = 2,
    ACTIONS(180), 1,
      anon_sym_LT_EQ,
    ACTIONS(178), 4,
      anon_sym_component,
      anon_sym_end,
      anon_sym_signal,
      sym_identifier,
  [1043] = 4,
    ACTIONS(182), 1,
      anon_sym_RPAREN,
    ACTIONS(184), 1,
      anon_sym_COMMA,
    STATE(87), 1,
      aux_sym_declaration_right_list_repeat1,
    ACTIONS(186), 2,
      anon_sym_and,
      anon_sym_or,
  [1057] = 3,
    ACTIONS(188), 1,
      ts_builtin_sym_end,
    ACTIONS(190), 1,
      anon_sym_LT_EQ,
    ACTIONS(178), 3,
      anon_sym_component,
      anon_sym_signal,
      sym_identifier,
  [1069] = 2,
    ACTIONS(192), 1,
      anon_sym_LPAREN,
    ACTIONS(104), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_and,
      anon_sym_or,
  [1079] = 1,
    ACTIONS(194), 4,
      anon_sym_component,
      anon_sym_end,
      anon_sym_signal,
      sym_identifier,
  [1086] = 1,
    ACTIONS(139), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_and,
      anon_sym_or,
  [1093] = 2,
    ACTIONS(196), 1,
      ts_builtin_sym_end,
    ACTIONS(198), 3,
      anon_sym_component,
      anon_sym_signal,
      sym_identifier,
  [1102] = 1,
    ACTIONS(200), 4,
      anon_sym_component,
      anon_sym_end,
      anon_sym_signal,
      sym_identifier,
  [1109] = 2,
    ACTIONS(202), 1,
      ts_builtin_sym_end,
    ACTIONS(204), 3,
      anon_sym_component,
      anon_sym_signal,
      sym_identifier,
  [1118] = 1,
    ACTIONS(206), 4,
      anon_sym_component,
      anon_sym_end,
      anon_sym_signal,
      sym_identifier,
  [1125] = 2,
    ACTIONS(208), 1,
      ts_builtin_sym_end,
    ACTIONS(194), 3,
      anon_sym_component,
      anon_sym_signal,
      sym_identifier,
  [1134] = 1,
    ACTIONS(149), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_and,
      anon_sym_or,
  [1141] = 2,
    ACTIONS(153), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(186), 2,
      anon_sym_and,
      anon_sym_or,
  [1150] = 1,
    ACTIONS(127), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_and,
      anon_sym_or,
  [1157] = 2,
    ACTIONS(210), 1,
      ts_builtin_sym_end,
    ACTIONS(206), 3,
      anon_sym_component,
      anon_sym_signal,
      sym_identifier,
  [1166] = 1,
    ACTIONS(129), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_and,
      anon_sym_or,
  [1173] = 1,
    ACTIONS(198), 4,
      anon_sym_component,
      anon_sym_end,
      anon_sym_signal,
      sym_identifier,
  [1180] = 1,
    ACTIONS(204), 4,
      anon_sym_component,
      anon_sym_end,
      anon_sym_signal,
      sym_identifier,
  [1187] = 2,
    ACTIONS(212), 1,
      anon_sym_RPAREN,
    ACTIONS(186), 2,
      anon_sym_and,
      anon_sym_or,
  [1195] = 3,
    ACTIONS(214), 1,
      sym_identifier,
    STATE(92), 1,
      sym__identifiers,
    STATE(107), 1,
      sym_component_inputs,
  [1205] = 3,
    ACTIONS(216), 1,
      sym_identifier,
    STATE(4), 1,
      sym_component_outputs,
    STATE(66), 1,
      sym__identifiers,
  [1215] = 3,
    ACTIONS(216), 1,
      sym_identifier,
    STATE(9), 1,
      sym_component_outputs,
    STATE(66), 1,
      sym__identifiers,
  [1225] = 3,
    ACTIONS(137), 1,
      anon_sym_COMMA,
    ACTIONS(218), 1,
      anon_sym_RPAREN,
    STATE(33), 1,
      aux_sym_declaration_left_list_repeat1,
  [1235] = 3,
    ACTIONS(137), 1,
      anon_sym_COMMA,
    ACTIONS(220), 1,
      anon_sym_LT_EQ,
    STATE(91), 1,
      aux_sym_declaration_left_list_repeat1,
  [1245] = 2,
    ACTIONS(222), 1,
      anon_sym_RPAREN,
    ACTIONS(186), 2,
      anon_sym_and,
      anon_sym_or,
  [1253] = 3,
    ACTIONS(153), 1,
      anon_sym_RPAREN,
    ACTIONS(224), 1,
      anon_sym_COMMA,
    STATE(84), 1,
      aux_sym_declaration_right_list_repeat1,
  [1263] = 2,
    ACTIONS(227), 1,
      anon_sym_RPAREN,
    ACTIONS(186), 2,
      anon_sym_and,
      anon_sym_or,
  [1271] = 2,
    ACTIONS(229), 1,
      sym_identifier,
    STATE(59), 2,
      sym__declaration_left,
      sym_declaration_left_list,
  [1279] = 3,
    ACTIONS(184), 1,
      anon_sym_COMMA,
    ACTIONS(231), 1,
      anon_sym_RPAREN,
    STATE(84), 1,
      aux_sym_declaration_right_list_repeat1,
  [1289] = 3,
    ACTIONS(137), 1,
      anon_sym_COMMA,
    ACTIONS(233), 1,
      anon_sym_RPAREN,
    STATE(81), 1,
      aux_sym_declaration_left_list_repeat1,
  [1299] = 2,
    ACTIONS(235), 1,
      sym_identifier,
    STATE(61), 2,
      sym__declaration_left,
      sym_declaration_left_list,
  [1307] = 3,
    ACTIONS(214), 1,
      sym_identifier,
    STATE(92), 1,
      sym__identifiers,
    STATE(103), 1,
      sym_component_inputs,
  [1317] = 3,
    ACTIONS(137), 1,
      anon_sym_COMMA,
    ACTIONS(237), 1,
      anon_sym_LT_EQ,
    STATE(33), 1,
      aux_sym_declaration_left_list_repeat1,
  [1327] = 1,
    ACTIONS(239), 1,
      anon_sym_RPAREN,
  [1331] = 1,
    ACTIONS(241), 1,
      sym_identifier,
  [1335] = 1,
    ACTIONS(243), 1,
      anon_sym_RPAREN,
  [1339] = 1,
    ACTIONS(245), 1,
      sym_identifier,
  [1343] = 1,
    ACTIONS(247), 1,
      anon_sym_end,
  [1347] = 1,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
  [1351] = 1,
    ACTIONS(251), 1,
      sym_identifier,
  [1355] = 1,
    ACTIONS(253), 1,
      anon_sym_RPAREN,
  [1359] = 1,
    ACTIONS(255), 1,
      anon_sym_LT_EQ,
  [1363] = 1,
    ACTIONS(257), 1,
      anon_sym_LT_EQ,
  [1367] = 1,
    ACTIONS(259), 1,
      ts_builtin_sym_end,
  [1371] = 1,
    ACTIONS(261), 1,
      anon_sym_RPAREN,
  [1375] = 1,
    ACTIONS(263), 1,
      anon_sym_EQ_GT,
  [1379] = 1,
    ACTIONS(265), 1,
      anon_sym_RPAREN,
  [1383] = 1,
    ACTIONS(267), 1,
      anon_sym_EQ_GT,
  [1387] = 1,
    ACTIONS(269), 1,
      anon_sym_RPAREN,
  [1391] = 1,
    ACTIONS(271), 1,
      anon_sym_end,
  [1395] = 1,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
  [1399] = 1,
    ACTIONS(275), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 25,
  [SMALL_STATE(4)] = 50,
  [SMALL_STATE(5)] = 77,
  [SMALL_STATE(6)] = 102,
  [SMALL_STATE(7)] = 127,
  [SMALL_STATE(8)] = 152,
  [SMALL_STATE(9)] = 177,
  [SMALL_STATE(10)] = 204,
  [SMALL_STATE(11)] = 229,
  [SMALL_STATE(12)] = 253,
  [SMALL_STATE(13)] = 277,
  [SMALL_STATE(14)] = 301,
  [SMALL_STATE(15)] = 325,
  [SMALL_STATE(16)] = 346,
  [SMALL_STATE(17)] = 367,
  [SMALL_STATE(18)] = 388,
  [SMALL_STATE(19)] = 409,
  [SMALL_STATE(20)] = 430,
  [SMALL_STATE(21)] = 451,
  [SMALL_STATE(22)] = 472,
  [SMALL_STATE(23)] = 493,
  [SMALL_STATE(24)] = 514,
  [SMALL_STATE(25)] = 535,
  [SMALL_STATE(26)] = 556,
  [SMALL_STATE(27)] = 577,
  [SMALL_STATE(28)] = 594,
  [SMALL_STATE(29)] = 609,
  [SMALL_STATE(30)] = 628,
  [SMALL_STATE(31)] = 647,
  [SMALL_STATE(32)] = 662,
  [SMALL_STATE(33)] = 679,
  [SMALL_STATE(34)] = 696,
  [SMALL_STATE(35)] = 708,
  [SMALL_STATE(36)] = 720,
  [SMALL_STATE(37)] = 736,
  [SMALL_STATE(38)] = 748,
  [SMALL_STATE(39)] = 764,
  [SMALL_STATE(40)] = 776,
  [SMALL_STATE(41)] = 788,
  [SMALL_STATE(42)] = 800,
  [SMALL_STATE(43)] = 814,
  [SMALL_STATE(44)] = 826,
  [SMALL_STATE(45)] = 842,
  [SMALL_STATE(46)] = 858,
  [SMALL_STATE(47)] = 870,
  [SMALL_STATE(48)] = 882,
  [SMALL_STATE(49)] = 896,
  [SMALL_STATE(50)] = 912,
  [SMALL_STATE(51)] = 925,
  [SMALL_STATE(52)] = 940,
  [SMALL_STATE(53)] = 953,
  [SMALL_STATE(54)] = 966,
  [SMALL_STATE(55)] = 981,
  [SMALL_STATE(56)] = 994,
  [SMALL_STATE(57)] = 1007,
  [SMALL_STATE(58)] = 1022,
  [SMALL_STATE(59)] = 1033,
  [SMALL_STATE(60)] = 1043,
  [SMALL_STATE(61)] = 1057,
  [SMALL_STATE(62)] = 1069,
  [SMALL_STATE(63)] = 1079,
  [SMALL_STATE(64)] = 1086,
  [SMALL_STATE(65)] = 1093,
  [SMALL_STATE(66)] = 1102,
  [SMALL_STATE(67)] = 1109,
  [SMALL_STATE(68)] = 1118,
  [SMALL_STATE(69)] = 1125,
  [SMALL_STATE(70)] = 1134,
  [SMALL_STATE(71)] = 1141,
  [SMALL_STATE(72)] = 1150,
  [SMALL_STATE(73)] = 1157,
  [SMALL_STATE(74)] = 1166,
  [SMALL_STATE(75)] = 1173,
  [SMALL_STATE(76)] = 1180,
  [SMALL_STATE(77)] = 1187,
  [SMALL_STATE(78)] = 1195,
  [SMALL_STATE(79)] = 1205,
  [SMALL_STATE(80)] = 1215,
  [SMALL_STATE(81)] = 1225,
  [SMALL_STATE(82)] = 1235,
  [SMALL_STATE(83)] = 1245,
  [SMALL_STATE(84)] = 1253,
  [SMALL_STATE(85)] = 1263,
  [SMALL_STATE(86)] = 1271,
  [SMALL_STATE(87)] = 1279,
  [SMALL_STATE(88)] = 1289,
  [SMALL_STATE(89)] = 1299,
  [SMALL_STATE(90)] = 1307,
  [SMALL_STATE(91)] = 1317,
  [SMALL_STATE(92)] = 1327,
  [SMALL_STATE(93)] = 1331,
  [SMALL_STATE(94)] = 1335,
  [SMALL_STATE(95)] = 1339,
  [SMALL_STATE(96)] = 1343,
  [SMALL_STATE(97)] = 1347,
  [SMALL_STATE(98)] = 1351,
  [SMALL_STATE(99)] = 1355,
  [SMALL_STATE(100)] = 1359,
  [SMALL_STATE(101)] = 1363,
  [SMALL_STATE(102)] = 1367,
  [SMALL_STATE(103)] = 1371,
  [SMALL_STATE(104)] = 1375,
  [SMALL_STATE(105)] = 1379,
  [SMALL_STATE(106)] = 1383,
  [SMALL_STATE(107)] = 1387,
  [SMALL_STATE(108)] = 1391,
  [SMALL_STATE(109)] = 1395,
  [SMALL_STATE(110)] = 1399,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_body, 1, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statements, 2, 0, 0),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements, 2, 0, 0), SHIFT_REPEAT(95),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements, 2, 0, 0), SHIFT_REPEAT(89),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements, 2, 0, 0), SHIFT_REPEAT(82),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements, 2, 0, 0), SHIFT_REPEAT(110),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statements, 2, 0, 0),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements, 2, 0, 0), SHIFT_REPEAT(86),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__declaration_right, 1, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__atomic, 1, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atomic, 1, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__declaration_right, 1, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__assignment_right, 1, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__assignment_right, 1, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_left_list_repeat1, 2, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_left_list_repeat1, 2, 0, 0),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_left_list_repeat1, 2, 0, 0), SHIFT_REPEAT(93),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_binary, 3, 0, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_binary, 3, 0, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_component, 4, 0, 5),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_component, 4, 0, 5),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__declaration_left, 1, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__declaration_left, 1, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_unary, 2, 0, 4),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_unary, 2, 0, 4),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration_left_list, 2, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_left_list, 2, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_primary, 3, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_primary, 3, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_right_list_repeat1, 2, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_right_list_repeat1, 2, 0, 0),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_left_list_repeat1, 2, 0, 0), SHIFT_REPEAT(98),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_right_list_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_right_list, 2, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_right_list, 2, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration_right_list, 2, 0, 0),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_right_list_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifiers, 1, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifiers, 2, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_right_list, 2, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 2, 0, 1),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_component_input, 1, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 2, 0, 1),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 9, 0, 7),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 8, 0, 6),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 8, 0, 6),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_outputs, 1, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, 0, 2),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3, 0, 2),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 4, 0, 3),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 9, 0, 7),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 4, 0, 3),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifiers, 2, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__assignment_left, 1, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_right_list_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_component_input_list, 2, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifiers, 1, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_left_list, 2, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_inputs, 1, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [259] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_CMDL(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
