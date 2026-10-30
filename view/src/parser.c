#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 35
#define LARGE_STATE_COUNT 18
#define SYMBOL_COUNT 50
#define ALIAS_COUNT 0
#define TOKEN_COUNT 34
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 7

enum ts_symbol_identifiers {
  anon_sym_LPAREN = 1,
  anon_sym_RPAREN = 2,
  anon_sym_LPAREN2 = 3,
  aux_sym__xharbour_item_token1 = 4,
  sym__xharbour_text = 5,
  anon_sym_DOT = 6,
  anon_sym_STAR = 7,
  sym_table_keyword = 8,
  sym_exec_view_keyword = 9,
  sym_bindvar_keyword = 10,
  sym_xharbour_function = 11,
  sym_keyword = 12,
  sym_identifier = 13,
  sym_table_placeholder = 14,
  sym_bind_reference = 15,
  sym_number = 16,
  sym_string = 17,
  sym_comment = 18,
  anon_sym_EQ = 19,
  anon_sym_LT_GT = 20,
  anon_sym_BANG_EQ = 21,
  anon_sym_LT = 22,
  anon_sym_GT = 23,
  anon_sym_LT_EQ = 24,
  anon_sym_GT_EQ = 25,
  anon_sym_PLUS = 26,
  anon_sym_DASH = 27,
  anon_sym_SLASH = 28,
  anon_sym_PIPE_PIPE = 29,
  anon_sym_PERCENT = 30,
  anon_sym_COMMA = 31,
  anon_sym_SEMI = 32,
  anon_sym_DOT2 = 33,
  sym_source_file = 34,
  sym_table_declaration = 35,
  sym_exec_view = 36,
  sym_bind_declaration = 37,
  sym__sql_item = 38,
  sym_xharbour_expression = 39,
  sym_xharbour_group = 40,
  sym__xharbour_item = 41,
  sym_call = 42,
  sym_qualified_name = 43,
  sym_quoted_identifier = 44,
  sym_operator = 45,
  sym_punctuation = 46,
  aux_sym_source_file_repeat1 = 47,
  aux_sym_source_file_repeat2 = 48,
  aux_sym_xharbour_expression_repeat1 = 49,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LPAREN2] = "(",
  [aux_sym__xharbour_item_token1] = "_xharbour_item_token1",
  [sym__xharbour_text] = "_xharbour_text",
  [anon_sym_DOT] = ".",
  [anon_sym_STAR] = "*",
  [sym_table_keyword] = "table_keyword",
  [sym_exec_view_keyword] = "exec_view_keyword",
  [sym_bindvar_keyword] = "bindvar_keyword",
  [sym_xharbour_function] = "xharbour_function",
  [sym_keyword] = "keyword",
  [sym_identifier] = "identifier",
  [sym_table_placeholder] = "table_placeholder",
  [sym_bind_reference] = "bind_reference",
  [sym_number] = "number",
  [sym_string] = "string",
  [sym_comment] = "comment",
  [anon_sym_EQ] = "=",
  [anon_sym_LT_GT] = "<>",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_SLASH] = "/",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_PERCENT] = "%",
  [anon_sym_COMMA] = ",",
  [anon_sym_SEMI] = ";",
  [anon_sym_DOT2] = ".",
  [sym_source_file] = "source_file",
  [sym_table_declaration] = "table_declaration",
  [sym_exec_view] = "exec_view",
  [sym_bind_declaration] = "bind_declaration",
  [sym__sql_item] = "_sql_item",
  [sym_xharbour_expression] = "xharbour_expression",
  [sym_xharbour_group] = "xharbour_group",
  [sym__xharbour_item] = "_xharbour_item",
  [sym_call] = "call",
  [sym_qualified_name] = "qualified_name",
  [sym_quoted_identifier] = "quoted_identifier",
  [sym_operator] = "operator",
  [sym_punctuation] = "punctuation",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym_xharbour_expression_repeat1] = "xharbour_expression_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LPAREN2] = anon_sym_LPAREN,
  [aux_sym__xharbour_item_token1] = aux_sym__xharbour_item_token1,
  [sym__xharbour_text] = sym__xharbour_text,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_STAR] = anon_sym_STAR,
  [sym_table_keyword] = sym_table_keyword,
  [sym_exec_view_keyword] = sym_exec_view_keyword,
  [sym_bindvar_keyword] = sym_bindvar_keyword,
  [sym_xharbour_function] = sym_xharbour_function,
  [sym_keyword] = sym_keyword,
  [sym_identifier] = sym_identifier,
  [sym_table_placeholder] = sym_table_placeholder,
  [sym_bind_reference] = sym_bind_reference,
  [sym_number] = sym_number,
  [sym_string] = sym_string,
  [sym_comment] = sym_comment,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LT_GT] = anon_sym_LT_GT,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_DOT2] = anon_sym_DOT,
  [sym_source_file] = sym_source_file,
  [sym_table_declaration] = sym_table_declaration,
  [sym_exec_view] = sym_exec_view,
  [sym_bind_declaration] = sym_bind_declaration,
  [sym__sql_item] = sym__sql_item,
  [sym_xharbour_expression] = sym_xharbour_expression,
  [sym_xharbour_group] = sym_xharbour_group,
  [sym__xharbour_item] = sym__xharbour_item,
  [sym_call] = sym_call,
  [sym_qualified_name] = sym_qualified_name,
  [sym_quoted_identifier] = sym_quoted_identifier,
  [sym_operator] = sym_operator,
  [sym_punctuation] = sym_punctuation,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
  [aux_sym_xharbour_expression_repeat1] = aux_sym_xharbour_expression_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
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
  [anon_sym_LPAREN2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__xharbour_item_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__xharbour_text] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [sym_table_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_exec_view_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_bindvar_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_xharbour_function] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_table_placeholder] = {
    .visible = true,
    .named = true,
  },
  [sym_bind_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT2] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_table_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_exec_view] = {
    .visible = true,
    .named = true,
  },
  [sym_bind_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__sql_item] = {
    .visible = false,
    .named = true,
  },
  [sym_xharbour_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_xharbour_group] = {
    .visible = true,
    .named = true,
  },
  [sym__xharbour_item] = {
    .visible = false,
    .named = true,
  },
  [sym_call] = {
    .visible = true,
    .named = true,
  },
  [sym_qualified_name] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_punctuation] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_xharbour_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_alias = 1,
  field_column = 2,
  field_function = 3,
  field_name = 4,
  field_table = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alias] = "alias",
  [field_column] = "column",
  [field_function] = "function",
  [field_name] = "name",
  [field_table] = "table",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [5] = {.index = 4, .length = 2},
  [6] = {.index = 6, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_function, 0},
  [2] =
    {field_alias, 1},
    {field_name, 2},
  [4] =
    {field_column, 2},
    {field_table, 0},
  [6] =
    {field_name, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [4] = {
    [0] = sym_string,
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
  [34] = 34,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(17);
      ADVANCE_MAP(
        '!', 9,
        '"', 2,
        '%', 190,
        '\'', 3,
        '(', 20,
        ')', 19,
        '*', 29,
        '+', 186,
        ',', 191,
        '-', 187,
        '.', 28,
        '/', 188,
        ':', 13,
        ';', 192,
        '<', 182,
        '=', 179,
        '>', 183,
        '|', 11,
        'A', 103,
        'a', 103,
        'B', 62,
        'b', 62,
        'C', 41,
        'c', 41,
        'D', 65,
        'd', 65,
        'E', 106,
        'e', 106,
        'F', 69,
        'f', 69,
        'G', 138,
        'g', 138,
        'H', 42,
        'h', 42,
        'I', 81,
        'i', 81,
        'J', 131,
        'j', 131,
        'L', 49,
        'l', 49,
        'M', 94,
        'm', 94,
        'N', 127,
        'n', 127,
        'O', 84,
        'o', 84,
        'P', 45,
        'p', 45,
        'R', 93,
        'r', 93,
        'S', 66,
        's', 66,
        'T', 43,
        't', 43,
        'U', 124,
        'u', 124,
        'V', 46,
        'v', 46,
        'W', 92,
        'w', 92,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(174);
      if (('K' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('k' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '(') ADVANCE(18);
      if (lookahead == ')') ADVANCE(19);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '/') ADVANCE(22);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(176);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(29);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '/') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(177);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(178);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(181);
      END_STATE();
    case 10:
      if (lookahead == '>') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '|') ADVANCE(189);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      END_STATE();
    case 13:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 14:
      if (eof) ADVANCE(17);
      ADVANCE_MAP(
        '!', 9,
        '"', 2,
        '%', 190,
        '\'', 3,
        '(', 20,
        ')', 19,
        '*', 29,
        '+', 186,
        ',', 191,
        '-', 187,
        '.', 28,
        '/', 188,
        ':', 13,
        ';', 192,
        '<', 182,
        '=', 179,
        '>', 183,
        '|', 11,
        'A', 103,
        'a', 103,
        'B', 63,
        'b', 63,
        'C', 41,
        'c', 41,
        'D', 65,
        'd', 65,
        'E', 107,
        'e', 107,
        'F', 69,
        'f', 69,
        'G', 138,
        'g', 138,
        'H', 42,
        'h', 42,
        'I', 81,
        'i', 81,
        'J', 131,
        'j', 131,
        'L', 49,
        'l', 49,
        'M', 94,
        'm', 94,
        'N', 127,
        'n', 127,
        'O', 84,
        'o', 84,
        'P', 45,
        'p', 45,
        'R', 93,
        'r', 93,
        'S', 66,
        's', 66,
        'T', 90,
        't', 90,
        'U', 124,
        'u', 124,
        'V', 46,
        'v', 46,
        'W', 92,
        'w', 92,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(174);
      if (('K' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('k' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 15:
      if (eof) ADVANCE(17);
      ADVANCE_MAP(
        '!', 9,
        '"', 2,
        '%', 190,
        '\'', 3,
        '(', 18,
        ')', 19,
        '*', 29,
        '+', 186,
        ',', 191,
        '-', 187,
        '.', 193,
        '/', 188,
        ':', 13,
        ';', 192,
        '<', 182,
        '=', 179,
        '>', 183,
        '|', 11,
        'A', 103,
        'a', 103,
        'B', 62,
        'b', 62,
        'C', 41,
        'c', 41,
        'D', 65,
        'd', 65,
        'E', 106,
        'e', 106,
        'F', 69,
        'f', 69,
        'G', 138,
        'g', 138,
        'H', 42,
        'h', 42,
        'I', 81,
        'i', 81,
        'J', 131,
        'j', 131,
        'L', 49,
        'l', 49,
        'M', 94,
        'm', 94,
        'N', 127,
        'n', 127,
        'O', 84,
        'o', 84,
        'P', 45,
        'p', 45,
        'R', 93,
        'r', 93,
        'S', 66,
        's', 66,
        'T', 43,
        't', 43,
        'U', 124,
        'u', 124,
        'V', 46,
        'v', 46,
        'W', 92,
        'w', 92,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(174);
      if (('K' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('k' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 16:
      if (eof) ADVANCE(17);
      ADVANCE_MAP(
        '!', 9,
        '"', 2,
        '%', 190,
        '\'', 3,
        '(', 18,
        ')', 19,
        '*', 29,
        '+', 186,
        ',', 191,
        '-', 187,
        '.', 193,
        '/', 188,
        ':', 13,
        ';', 192,
        '<', 182,
        '=', 179,
        '>', 183,
        '|', 11,
        'A', 103,
        'a', 103,
        'B', 63,
        'b', 63,
        'C', 41,
        'c', 41,
        'D', 65,
        'd', 65,
        'E', 107,
        'e', 107,
        'F', 69,
        'f', 69,
        'G', 138,
        'g', 138,
        'H', 42,
        'h', 42,
        'I', 81,
        'i', 81,
        'J', 131,
        'j', 131,
        'L', 49,
        'l', 49,
        'M', 94,
        'm', 94,
        'N', 127,
        'n', 127,
        'O', 84,
        'o', 84,
        'P', 45,
        'p', 45,
        'R', 93,
        'r', 93,
        'S', 66,
        's', 66,
        'T', 90,
        't', 90,
        'U', 124,
        'u', 124,
        'V', 46,
        'v', 46,
        'W', 92,
        'w', 92,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(174);
      if (('K' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('k' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym__xharbour_item_token1);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym__xharbour_text);
      if (lookahead == '*') ADVANCE(24);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || '*' < lookahead)) ADVANCE(27);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym__xharbour_text);
      if (lookahead == '*') ADVANCE(23);
      if (lookahead == '/') ADVANCE(27);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')')) ADVANCE(7);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym__xharbour_text);
      if (lookahead == '*') ADVANCE(23);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')')) ADVANCE(7);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym__xharbour_text);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead)) ADVANCE(27);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__xharbour_text);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')')) ADVANCE(178);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__xharbour_text);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead)) ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_table_keyword);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_exec_view_keyword);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_bindvar_keyword);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_xharbour_function);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_keyword);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(34);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(74);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(169);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(74);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(80);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(76);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(34);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(145);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(121);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(128);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(165);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(51);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(77);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(134);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(139);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(95);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(109);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(136);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(157);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(143);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(83);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(102);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(137);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(113);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(34);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(150);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(163);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(88);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(44);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(71);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(54);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(148);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(71);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(148);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(34);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(164);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(48);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(152);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(120);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(34);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(152);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(34);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(34);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(111);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(146);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(112);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(115);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(50);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(116);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(30);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        'E', 156,
        'e', 156,
        'I', 140,
        'i', 140,
        'R', 126,
        'r', 126,
        'U', 104,
        'u', 104,
      );
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(77);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(133);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(150);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(166);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(135);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(142);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(141);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(34);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(117);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(53);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(157);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(137);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        'F', 33,
        'f', 33,
        'I', 82,
        'i', 82,
        'N', 39,
        'n', 39,
        'S', 34,
        's', 34,
      );
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(33);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(150);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        'F', 85,
        'f', 85,
        'N', 38,
        'n', 38,
        'R', 36,
        'r', 36,
        'U', 151,
        'u', 151,
        'V', 74,
        'v', 74,
      );
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(149);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(34);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(91);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(34);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(37);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(77);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(150);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(67);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(153);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(87);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(167);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(119);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(129);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(117);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(130);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(118);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(122);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(158);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(73);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(64);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(105);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(170);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(35);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(105);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(34);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        'L', 145,
        'l', 145,
        'N', 59,
        'n', 59,
        'S', 56,
        's', 56,
        'X', 57,
        'x', 57,
      );
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        'L', 145,
        'l', 145,
        'N', 59,
        'n', 59,
        'S', 56,
        's', 56,
        'X', 58,
        'x', 58,
      );
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(40);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(162);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(108);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(79);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(52);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(78);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(34);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(68);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(34);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(64);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(34);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(64);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(34);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(86);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(161);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(60);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(123);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(53);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(78);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(97);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(61);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(160);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(114);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(150);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(110);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(144);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(135);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(117);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(96);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(34);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(150);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(64);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(34);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(32);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(150);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(125);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(154);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(143);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(147);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(34);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(150);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(142);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(64);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(159);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(78);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(155);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(72);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(34);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(74);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(168);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(89);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(100);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(142);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(55);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(64);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(97);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(99);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(132);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(142);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(75);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(101);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(47);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(98);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(31);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(142);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(70);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(34);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'Y' ||
          lookahead == 'd' ||
          lookahead == 'y') ADVANCE(34);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_table_placeholder);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_bind_reference);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(174);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\'') ADVANCE(3);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(178);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(184);
      if (lookahead == '>') ADVANCE(180);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(185);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(178);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(7);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_DOT2);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 15},
  [2] = {.lex_state = 15},
  [3] = {.lex_state = 16},
  [4] = {.lex_state = 16},
  [5] = {.lex_state = 16},
  [6] = {.lex_state = 15},
  [7] = {.lex_state = 15},
  [8] = {.lex_state = 15},
  [9] = {.lex_state = 15},
  [10] = {.lex_state = 14},
  [11] = {.lex_state = 16},
  [12] = {.lex_state = 16},
  [13] = {.lex_state = 16},
  [14] = {.lex_state = 16},
  [15] = {.lex_state = 16},
  [16] = {.lex_state = 16},
  [17] = {.lex_state = 16},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 15},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LPAREN2] = ACTIONS(1),
    [aux_sym__xharbour_item_token1] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [sym_table_keyword] = ACTIONS(1),
    [sym_exec_view_keyword] = ACTIONS(1),
    [sym_bindvar_keyword] = ACTIONS(1),
    [sym_xharbour_function] = ACTIONS(1),
    [sym_keyword] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_table_placeholder] = ACTIONS(1),
    [sym_bind_reference] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_DOT2] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(33),
    [sym_table_declaration] = STATE(2),
    [sym_exec_view] = STATE(2),
    [sym_bind_declaration] = STATE(2),
    [sym__sql_item] = STATE(4),
    [sym_xharbour_expression] = STATE(4),
    [sym_call] = STATE(4),
    [sym_qualified_name] = STATE(4),
    [sym_quoted_identifier] = STATE(4),
    [sym_operator] = STATE(4),
    [sym_punctuation] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_source_file_repeat2] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(7),
    [aux_sym__xharbour_item_token1] = ACTIONS(9),
    [anon_sym_STAR] = ACTIONS(11),
    [sym_table_keyword] = ACTIONS(13),
    [sym_exec_view_keyword] = ACTIONS(15),
    [sym_bindvar_keyword] = ACTIONS(17),
    [sym_xharbour_function] = ACTIONS(19),
    [sym_keyword] = ACTIONS(21),
    [sym_identifier] = ACTIONS(23),
    [sym_table_placeholder] = ACTIONS(21),
    [sym_bind_reference] = ACTIONS(21),
    [sym_number] = ACTIONS(21),
    [sym_string] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(11),
    [anon_sym_LT_GT] = ACTIONS(11),
    [anon_sym_BANG_EQ] = ACTIONS(11),
    [anon_sym_LT] = ACTIONS(25),
    [anon_sym_GT] = ACTIONS(25),
    [anon_sym_LT_EQ] = ACTIONS(11),
    [anon_sym_GT_EQ] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(25),
    [anon_sym_PIPE_PIPE] = ACTIONS(11),
    [anon_sym_PERCENT] = ACTIONS(11),
    [anon_sym_COMMA] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(7),
    [anon_sym_DOT2] = ACTIONS(7),
  },
  [2] = {
    [sym_table_declaration] = STATE(6),
    [sym_exec_view] = STATE(6),
    [sym_bind_declaration] = STATE(6),
    [sym__sql_item] = STATE(5),
    [sym_xharbour_expression] = STATE(5),
    [sym_call] = STATE(5),
    [sym_qualified_name] = STATE(5),
    [sym_quoted_identifier] = STATE(5),
    [sym_operator] = STATE(5),
    [sym_punctuation] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(6),
    [aux_sym_source_file_repeat2] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(7),
    [aux_sym__xharbour_item_token1] = ACTIONS(9),
    [anon_sym_STAR] = ACTIONS(11),
    [sym_table_keyword] = ACTIONS(13),
    [sym_exec_view_keyword] = ACTIONS(15),
    [sym_bindvar_keyword] = ACTIONS(17),
    [sym_xharbour_function] = ACTIONS(19),
    [sym_keyword] = ACTIONS(29),
    [sym_identifier] = ACTIONS(23),
    [sym_table_placeholder] = ACTIONS(29),
    [sym_bind_reference] = ACTIONS(29),
    [sym_number] = ACTIONS(29),
    [sym_string] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(11),
    [anon_sym_LT_GT] = ACTIONS(11),
    [anon_sym_BANG_EQ] = ACTIONS(11),
    [anon_sym_LT] = ACTIONS(25),
    [anon_sym_GT] = ACTIONS(25),
    [anon_sym_LT_EQ] = ACTIONS(11),
    [anon_sym_GT_EQ] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(25),
    [anon_sym_PIPE_PIPE] = ACTIONS(11),
    [anon_sym_PERCENT] = ACTIONS(11),
    [anon_sym_COMMA] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(7),
    [anon_sym_DOT2] = ACTIONS(7),
  },
  [3] = {
    [sym__sql_item] = STATE(3),
    [sym_xharbour_expression] = STATE(3),
    [sym_call] = STATE(3),
    [sym_qualified_name] = STATE(3),
    [sym_quoted_identifier] = STATE(3),
    [sym_operator] = STATE(3),
    [sym_punctuation] = STATE(3),
    [aux_sym_source_file_repeat2] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(33),
    [anon_sym_RPAREN] = ACTIONS(33),
    [aux_sym__xharbour_item_token1] = ACTIONS(36),
    [anon_sym_STAR] = ACTIONS(39),
    [sym_xharbour_function] = ACTIONS(42),
    [sym_keyword] = ACTIONS(45),
    [sym_identifier] = ACTIONS(48),
    [sym_table_placeholder] = ACTIONS(45),
    [sym_bind_reference] = ACTIONS(45),
    [sym_number] = ACTIONS(45),
    [sym_string] = ACTIONS(45),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(39),
    [anon_sym_LT_GT] = ACTIONS(39),
    [anon_sym_BANG_EQ] = ACTIONS(39),
    [anon_sym_LT] = ACTIONS(51),
    [anon_sym_GT] = ACTIONS(51),
    [anon_sym_LT_EQ] = ACTIONS(39),
    [anon_sym_GT_EQ] = ACTIONS(39),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(51),
    [anon_sym_SLASH] = ACTIONS(51),
    [anon_sym_PIPE_PIPE] = ACTIONS(39),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(33),
    [anon_sym_DOT2] = ACTIONS(33),
  },
  [4] = {
    [sym__sql_item] = STATE(3),
    [sym_xharbour_expression] = STATE(3),
    [sym_call] = STATE(3),
    [sym_qualified_name] = STATE(3),
    [sym_quoted_identifier] = STATE(3),
    [sym_operator] = STATE(3),
    [sym_punctuation] = STATE(3),
    [aux_sym_source_file_repeat2] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(7),
    [aux_sym__xharbour_item_token1] = ACTIONS(9),
    [anon_sym_STAR] = ACTIONS(11),
    [sym_xharbour_function] = ACTIONS(19),
    [sym_keyword] = ACTIONS(54),
    [sym_identifier] = ACTIONS(23),
    [sym_table_placeholder] = ACTIONS(54),
    [sym_bind_reference] = ACTIONS(54),
    [sym_number] = ACTIONS(54),
    [sym_string] = ACTIONS(54),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(11),
    [anon_sym_LT_GT] = ACTIONS(11),
    [anon_sym_BANG_EQ] = ACTIONS(11),
    [anon_sym_LT] = ACTIONS(25),
    [anon_sym_GT] = ACTIONS(25),
    [anon_sym_LT_EQ] = ACTIONS(11),
    [anon_sym_GT_EQ] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(25),
    [anon_sym_PIPE_PIPE] = ACTIONS(11),
    [anon_sym_PERCENT] = ACTIONS(11),
    [anon_sym_COMMA] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(7),
    [anon_sym_DOT2] = ACTIONS(7),
  },
  [5] = {
    [sym__sql_item] = STATE(3),
    [sym_xharbour_expression] = STATE(3),
    [sym_call] = STATE(3),
    [sym_qualified_name] = STATE(3),
    [sym_quoted_identifier] = STATE(3),
    [sym_operator] = STATE(3),
    [sym_punctuation] = STATE(3),
    [aux_sym_source_file_repeat2] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(56),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(7),
    [aux_sym__xharbour_item_token1] = ACTIONS(9),
    [anon_sym_STAR] = ACTIONS(11),
    [sym_xharbour_function] = ACTIONS(19),
    [sym_keyword] = ACTIONS(54),
    [sym_identifier] = ACTIONS(23),
    [sym_table_placeholder] = ACTIONS(54),
    [sym_bind_reference] = ACTIONS(54),
    [sym_number] = ACTIONS(54),
    [sym_string] = ACTIONS(54),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(11),
    [anon_sym_LT_GT] = ACTIONS(11),
    [anon_sym_BANG_EQ] = ACTIONS(11),
    [anon_sym_LT] = ACTIONS(25),
    [anon_sym_GT] = ACTIONS(25),
    [anon_sym_LT_EQ] = ACTIONS(11),
    [anon_sym_GT_EQ] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(25),
    [anon_sym_PIPE_PIPE] = ACTIONS(11),
    [anon_sym_PERCENT] = ACTIONS(11),
    [anon_sym_COMMA] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(7),
    [anon_sym_DOT2] = ACTIONS(7),
  },
  [6] = {
    [sym_table_declaration] = STATE(6),
    [sym_exec_view] = STATE(6),
    [sym_bind_declaration] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(58),
    [anon_sym_LPAREN] = ACTIONS(58),
    [anon_sym_RPAREN] = ACTIONS(58),
    [aux_sym__xharbour_item_token1] = ACTIONS(58),
    [anon_sym_STAR] = ACTIONS(58),
    [sym_table_keyword] = ACTIONS(60),
    [sym_exec_view_keyword] = ACTIONS(63),
    [sym_bindvar_keyword] = ACTIONS(66),
    [sym_xharbour_function] = ACTIONS(58),
    [sym_keyword] = ACTIONS(58),
    [sym_identifier] = ACTIONS(69),
    [sym_table_placeholder] = ACTIONS(58),
    [sym_bind_reference] = ACTIONS(58),
    [sym_number] = ACTIONS(58),
    [sym_string] = ACTIONS(58),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(58),
    [anon_sym_LT_GT] = ACTIONS(58),
    [anon_sym_BANG_EQ] = ACTIONS(58),
    [anon_sym_LT] = ACTIONS(69),
    [anon_sym_GT] = ACTIONS(69),
    [anon_sym_LT_EQ] = ACTIONS(58),
    [anon_sym_GT_EQ] = ACTIONS(58),
    [anon_sym_PLUS] = ACTIONS(58),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_SLASH] = ACTIONS(69),
    [anon_sym_PIPE_PIPE] = ACTIONS(58),
    [anon_sym_PERCENT] = ACTIONS(58),
    [anon_sym_COMMA] = ACTIONS(58),
    [anon_sym_SEMI] = ACTIONS(58),
    [anon_sym_DOT2] = ACTIONS(58),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(71),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_RPAREN] = ACTIONS(71),
    [aux_sym__xharbour_item_token1] = ACTIONS(71),
    [anon_sym_STAR] = ACTIONS(71),
    [sym_table_keyword] = ACTIONS(71),
    [sym_exec_view_keyword] = ACTIONS(71),
    [sym_bindvar_keyword] = ACTIONS(71),
    [sym_xharbour_function] = ACTIONS(71),
    [sym_keyword] = ACTIONS(71),
    [sym_identifier] = ACTIONS(73),
    [sym_table_placeholder] = ACTIONS(71),
    [sym_bind_reference] = ACTIONS(71),
    [sym_number] = ACTIONS(71),
    [sym_string] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(71),
    [anon_sym_LT_GT] = ACTIONS(71),
    [anon_sym_BANG_EQ] = ACTIONS(71),
    [anon_sym_LT] = ACTIONS(73),
    [anon_sym_GT] = ACTIONS(73),
    [anon_sym_LT_EQ] = ACTIONS(71),
    [anon_sym_GT_EQ] = ACTIONS(71),
    [anon_sym_PLUS] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(73),
    [anon_sym_SLASH] = ACTIONS(73),
    [anon_sym_PIPE_PIPE] = ACTIONS(71),
    [anon_sym_PERCENT] = ACTIONS(71),
    [anon_sym_COMMA] = ACTIONS(71),
    [anon_sym_SEMI] = ACTIONS(71),
    [anon_sym_DOT2] = ACTIONS(71),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(75),
    [anon_sym_RPAREN] = ACTIONS(75),
    [aux_sym__xharbour_item_token1] = ACTIONS(75),
    [anon_sym_STAR] = ACTIONS(75),
    [sym_table_keyword] = ACTIONS(75),
    [sym_exec_view_keyword] = ACTIONS(75),
    [sym_bindvar_keyword] = ACTIONS(75),
    [sym_xharbour_function] = ACTIONS(75),
    [sym_keyword] = ACTIONS(75),
    [sym_identifier] = ACTIONS(77),
    [sym_table_placeholder] = ACTIONS(75),
    [sym_bind_reference] = ACTIONS(75),
    [sym_number] = ACTIONS(75),
    [sym_string] = ACTIONS(75),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_LT_GT] = ACTIONS(75),
    [anon_sym_BANG_EQ] = ACTIONS(75),
    [anon_sym_LT] = ACTIONS(77),
    [anon_sym_GT] = ACTIONS(77),
    [anon_sym_LT_EQ] = ACTIONS(75),
    [anon_sym_GT_EQ] = ACTIONS(75),
    [anon_sym_PLUS] = ACTIONS(75),
    [anon_sym_DASH] = ACTIONS(77),
    [anon_sym_SLASH] = ACTIONS(77),
    [anon_sym_PIPE_PIPE] = ACTIONS(75),
    [anon_sym_PERCENT] = ACTIONS(75),
    [anon_sym_COMMA] = ACTIONS(75),
    [anon_sym_SEMI] = ACTIONS(75),
    [anon_sym_DOT2] = ACTIONS(75),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_RPAREN] = ACTIONS(79),
    [aux_sym__xharbour_item_token1] = ACTIONS(79),
    [anon_sym_STAR] = ACTIONS(79),
    [sym_table_keyword] = ACTIONS(79),
    [sym_exec_view_keyword] = ACTIONS(79),
    [sym_bindvar_keyword] = ACTIONS(79),
    [sym_xharbour_function] = ACTIONS(79),
    [sym_keyword] = ACTIONS(79),
    [sym_identifier] = ACTIONS(81),
    [sym_table_placeholder] = ACTIONS(79),
    [sym_bind_reference] = ACTIONS(79),
    [sym_number] = ACTIONS(79),
    [sym_string] = ACTIONS(79),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(79),
    [anon_sym_LT_GT] = ACTIONS(79),
    [anon_sym_BANG_EQ] = ACTIONS(79),
    [anon_sym_LT] = ACTIONS(81),
    [anon_sym_GT] = ACTIONS(81),
    [anon_sym_LT_EQ] = ACTIONS(79),
    [anon_sym_GT_EQ] = ACTIONS(79),
    [anon_sym_PLUS] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(81),
    [anon_sym_SLASH] = ACTIONS(81),
    [anon_sym_PIPE_PIPE] = ACTIONS(79),
    [anon_sym_PERCENT] = ACTIONS(79),
    [anon_sym_COMMA] = ACTIONS(79),
    [anon_sym_SEMI] = ACTIONS(79),
    [anon_sym_DOT2] = ACTIONS(79),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(83),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_RPAREN] = ACTIONS(83),
    [anon_sym_LPAREN2] = ACTIONS(87),
    [aux_sym__xharbour_item_token1] = ACTIONS(83),
    [anon_sym_DOT] = ACTIONS(89),
    [anon_sym_STAR] = ACTIONS(83),
    [sym_xharbour_function] = ACTIONS(83),
    [sym_keyword] = ACTIONS(83),
    [sym_identifier] = ACTIONS(85),
    [sym_table_placeholder] = ACTIONS(83),
    [sym_bind_reference] = ACTIONS(83),
    [sym_number] = ACTIONS(83),
    [sym_string] = ACTIONS(83),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(83),
    [anon_sym_LT_GT] = ACTIONS(83),
    [anon_sym_BANG_EQ] = ACTIONS(83),
    [anon_sym_LT] = ACTIONS(85),
    [anon_sym_GT] = ACTIONS(85),
    [anon_sym_LT_EQ] = ACTIONS(83),
    [anon_sym_GT_EQ] = ACTIONS(83),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(85),
    [anon_sym_SLASH] = ACTIONS(85),
    [anon_sym_PIPE_PIPE] = ACTIONS(83),
    [anon_sym_PERCENT] = ACTIONS(83),
    [anon_sym_COMMA] = ACTIONS(83),
    [anon_sym_SEMI] = ACTIONS(83),
    [anon_sym_DOT2] = ACTIONS(85),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(91),
    [anon_sym_LPAREN] = ACTIONS(91),
    [anon_sym_RPAREN] = ACTIONS(91),
    [aux_sym__xharbour_item_token1] = ACTIONS(91),
    [anon_sym_STAR] = ACTIONS(91),
    [sym_xharbour_function] = ACTIONS(91),
    [sym_keyword] = ACTIONS(91),
    [sym_identifier] = ACTIONS(93),
    [sym_table_placeholder] = ACTIONS(91),
    [sym_bind_reference] = ACTIONS(91),
    [sym_number] = ACTIONS(91),
    [sym_string] = ACTIONS(91),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(91),
    [anon_sym_LT_GT] = ACTIONS(91),
    [anon_sym_BANG_EQ] = ACTIONS(91),
    [anon_sym_LT] = ACTIONS(93),
    [anon_sym_GT] = ACTIONS(93),
    [anon_sym_LT_EQ] = ACTIONS(91),
    [anon_sym_GT_EQ] = ACTIONS(91),
    [anon_sym_PLUS] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(93),
    [anon_sym_SLASH] = ACTIONS(93),
    [anon_sym_PIPE_PIPE] = ACTIONS(91),
    [anon_sym_PERCENT] = ACTIONS(91),
    [anon_sym_COMMA] = ACTIONS(91),
    [anon_sym_SEMI] = ACTIONS(91),
    [anon_sym_DOT2] = ACTIONS(91),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(95),
    [anon_sym_RPAREN] = ACTIONS(95),
    [aux_sym__xharbour_item_token1] = ACTIONS(95),
    [anon_sym_STAR] = ACTIONS(95),
    [sym_xharbour_function] = ACTIONS(95),
    [sym_keyword] = ACTIONS(95),
    [sym_identifier] = ACTIONS(97),
    [sym_table_placeholder] = ACTIONS(95),
    [sym_bind_reference] = ACTIONS(95),
    [sym_number] = ACTIONS(95),
    [sym_string] = ACTIONS(95),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(95),
    [anon_sym_LT_GT] = ACTIONS(95),
    [anon_sym_BANG_EQ] = ACTIONS(95),
    [anon_sym_LT] = ACTIONS(97),
    [anon_sym_GT] = ACTIONS(97),
    [anon_sym_LT_EQ] = ACTIONS(95),
    [anon_sym_GT_EQ] = ACTIONS(95),
    [anon_sym_PLUS] = ACTIONS(95),
    [anon_sym_DASH] = ACTIONS(97),
    [anon_sym_SLASH] = ACTIONS(97),
    [anon_sym_PIPE_PIPE] = ACTIONS(95),
    [anon_sym_PERCENT] = ACTIONS(95),
    [anon_sym_COMMA] = ACTIONS(95),
    [anon_sym_SEMI] = ACTIONS(95),
    [anon_sym_DOT2] = ACTIONS(95),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(99),
    [anon_sym_RPAREN] = ACTIONS(99),
    [aux_sym__xharbour_item_token1] = ACTIONS(99),
    [anon_sym_STAR] = ACTIONS(99),
    [sym_xharbour_function] = ACTIONS(99),
    [sym_keyword] = ACTIONS(99),
    [sym_identifier] = ACTIONS(101),
    [sym_table_placeholder] = ACTIONS(99),
    [sym_bind_reference] = ACTIONS(99),
    [sym_number] = ACTIONS(99),
    [sym_string] = ACTIONS(99),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(99),
    [anon_sym_LT_GT] = ACTIONS(99),
    [anon_sym_BANG_EQ] = ACTIONS(99),
    [anon_sym_LT] = ACTIONS(101),
    [anon_sym_GT] = ACTIONS(101),
    [anon_sym_LT_EQ] = ACTIONS(99),
    [anon_sym_GT_EQ] = ACTIONS(99),
    [anon_sym_PLUS] = ACTIONS(99),
    [anon_sym_DASH] = ACTIONS(101),
    [anon_sym_SLASH] = ACTIONS(101),
    [anon_sym_PIPE_PIPE] = ACTIONS(99),
    [anon_sym_PERCENT] = ACTIONS(99),
    [anon_sym_COMMA] = ACTIONS(99),
    [anon_sym_SEMI] = ACTIONS(99),
    [anon_sym_DOT2] = ACTIONS(99),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(103),
    [anon_sym_LPAREN] = ACTIONS(103),
    [anon_sym_RPAREN] = ACTIONS(103),
    [aux_sym__xharbour_item_token1] = ACTIONS(103),
    [anon_sym_STAR] = ACTIONS(103),
    [sym_xharbour_function] = ACTIONS(103),
    [sym_keyword] = ACTIONS(103),
    [sym_identifier] = ACTIONS(105),
    [sym_table_placeholder] = ACTIONS(103),
    [sym_bind_reference] = ACTIONS(103),
    [sym_number] = ACTIONS(103),
    [sym_string] = ACTIONS(103),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(103),
    [anon_sym_LT_GT] = ACTIONS(103),
    [anon_sym_BANG_EQ] = ACTIONS(103),
    [anon_sym_LT] = ACTIONS(105),
    [anon_sym_GT] = ACTIONS(105),
    [anon_sym_LT_EQ] = ACTIONS(103),
    [anon_sym_GT_EQ] = ACTIONS(103),
    [anon_sym_PLUS] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(105),
    [anon_sym_SLASH] = ACTIONS(105),
    [anon_sym_PIPE_PIPE] = ACTIONS(103),
    [anon_sym_PERCENT] = ACTIONS(103),
    [anon_sym_COMMA] = ACTIONS(103),
    [anon_sym_SEMI] = ACTIONS(103),
    [anon_sym_DOT2] = ACTIONS(103),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(107),
    [anon_sym_LPAREN] = ACTIONS(107),
    [anon_sym_RPAREN] = ACTIONS(107),
    [aux_sym__xharbour_item_token1] = ACTIONS(107),
    [anon_sym_STAR] = ACTIONS(107),
    [sym_xharbour_function] = ACTIONS(107),
    [sym_keyword] = ACTIONS(107),
    [sym_identifier] = ACTIONS(109),
    [sym_table_placeholder] = ACTIONS(107),
    [sym_bind_reference] = ACTIONS(107),
    [sym_number] = ACTIONS(107),
    [sym_string] = ACTIONS(107),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(107),
    [anon_sym_LT_GT] = ACTIONS(107),
    [anon_sym_BANG_EQ] = ACTIONS(107),
    [anon_sym_LT] = ACTIONS(109),
    [anon_sym_GT] = ACTIONS(109),
    [anon_sym_LT_EQ] = ACTIONS(107),
    [anon_sym_GT_EQ] = ACTIONS(107),
    [anon_sym_PLUS] = ACTIONS(107),
    [anon_sym_DASH] = ACTIONS(109),
    [anon_sym_SLASH] = ACTIONS(109),
    [anon_sym_PIPE_PIPE] = ACTIONS(107),
    [anon_sym_PERCENT] = ACTIONS(107),
    [anon_sym_COMMA] = ACTIONS(107),
    [anon_sym_SEMI] = ACTIONS(107),
    [anon_sym_DOT2] = ACTIONS(107),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_RPAREN] = ACTIONS(111),
    [aux_sym__xharbour_item_token1] = ACTIONS(111),
    [anon_sym_STAR] = ACTIONS(111),
    [sym_xharbour_function] = ACTIONS(111),
    [sym_keyword] = ACTIONS(111),
    [sym_identifier] = ACTIONS(113),
    [sym_table_placeholder] = ACTIONS(111),
    [sym_bind_reference] = ACTIONS(111),
    [sym_number] = ACTIONS(111),
    [sym_string] = ACTIONS(111),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(111),
    [anon_sym_LT_GT] = ACTIONS(111),
    [anon_sym_BANG_EQ] = ACTIONS(111),
    [anon_sym_LT] = ACTIONS(113),
    [anon_sym_GT] = ACTIONS(113),
    [anon_sym_LT_EQ] = ACTIONS(111),
    [anon_sym_GT_EQ] = ACTIONS(111),
    [anon_sym_PLUS] = ACTIONS(111),
    [anon_sym_DASH] = ACTIONS(113),
    [anon_sym_SLASH] = ACTIONS(113),
    [anon_sym_PIPE_PIPE] = ACTIONS(111),
    [anon_sym_PERCENT] = ACTIONS(111),
    [anon_sym_COMMA] = ACTIONS(111),
    [anon_sym_SEMI] = ACTIONS(111),
    [anon_sym_DOT2] = ACTIONS(111),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(115),
    [anon_sym_LPAREN] = ACTIONS(115),
    [anon_sym_RPAREN] = ACTIONS(115),
    [aux_sym__xharbour_item_token1] = ACTIONS(115),
    [anon_sym_STAR] = ACTIONS(115),
    [sym_xharbour_function] = ACTIONS(115),
    [sym_keyword] = ACTIONS(115),
    [sym_identifier] = ACTIONS(117),
    [sym_table_placeholder] = ACTIONS(115),
    [sym_bind_reference] = ACTIONS(115),
    [sym_number] = ACTIONS(115),
    [sym_string] = ACTIONS(115),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(115),
    [anon_sym_LT_GT] = ACTIONS(115),
    [anon_sym_BANG_EQ] = ACTIONS(115),
    [anon_sym_LT] = ACTIONS(117),
    [anon_sym_GT] = ACTIONS(117),
    [anon_sym_LT_EQ] = ACTIONS(115),
    [anon_sym_GT_EQ] = ACTIONS(115),
    [anon_sym_PLUS] = ACTIONS(115),
    [anon_sym_DASH] = ACTIONS(117),
    [anon_sym_SLASH] = ACTIONS(117),
    [anon_sym_PIPE_PIPE] = ACTIONS(115),
    [anon_sym_PERCENT] = ACTIONS(115),
    [anon_sym_COMMA] = ACTIONS(115),
    [anon_sym_SEMI] = ACTIONS(115),
    [anon_sym_DOT2] = ACTIONS(115),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(119), 1,
      anon_sym_LPAREN,
    ACTIONS(121), 1,
      anon_sym_RPAREN,
    ACTIONS(123), 1,
      aux_sym__xharbour_item_token1,
    ACTIONS(125), 1,
      sym__xharbour_text,
    ACTIONS(127), 1,
      sym_string,
    ACTIONS(129), 1,
      sym_comment,
    STATE(21), 3,
      sym_xharbour_group,
      sym__xharbour_item,
      aux_sym_xharbour_expression_repeat1,
  [24] = 7,
    ACTIONS(119), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      aux_sym__xharbour_item_token1,
    ACTIONS(129), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_RPAREN,
    ACTIONS(133), 1,
      sym__xharbour_text,
    ACTIONS(135), 1,
      sym_string,
    STATE(20), 3,
      sym_xharbour_group,
      sym__xharbour_item,
      aux_sym_xharbour_expression_repeat1,
  [48] = 7,
    ACTIONS(119), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      aux_sym__xharbour_item_token1,
    ACTIONS(129), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_RPAREN,
    ACTIONS(139), 1,
      sym__xharbour_text,
    ACTIONS(141), 1,
      sym_string,
    STATE(22), 3,
      sym_xharbour_group,
      sym__xharbour_item,
      aux_sym_xharbour_expression_repeat1,
  [72] = 7,
    ACTIONS(119), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      aux_sym__xharbour_item_token1,
    ACTIONS(129), 1,
      sym_comment,
    ACTIONS(139), 1,
      sym__xharbour_text,
    ACTIONS(141), 1,
      sym_string,
    ACTIONS(143), 1,
      anon_sym_RPAREN,
    STATE(22), 3,
      sym_xharbour_group,
      sym__xharbour_item,
      aux_sym_xharbour_expression_repeat1,
  [96] = 7,
    ACTIONS(129), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
    ACTIONS(148), 1,
      anon_sym_RPAREN,
    ACTIONS(150), 1,
      aux_sym__xharbour_item_token1,
    ACTIONS(153), 1,
      sym__xharbour_text,
    ACTIONS(156), 1,
      sym_string,
    STATE(22), 3,
      sym_xharbour_group,
      sym__xharbour_item,
      aux_sym_xharbour_expression_repeat1,
  [120] = 3,
    ACTIONS(129), 1,
      sym_comment,
    ACTIONS(161), 1,
      sym__xharbour_text,
    ACTIONS(159), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym__xharbour_item_token1,
      sym_string,
  [133] = 3,
    ACTIONS(129), 1,
      sym_comment,
    ACTIONS(165), 1,
      sym__xharbour_text,
    ACTIONS(163), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym__xharbour_item_token1,
      sym_string,
  [146] = 3,
    ACTIONS(129), 1,
      sym_comment,
    ACTIONS(169), 1,
      sym__xharbour_text,
    ACTIONS(167), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym__xharbour_item_token1,
      sym_string,
  [159] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 2,
      anon_sym_STAR,
      sym_identifier,
  [167] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym_identifier,
  [174] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      sym_identifier,
  [181] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      sym_string,
  [188] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
  [195] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      sym_identifier,
  [202] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_LPAREN2,
  [209] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      ts_builtin_sym_end,
  [216] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(18)] = 0,
  [SMALL_STATE(19)] = 24,
  [SMALL_STATE(20)] = 48,
  [SMALL_STATE(21)] = 72,
  [SMALL_STATE(22)] = 96,
  [SMALL_STATE(23)] = 120,
  [SMALL_STATE(24)] = 133,
  [SMALL_STATE(25)] = 146,
  [SMALL_STATE(26)] = 159,
  [SMALL_STATE(27)] = 167,
  [SMALL_STATE(28)] = 174,
  [SMALL_STATE(29)] = 181,
  [SMALL_STATE(30)] = 188,
  [SMALL_STATE(31)] = 195,
  [SMALL_STATE(32)] = 202,
  [SMALL_STATE(33)] = 209,
  [SMALL_STATE(34)] = 216,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(14),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(16),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(12),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(32),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(3),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(10),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(12),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bind_declaration, 2, 0, 1),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bind_declaration, 2, 0, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_declaration, 3, 0, 3),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_declaration, 3, 0, 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec_view, 4, 0, 6),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exec_view, 4, 0, 6),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sql_item, 1, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sql_item, 1, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 3, 0, 5),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_name, 3, 0, 5),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 2, 0, 2),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 2, 0, 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_punctuation, 1, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_punctuation, 1, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xharbour_expression, 3, 0, 2),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xharbour_expression, 3, 0, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_identifier, 1, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_identifier, 1, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xharbour_expression, 4, 0, 2),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xharbour_expression, 4, 0, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xharbour_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_xharbour_expression_repeat1, 2, 0, 0),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xharbour_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xharbour_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xharbour_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xharbour_item, 1, 0, 4),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__xharbour_item, 1, 0, 4),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xharbour_group, 2, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xharbour_group, 2, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xharbour_group, 3, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xharbour_group, 3, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [185] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
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

TS_PUBLIC const TSLanguage *tree_sitter_newage_view(void) {
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
