#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 39
#define LARGE_STATE_COUNT 17
#define SYMBOL_COUNT 51
#define ALIAS_COUNT 0
#define TOKEN_COUNT 34
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 8

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_LPAREN = 2,
  anon_sym_COMMA = 3,
  anon_sym_RPAREN = 4,
  anon_sym_LPAREN2 = 5,
  aux_sym__xharbour_item_token1 = 6,
  sym__xharbour_text = 7,
  anon_sym_DOT = 8,
  anon_sym_STAR = 9,
  sym_table_keyword = 10,
  sym_exec_view_keyword = 11,
  sym_bindvar_keyword = 12,
  sym_xharbour_function = 13,
  sym_keyword = 14,
  sym_table_placeholder = 15,
  sym_bind_reference = 16,
  sym_number = 17,
  sym_string = 18,
  sym_comment = 19,
  anon_sym_EQ = 20,
  anon_sym_LT_GT = 21,
  anon_sym_BANG_EQ = 22,
  anon_sym_LT = 23,
  anon_sym_GT = 24,
  anon_sym_LT_EQ = 25,
  anon_sym_GT_EQ = 26,
  anon_sym_PLUS = 27,
  anon_sym_DASH = 28,
  anon_sym_SLASH = 29,
  anon_sym_PIPE_PIPE = 30,
  anon_sym_PERCENT = 31,
  anon_sym_SEMI = 32,
  anon_sym_DOT2 = 33,
  sym_source_file = 34,
  sym_table_declaration = 35,
  sym_exec_view = 36,
  sym__exec_view_argument = 37,
  sym_bind_declaration = 38,
  sym__sql_item = 39,
  sym_xharbour_expression = 40,
  sym_xharbour_group = 41,
  sym__xharbour_item = 42,
  sym_call = 43,
  sym_qualified_name = 44,
  sym_quoted_identifier = 45,
  sym_operator = 46,
  sym_punctuation = 47,
  aux_sym_source_file_repeat1 = 48,
  aux_sym_exec_view_repeat1 = 49,
  aux_sym_xharbour_expression_repeat1 = 50,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
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
  [anon_sym_SEMI] = ";",
  [anon_sym_DOT2] = ".",
  [sym_source_file] = "source_file",
  [sym_table_declaration] = "table_declaration",
  [sym_exec_view] = "exec_view",
  [sym__exec_view_argument] = "_exec_view_argument",
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
  [aux_sym_exec_view_repeat1] = "exec_view_repeat1",
  [aux_sym_xharbour_expression_repeat1] = "xharbour_expression_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
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
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_DOT2] = anon_sym_DOT,
  [sym_source_file] = sym_source_file,
  [sym_table_declaration] = sym_table_declaration,
  [sym_exec_view] = sym_exec_view,
  [sym__exec_view_argument] = sym__exec_view_argument,
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
  [aux_sym_exec_view_repeat1] = aux_sym_exec_view_repeat1,
  [aux_sym_xharbour_expression_repeat1] = aux_sym_xharbour_expression_repeat1,
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
  [sym__exec_view_argument] = {
    .visible = false,
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
  [aux_sym_exec_view_repeat1] = {
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
  [3] = {.index = 0, .length = 1},
  [4] = {.index = 2, .length = 2},
  [6] = {.index = 4, .length = 2},
  [7] = {.index = 6, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_function, 0},
  [1] =
    {field_name, 1},
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
  [1] = {
    [0] = sym_identifier,
  },
  [5] = {
    [0] = sym_string,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_quoted_identifier, 2,
    sym_quoted_identifier,
    sym_string,
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
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(12);
      ADVANCE_MAP(
        '!', 6,
        '"', 2,
        '%', 45,
        '\'', 3,
        '(', 16,
        ')', 15,
        '*', 25,
        '+', 41,
        ',', 14,
        '-', 42,
        '.', 24,
        '/', 43,
        ':', 10,
        ';', 46,
        '<', 37,
        '=', 34,
        '>', 38,
        '|', 8,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '(') ADVANCE(13);
      if (lookahead == ')') ADVANCE(15);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '/') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(31);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(36);
      END_STATE();
    case 7:
      if (lookahead == '>') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '|') ADVANCE(44);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 10:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 11:
      if (eof) ADVANCE(12);
      ADVANCE_MAP(
        '!', 6,
        '"', 2,
        '%', 45,
        '\'', 3,
        '(', 13,
        ')', 15,
        '*', 25,
        '+', 41,
        ',', 14,
        '-', 42,
        '.', 47,
        '/', 43,
        ':', 10,
        ';', 46,
        '<', 37,
        '=', 34,
        '>', 38,
        '|', 8,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym__xharbour_item_token1);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym__xharbour_text);
      if (lookahead == '*') ADVANCE(20);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || '*' < lookahead)) ADVANCE(23);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym__xharbour_text);
      if (lookahead == '*') ADVANCE(19);
      if (lookahead == '/') ADVANCE(23);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')')) ADVANCE(5);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym__xharbour_text);
      if (lookahead == '*') ADVANCE(19);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')')) ADVANCE(5);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym__xharbour_text);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead)) ADVANCE(23);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym__xharbour_text);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')')) ADVANCE(33);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym__xharbour_text);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead)) ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_table_placeholder);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_bind_reference);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\'') ADVANCE(3);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(39);
      if (lookahead == '>') ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(40);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(33);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(5);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_DOT2);
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
      ADVANCE_MAP(
        'A', 1,
        'a', 1,
        'B', 2,
        'b', 2,
        'C', 3,
        'c', 3,
        'D', 4,
        'd', 4,
        'E', 5,
        'e', 5,
        'F', 6,
        'f', 6,
        'G', 7,
        'g', 7,
        'H', 8,
        'h', 8,
        'I', 9,
        'i', 9,
        'J', 10,
        'j', 10,
        'L', 11,
        'l', 11,
        'M', 12,
        'm', 12,
        'N', 13,
        'n', 13,
        'O', 14,
        'o', 14,
        'P', 15,
        'p', 15,
        'R', 16,
        'r', 16,
        'S', 17,
        's', 17,
        'T', 18,
        't', 18,
        'U', 19,
        'u', 19,
        'V', 20,
        'v', 20,
        'W', 21,
        'w', 21,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(22);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(23);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(24);
      END_STATE();
    case 2:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(25);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(26);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(27);
      END_STATE();
    case 3:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(28);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(29);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 4:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(31);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        'L', 33,
        'l', 33,
        'N', 34,
        'n', 34,
        'S', 35,
        's', 35,
        'X', 36,
        'x', 36,
      );
      END_STATE();
    case 6:
      ADVANCE_MAP(
        'E', 37,
        'e', 37,
        'I', 38,
        'i', 38,
        'R', 39,
        'r', 39,
        'U', 40,
        'u', 40,
      );
      END_STATE();
    case 7:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 8:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        'F', 43,
        'f', 43,
        'I', 44,
        'i', 44,
        'N', 45,
        'n', 45,
        'S', 27,
        's', 27,
      );
      END_STATE();
    case 10:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 11:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(47);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(48);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 12:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 13:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(51);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(52);
      END_STATE();
    case 14:
      ADVANCE_MAP(
        'F', 53,
        'f', 53,
        'N', 54,
        'n', 54,
        'R', 55,
        'r', 55,
        'U', 56,
        'u', 56,
        'V', 57,
        'v', 57,
      );
      END_STATE();
    case 15:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(58);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 16:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(60);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 17:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(62);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(63);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(64);
      END_STATE();
    case 18:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(65);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(66);
      END_STATE();
    case 19:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(67);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(68);
      END_STATE();
    case 20:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 21:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(70);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(71);
      END_STATE();
    case 22:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 23:
      if (lookahead == 'D' ||
          lookahead == 'Y' ||
          lookahead == 'd' ||
          lookahead == 'y') ADVANCE(27);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(27);
      END_STATE();
    case 25:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(72);
      END_STATE();
    case 26:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_keyword);
      END_STATE();
    case 28:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(74);
      END_STATE();
    case 29:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 30:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 31:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(77);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(78);
      END_STATE();
    case 32:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(79);
      END_STATE();
    case 33:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(80);
      END_STATE();
    case 34:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(27);
      END_STATE();
    case 35:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(81);
      END_STATE();
    case 36:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(82);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(83);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(84);
      END_STATE();
    case 37:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(85);
      END_STATE();
    case 38:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 39:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 40:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(88);
      END_STATE();
    case 41:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 42:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(90);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_xharbour_function);
      END_STATE();
    case 44:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(43);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(91);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(92);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(93);
      END_STATE();
    case 46:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 47:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(95);
      END_STATE();
    case 48:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(96);
      END_STATE();
    case 49:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(97);
      END_STATE();
    case 50:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 51:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(27);
      END_STATE();
    case 52:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(99);
      END_STATE();
    case 53:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(100);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(101);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(102);
      END_STATE();
    case 56:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(103);
      END_STATE();
    case 57:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 58:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 59:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 60:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(107);
      END_STATE();
    case 61:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(108);
      END_STATE();
    case 62:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(109);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(27);
      END_STATE();
    case 63:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(110);
      END_STATE();
    case 64:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(111);
      END_STATE();
    case 65:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(112);
      END_STATE();
    case 66:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 67:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 68:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(115);
      END_STATE();
    case 69:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(116);
      END_STATE();
    case 70:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 71:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(118);
      END_STATE();
    case 72:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(119);
      END_STATE();
    case 73:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(120);
      END_STATE();
    case 74:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 75:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(121);
      END_STATE();
    case 76:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(122);
      END_STATE();
    case 77:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 78:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(27);
      END_STATE();
    case 79:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(124);
      END_STATE();
    case 80:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 81:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(125);
      END_STATE();
    case 82:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 83:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(127);
      END_STATE();
    case 84:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(128);
      END_STATE();
    case 85:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(129);
      END_STATE();
    case 86:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(130);
      END_STATE();
    case 87:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(27);
      END_STATE();
    case 88:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 89:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(131);
      END_STATE();
    case 90:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(132);
      END_STATE();
    case 91:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 92:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 93:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(135);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 94:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 95:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(27);
      END_STATE();
    case 96:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(27);
      END_STATE();
    case 97:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 98:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(136);
      END_STATE();
    case 99:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(137);
      END_STATE();
    case 100:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(138);
      END_STATE();
    case 101:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(27);
      END_STATE();
    case 102:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 103:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 104:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 105:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(141);
      END_STATE();
    case 106:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(142);
      END_STATE();
    case 107:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(143);
      END_STATE();
    case 108:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(27);
      END_STATE();
    case 109:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 110:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 111:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(145);
      END_STATE();
    case 112:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(146);
      END_STATE();
    case 113:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 114:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(147);
      END_STATE();
    case 115:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(148);
      END_STATE();
    case 116:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(149);
      END_STATE();
    case 117:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(27);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 118:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(151);
      END_STATE();
    case 119:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 120:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(153);
      END_STATE();
    case 121:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 122:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(27);
      END_STATE();
    case 123:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(155);
      END_STATE();
    case 124:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(156);
      END_STATE();
    case 125:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(157);
      END_STATE();
    case 126:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(158);
      END_STATE();
    case 127:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(159);
      END_STATE();
    case 128:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(160);
      END_STATE();
    case 129:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(27);
      END_STATE();
    case 130:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(27);
      END_STATE();
    case 131:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(27);
      END_STATE();
    case 132:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(161);
      END_STATE();
    case 133:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 134:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(162);
      END_STATE();
    case 135:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(163);
      END_STATE();
    case 136:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(27);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(27);
      END_STATE();
    case 138:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 139:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 140:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 141:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(165);
      END_STATE();
    case 142:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 143:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(27);
      END_STATE();
    case 144:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(166);
      END_STATE();
    case 145:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(27);
      END_STATE();
    case 146:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 147:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 148:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(168);
      END_STATE();
    case 149:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 150:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(170);
      END_STATE();
    case 152:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 153:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(172);
      END_STATE();
    case 154:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(173);
      END_STATE();
    case 155:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 156:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(174);
      END_STATE();
    case 157:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 158:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(27);
      END_STATE();
    case 159:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(175);
      END_STATE();
    case 160:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(27);
      END_STATE();
    case 161:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(27);
      END_STATE();
    case 162:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(27);
      END_STATE();
    case 163:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(176);
      END_STATE();
    case 164:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(27);
      END_STATE();
    case 165:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(177);
      END_STATE();
    case 166:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(27);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_table_keyword);
      END_STATE();
    case 168:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 169:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(27);
      END_STATE();
    case 170:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 171:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 172:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 173:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(27);
      END_STATE();
    case 174:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(179);
      END_STATE();
    case 175:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 176:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 177:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(182);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_bindvar_keyword);
      END_STATE();
    case 179:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(27);
      END_STATE();
    case 180:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(183);
      END_STATE();
    case 181:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(184);
      END_STATE();
    case 182:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(185);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_exec_view_keyword);
      END_STATE();
    case 184:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(27);
      END_STATE();
    case 185:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(27);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 11},
  [2] = {.lex_state = 11},
  [3] = {.lex_state = 11},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 11},
  [6] = {.lex_state = 11},
  [7] = {.lex_state = 11},
  [8] = {.lex_state = 11},
  [9] = {.lex_state = 11},
  [10] = {.lex_state = 11},
  [11] = {.lex_state = 11},
  [12] = {.lex_state = 11},
  [13] = {.lex_state = 11},
  [14] = {.lex_state = 11},
  [15] = {.lex_state = 11},
  [16] = {.lex_state = 11},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 11},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
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
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_DOT2] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(38),
    [sym_table_declaration] = STATE(2),
    [sym_exec_view] = STATE(2),
    [sym_bind_declaration] = STATE(2),
    [sym__sql_item] = STATE(2),
    [sym_xharbour_expression] = STATE(2),
    [sym_call] = STATE(2),
    [sym_qualified_name] = STATE(2),
    [sym_quoted_identifier] = STATE(2),
    [sym_operator] = STATE(2),
    [sym_punctuation] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_COMMA] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(9),
    [aux_sym__xharbour_item_token1] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(13),
    [sym_table_keyword] = ACTIONS(15),
    [sym_exec_view_keyword] = ACTIONS(17),
    [sym_bindvar_keyword] = ACTIONS(19),
    [sym_xharbour_function] = ACTIONS(21),
    [sym_keyword] = ACTIONS(23),
    [sym_table_placeholder] = ACTIONS(23),
    [sym_bind_reference] = ACTIONS(23),
    [sym_number] = ACTIONS(23),
    [sym_string] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(13),
    [anon_sym_LT_GT] = ACTIONS(13),
    [anon_sym_BANG_EQ] = ACTIONS(13),
    [anon_sym_LT] = ACTIONS(25),
    [anon_sym_GT] = ACTIONS(25),
    [anon_sym_LT_EQ] = ACTIONS(13),
    [anon_sym_GT_EQ] = ACTIONS(13),
    [anon_sym_PLUS] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(25),
    [anon_sym_PIPE_PIPE] = ACTIONS(13),
    [anon_sym_PERCENT] = ACTIONS(13),
    [anon_sym_SEMI] = ACTIONS(9),
    [anon_sym_DOT2] = ACTIONS(9),
  },
  [2] = {
    [sym_table_declaration] = STATE(3),
    [sym_exec_view] = STATE(3),
    [sym_bind_declaration] = STATE(3),
    [sym__sql_item] = STATE(3),
    [sym_xharbour_expression] = STATE(3),
    [sym_call] = STATE(3),
    [sym_qualified_name] = STATE(3),
    [sym_quoted_identifier] = STATE(3),
    [sym_operator] = STATE(3),
    [sym_punctuation] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(27),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_COMMA] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(9),
    [aux_sym__xharbour_item_token1] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(13),
    [sym_table_keyword] = ACTIONS(15),
    [sym_exec_view_keyword] = ACTIONS(17),
    [sym_bindvar_keyword] = ACTIONS(19),
    [sym_xharbour_function] = ACTIONS(21),
    [sym_keyword] = ACTIONS(29),
    [sym_table_placeholder] = ACTIONS(29),
    [sym_bind_reference] = ACTIONS(29),
    [sym_number] = ACTIONS(29),
    [sym_string] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(13),
    [anon_sym_LT_GT] = ACTIONS(13),
    [anon_sym_BANG_EQ] = ACTIONS(13),
    [anon_sym_LT] = ACTIONS(25),
    [anon_sym_GT] = ACTIONS(25),
    [anon_sym_LT_EQ] = ACTIONS(13),
    [anon_sym_GT_EQ] = ACTIONS(13),
    [anon_sym_PLUS] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(25),
    [anon_sym_PIPE_PIPE] = ACTIONS(13),
    [anon_sym_PERCENT] = ACTIONS(13),
    [anon_sym_SEMI] = ACTIONS(9),
    [anon_sym_DOT2] = ACTIONS(9),
  },
  [3] = {
    [sym_table_declaration] = STATE(3),
    [sym_exec_view] = STATE(3),
    [sym_bind_declaration] = STATE(3),
    [sym__sql_item] = STATE(3),
    [sym_xharbour_expression] = STATE(3),
    [sym_call] = STATE(3),
    [sym_qualified_name] = STATE(3),
    [sym_quoted_identifier] = STATE(3),
    [sym_operator] = STATE(3),
    [sym_punctuation] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(31),
    [sym_identifier] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(36),
    [anon_sym_COMMA] = ACTIONS(36),
    [anon_sym_RPAREN] = ACTIONS(36),
    [aux_sym__xharbour_item_token1] = ACTIONS(39),
    [anon_sym_STAR] = ACTIONS(42),
    [sym_table_keyword] = ACTIONS(45),
    [sym_exec_view_keyword] = ACTIONS(48),
    [sym_bindvar_keyword] = ACTIONS(51),
    [sym_xharbour_function] = ACTIONS(54),
    [sym_keyword] = ACTIONS(57),
    [sym_table_placeholder] = ACTIONS(57),
    [sym_bind_reference] = ACTIONS(57),
    [sym_number] = ACTIONS(57),
    [sym_string] = ACTIONS(57),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(42),
    [anon_sym_LT_GT] = ACTIONS(42),
    [anon_sym_BANG_EQ] = ACTIONS(42),
    [anon_sym_LT] = ACTIONS(60),
    [anon_sym_GT] = ACTIONS(60),
    [anon_sym_LT_EQ] = ACTIONS(42),
    [anon_sym_GT_EQ] = ACTIONS(42),
    [anon_sym_PLUS] = ACTIONS(42),
    [anon_sym_DASH] = ACTIONS(60),
    [anon_sym_SLASH] = ACTIONS(60),
    [anon_sym_PIPE_PIPE] = ACTIONS(42),
    [anon_sym_PERCENT] = ACTIONS(42),
    [anon_sym_SEMI] = ACTIONS(36),
    [anon_sym_DOT2] = ACTIONS(36),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(63),
    [sym_identifier] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(63),
    [anon_sym_RPAREN] = ACTIONS(63),
    [anon_sym_LPAREN2] = ACTIONS(67),
    [aux_sym__xharbour_item_token1] = ACTIONS(63),
    [anon_sym_DOT] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(63),
    [sym_table_keyword] = ACTIONS(63),
    [sym_exec_view_keyword] = ACTIONS(63),
    [sym_bindvar_keyword] = ACTIONS(63),
    [sym_xharbour_function] = ACTIONS(63),
    [sym_keyword] = ACTIONS(63),
    [sym_table_placeholder] = ACTIONS(63),
    [sym_bind_reference] = ACTIONS(63),
    [sym_number] = ACTIONS(63),
    [sym_string] = ACTIONS(63),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(63),
    [anon_sym_LT_GT] = ACTIONS(63),
    [anon_sym_BANG_EQ] = ACTIONS(63),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_LT_EQ] = ACTIONS(63),
    [anon_sym_GT_EQ] = ACTIONS(63),
    [anon_sym_PLUS] = ACTIONS(63),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_PIPE_PIPE] = ACTIONS(63),
    [anon_sym_PERCENT] = ACTIONS(63),
    [anon_sym_SEMI] = ACTIONS(63),
    [anon_sym_DOT2] = ACTIONS(65),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(71),
    [sym_identifier] = ACTIONS(73),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_COMMA] = ACTIONS(71),
    [anon_sym_RPAREN] = ACTIONS(71),
    [aux_sym__xharbour_item_token1] = ACTIONS(71),
    [anon_sym_STAR] = ACTIONS(71),
    [sym_table_keyword] = ACTIONS(71),
    [sym_exec_view_keyword] = ACTIONS(71),
    [sym_bindvar_keyword] = ACTIONS(71),
    [sym_xharbour_function] = ACTIONS(71),
    [sym_keyword] = ACTIONS(71),
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
    [anon_sym_SEMI] = ACTIONS(71),
    [anon_sym_DOT2] = ACTIONS(71),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(75),
    [sym_identifier] = ACTIONS(77),
    [anon_sym_LPAREN] = ACTIONS(75),
    [anon_sym_COMMA] = ACTIONS(75),
    [anon_sym_RPAREN] = ACTIONS(75),
    [aux_sym__xharbour_item_token1] = ACTIONS(75),
    [anon_sym_STAR] = ACTIONS(75),
    [sym_table_keyword] = ACTIONS(75),
    [sym_exec_view_keyword] = ACTIONS(75),
    [sym_bindvar_keyword] = ACTIONS(75),
    [sym_xharbour_function] = ACTIONS(75),
    [sym_keyword] = ACTIONS(75),
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
    [anon_sym_SEMI] = ACTIONS(75),
    [anon_sym_DOT2] = ACTIONS(75),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(79),
    [sym_identifier] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_COMMA] = ACTIONS(79),
    [anon_sym_RPAREN] = ACTIONS(79),
    [aux_sym__xharbour_item_token1] = ACTIONS(79),
    [anon_sym_STAR] = ACTIONS(79),
    [sym_table_keyword] = ACTIONS(79),
    [sym_exec_view_keyword] = ACTIONS(79),
    [sym_bindvar_keyword] = ACTIONS(79),
    [sym_xharbour_function] = ACTIONS(79),
    [sym_keyword] = ACTIONS(79),
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
    [anon_sym_SEMI] = ACTIONS(79),
    [anon_sym_DOT2] = ACTIONS(79),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(83),
    [sym_identifier] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(83),
    [anon_sym_COMMA] = ACTIONS(83),
    [anon_sym_RPAREN] = ACTIONS(83),
    [aux_sym__xharbour_item_token1] = ACTIONS(83),
    [anon_sym_STAR] = ACTIONS(83),
    [sym_table_keyword] = ACTIONS(83),
    [sym_exec_view_keyword] = ACTIONS(83),
    [sym_bindvar_keyword] = ACTIONS(83),
    [sym_xharbour_function] = ACTIONS(83),
    [sym_keyword] = ACTIONS(83),
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
    [anon_sym_SEMI] = ACTIONS(83),
    [anon_sym_DOT2] = ACTIONS(83),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(87),
    [sym_identifier] = ACTIONS(89),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_COMMA] = ACTIONS(87),
    [anon_sym_RPAREN] = ACTIONS(87),
    [aux_sym__xharbour_item_token1] = ACTIONS(87),
    [anon_sym_STAR] = ACTIONS(87),
    [sym_table_keyword] = ACTIONS(87),
    [sym_exec_view_keyword] = ACTIONS(87),
    [sym_bindvar_keyword] = ACTIONS(87),
    [sym_xharbour_function] = ACTIONS(87),
    [sym_keyword] = ACTIONS(87),
    [sym_table_placeholder] = ACTIONS(87),
    [sym_bind_reference] = ACTIONS(87),
    [sym_number] = ACTIONS(87),
    [sym_string] = ACTIONS(87),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(87),
    [anon_sym_LT_GT] = ACTIONS(87),
    [anon_sym_BANG_EQ] = ACTIONS(87),
    [anon_sym_LT] = ACTIONS(89),
    [anon_sym_GT] = ACTIONS(89),
    [anon_sym_LT_EQ] = ACTIONS(87),
    [anon_sym_GT_EQ] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(87),
    [anon_sym_DASH] = ACTIONS(89),
    [anon_sym_SLASH] = ACTIONS(89),
    [anon_sym_PIPE_PIPE] = ACTIONS(87),
    [anon_sym_PERCENT] = ACTIONS(87),
    [anon_sym_SEMI] = ACTIONS(87),
    [anon_sym_DOT2] = ACTIONS(87),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(91),
    [sym_identifier] = ACTIONS(93),
    [anon_sym_LPAREN] = ACTIONS(91),
    [anon_sym_COMMA] = ACTIONS(91),
    [anon_sym_RPAREN] = ACTIONS(91),
    [aux_sym__xharbour_item_token1] = ACTIONS(91),
    [anon_sym_STAR] = ACTIONS(91),
    [sym_table_keyword] = ACTIONS(91),
    [sym_exec_view_keyword] = ACTIONS(91),
    [sym_bindvar_keyword] = ACTIONS(91),
    [sym_xharbour_function] = ACTIONS(91),
    [sym_keyword] = ACTIONS(91),
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
    [anon_sym_SEMI] = ACTIONS(91),
    [anon_sym_DOT2] = ACTIONS(91),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(95),
    [sym_identifier] = ACTIONS(97),
    [anon_sym_LPAREN] = ACTIONS(95),
    [anon_sym_COMMA] = ACTIONS(95),
    [anon_sym_RPAREN] = ACTIONS(95),
    [aux_sym__xharbour_item_token1] = ACTIONS(95),
    [anon_sym_STAR] = ACTIONS(95),
    [sym_table_keyword] = ACTIONS(95),
    [sym_exec_view_keyword] = ACTIONS(95),
    [sym_bindvar_keyword] = ACTIONS(95),
    [sym_xharbour_function] = ACTIONS(95),
    [sym_keyword] = ACTIONS(95),
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
    [anon_sym_SEMI] = ACTIONS(95),
    [anon_sym_DOT2] = ACTIONS(95),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(99),
    [sym_identifier] = ACTIONS(101),
    [anon_sym_LPAREN] = ACTIONS(99),
    [anon_sym_COMMA] = ACTIONS(99),
    [anon_sym_RPAREN] = ACTIONS(99),
    [aux_sym__xharbour_item_token1] = ACTIONS(99),
    [anon_sym_STAR] = ACTIONS(99),
    [sym_table_keyword] = ACTIONS(99),
    [sym_exec_view_keyword] = ACTIONS(99),
    [sym_bindvar_keyword] = ACTIONS(99),
    [sym_xharbour_function] = ACTIONS(99),
    [sym_keyword] = ACTIONS(99),
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
    [anon_sym_SEMI] = ACTIONS(99),
    [anon_sym_DOT2] = ACTIONS(99),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(103),
    [sym_identifier] = ACTIONS(105),
    [anon_sym_LPAREN] = ACTIONS(103),
    [anon_sym_COMMA] = ACTIONS(103),
    [anon_sym_RPAREN] = ACTIONS(103),
    [aux_sym__xharbour_item_token1] = ACTIONS(103),
    [anon_sym_STAR] = ACTIONS(103),
    [sym_table_keyword] = ACTIONS(103),
    [sym_exec_view_keyword] = ACTIONS(103),
    [sym_bindvar_keyword] = ACTIONS(103),
    [sym_xharbour_function] = ACTIONS(103),
    [sym_keyword] = ACTIONS(103),
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
    [anon_sym_SEMI] = ACTIONS(103),
    [anon_sym_DOT2] = ACTIONS(103),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(107),
    [sym_identifier] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(107),
    [anon_sym_COMMA] = ACTIONS(107),
    [anon_sym_RPAREN] = ACTIONS(107),
    [aux_sym__xharbour_item_token1] = ACTIONS(107),
    [anon_sym_STAR] = ACTIONS(107),
    [sym_table_keyword] = ACTIONS(107),
    [sym_exec_view_keyword] = ACTIONS(107),
    [sym_bindvar_keyword] = ACTIONS(107),
    [sym_xharbour_function] = ACTIONS(107),
    [sym_keyword] = ACTIONS(107),
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
    [anon_sym_SEMI] = ACTIONS(107),
    [anon_sym_DOT2] = ACTIONS(107),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(111),
    [sym_identifier] = ACTIONS(113),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_COMMA] = ACTIONS(111),
    [anon_sym_RPAREN] = ACTIONS(111),
    [aux_sym__xharbour_item_token1] = ACTIONS(111),
    [anon_sym_STAR] = ACTIONS(111),
    [sym_table_keyword] = ACTIONS(111),
    [sym_exec_view_keyword] = ACTIONS(111),
    [sym_bindvar_keyword] = ACTIONS(111),
    [sym_xharbour_function] = ACTIONS(111),
    [sym_keyword] = ACTIONS(111),
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
    [anon_sym_SEMI] = ACTIONS(111),
    [anon_sym_DOT2] = ACTIONS(111),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(115),
    [sym_identifier] = ACTIONS(117),
    [anon_sym_LPAREN] = ACTIONS(115),
    [anon_sym_COMMA] = ACTIONS(115),
    [anon_sym_RPAREN] = ACTIONS(115),
    [aux_sym__xharbour_item_token1] = ACTIONS(115),
    [anon_sym_STAR] = ACTIONS(115),
    [sym_table_keyword] = ACTIONS(115),
    [sym_exec_view_keyword] = ACTIONS(115),
    [sym_bindvar_keyword] = ACTIONS(115),
    [sym_xharbour_function] = ACTIONS(115),
    [sym_keyword] = ACTIONS(115),
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
    STATE(19), 3,
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
    STATE(21), 3,
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
    STATE(21), 3,
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
    STATE(21), 3,
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
  [159] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym__xharbour_item_token1,
    ACTIONS(171), 1,
      sym_string,
    STATE(27), 1,
      sym__exec_view_argument,
    STATE(31), 1,
      sym_quoted_identifier,
  [175] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym__xharbour_item_token1,
    ACTIONS(173), 1,
      sym_string,
    STATE(31), 1,
      sym_quoted_identifier,
    STATE(32), 1,
      sym__exec_view_argument,
  [191] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_COMMA,
    ACTIONS(177), 1,
      anon_sym_RPAREN,
    STATE(28), 1,
      aux_sym_exec_view_repeat1,
  [204] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_COMMA,
    ACTIONS(179), 1,
      anon_sym_RPAREN,
    STATE(29), 1,
      aux_sym_exec_view_repeat1,
  [217] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_COMMA,
    ACTIONS(184), 1,
      anon_sym_RPAREN,
    STATE(29), 1,
      aux_sym_exec_view_repeat1,
  [230] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 2,
      anon_sym_STAR,
      sym_identifier,
  [238] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [246] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [254] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      sym_identifier,
    ACTIONS(192), 1,
      anon_sym_LPAREN2,
  [264] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      sym_identifier,
  [271] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      sym_identifier,
  [278] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_LPAREN,
  [285] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_LPAREN2,
  [292] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(17)] = 0,
  [SMALL_STATE(18)] = 24,
  [SMALL_STATE(19)] = 48,
  [SMALL_STATE(20)] = 72,
  [SMALL_STATE(21)] = 96,
  [SMALL_STATE(22)] = 120,
  [SMALL_STATE(23)] = 133,
  [SMALL_STATE(24)] = 146,
  [SMALL_STATE(25)] = 159,
  [SMALL_STATE(26)] = 175,
  [SMALL_STATE(27)] = 191,
  [SMALL_STATE(28)] = 204,
  [SMALL_STATE(29)] = 217,
  [SMALL_STATE(30)] = 230,
  [SMALL_STATE(31)] = 238,
  [SMALL_STATE(32)] = 246,
  [SMALL_STATE(33)] = 254,
  [SMALL_STATE(34)] = 264,
  [SMALL_STATE(35)] = 271,
  [SMALL_STATE(36)] = 278,
  [SMALL_STATE(37)] = 285,
  [SMALL_STATE(38)] = 292,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sql_item, 1, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sql_item, 1, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_identifier, 1, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_identifier, 1, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bind_declaration, 2, 0, 2),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bind_declaration, 2, 0, 2),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 2, 0, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 2, 0, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 2, 0, 3),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 2, 0, 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_punctuation, 1, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_punctuation, 1, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_declaration, 3, 0, 4),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_declaration, 3, 0, 4),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xharbour_expression, 3, 0, 3),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xharbour_expression, 3, 0, 3),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 3, 0, 6),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_name, 3, 0, 6),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec_view, 4, 0, 7),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exec_view, 4, 0, 7),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xharbour_expression, 4, 0, 3),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xharbour_expression, 4, 0, 3),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec_view, 5, 0, 7),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exec_view, 5, 0, 7),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xharbour_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_xharbour_expression_repeat1, 2, 0, 0),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xharbour_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xharbour_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xharbour_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xharbour_item, 1, 0, 5),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__xharbour_item, 1, 0, 5),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xharbour_group, 2, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xharbour_group, 2, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xharbour_group, 3, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xharbour_group, 3, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exec_view_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exec_view_repeat1, 2, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exec_view_argument, 1, 0, 5),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [202] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
