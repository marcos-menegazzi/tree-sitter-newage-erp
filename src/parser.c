#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 48
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 53
#define ALIAS_COUNT 0
#define TOKEN_COUNT 34
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 7

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_COMMA = 2,
  anon_sym_LPAREN = 3,
  anon_sym_RPAREN = 4,
  sym_static_modifier = 5,
  sym_user_modifier = 6,
  sym_function_keyword = 7,
  sym_procedure_keyword = 8,
  sym_method_keyword = 9,
  sym_local_keyword = 10,
  sym_private_keyword = 11,
  sym_public_keyword = 12,
  sym_param_keyword = 13,
  sym_if_keyword = 14,
  sym_do_keyword = 15,
  sym_while_keyword = 16,
  sym_for_keyword = 17,
  sym_endif_keyword = 18,
  sym_enddo_keyword = 19,
  sym_next_keyword = 20,
  sym_boolean = 21,
  sym_nil = 22,
  sym_number = 23,
  anon_sym_SQUOTE = 24,
  aux_sym_string_token1 = 25,
  anon_sym_SQUOTE_SQUOTE = 26,
  anon_sym_DQUOTE = 27,
  aux_sym_string_token2 = 28,
  anon_sym_DQUOTE_DQUOTE = 29,
  sym_comment = 30,
  sym_operator = 31,
  sym_punctuation = 32,
  sym_newline = 33,
  sym_source_file = 34,
  sym_function_definition = 35,
  sym_procedure_definition = 36,
  sym_method_definition = 37,
  sym_declaration_statement = 38,
  sym_declaration_keyword = 39,
  sym_if_opener = 40,
  sym_do_while_opener = 41,
  sym_for_opener = 42,
  sym_endif = 43,
  sym_enddo = 44,
  sym_next = 45,
  sym_call = 46,
  sym_string = 47,
  aux_sym_source_file_repeat1 = 48,
  aux_sym_declaration_statement_repeat1 = 49,
  aux_sym_call_repeat1 = 50,
  aux_sym_string_repeat1 = 51,
  aux_sym_string_repeat2 = 52,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_COMMA] = ",",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_static_modifier] = "static_modifier",
  [sym_user_modifier] = "user_modifier",
  [sym_function_keyword] = "function_keyword",
  [sym_procedure_keyword] = "procedure_keyword",
  [sym_method_keyword] = "method_keyword",
  [sym_local_keyword] = "local_keyword",
  [sym_private_keyword] = "private_keyword",
  [sym_public_keyword] = "public_keyword",
  [sym_param_keyword] = "param_keyword",
  [sym_if_keyword] = "if_keyword",
  [sym_do_keyword] = "do_keyword",
  [sym_while_keyword] = "while_keyword",
  [sym_for_keyword] = "for_keyword",
  [sym_endif_keyword] = "endif_keyword",
  [sym_enddo_keyword] = "enddo_keyword",
  [sym_next_keyword] = "next_keyword",
  [sym_boolean] = "boolean",
  [sym_nil] = "nil",
  [sym_number] = "number",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_SQUOTE_SQUOTE] = "''",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token2] = "string_token2",
  [anon_sym_DQUOTE_DQUOTE] = "\"\"",
  [sym_comment] = "comment",
  [sym_operator] = "operator",
  [sym_punctuation] = "punctuation",
  [sym_newline] = "newline",
  [sym_source_file] = "source_file",
  [sym_function_definition] = "function_definition",
  [sym_procedure_definition] = "procedure_definition",
  [sym_method_definition] = "method_definition",
  [sym_declaration_statement] = "declaration_statement",
  [sym_declaration_keyword] = "declaration_keyword",
  [sym_if_opener] = "if_opener",
  [sym_do_while_opener] = "do_while_opener",
  [sym_for_opener] = "for_opener",
  [sym_endif] = "endif",
  [sym_enddo] = "enddo",
  [sym_next] = "next",
  [sym_call] = "call",
  [sym_string] = "string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_declaration_statement_repeat1] = "declaration_statement_repeat1",
  [aux_sym_call_repeat1] = "call_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_repeat2] = "string_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_static_modifier] = sym_static_modifier,
  [sym_user_modifier] = sym_user_modifier,
  [sym_function_keyword] = sym_function_keyword,
  [sym_procedure_keyword] = sym_procedure_keyword,
  [sym_method_keyword] = sym_method_keyword,
  [sym_local_keyword] = sym_local_keyword,
  [sym_private_keyword] = sym_private_keyword,
  [sym_public_keyword] = sym_public_keyword,
  [sym_param_keyword] = sym_param_keyword,
  [sym_if_keyword] = sym_if_keyword,
  [sym_do_keyword] = sym_do_keyword,
  [sym_while_keyword] = sym_while_keyword,
  [sym_for_keyword] = sym_for_keyword,
  [sym_endif_keyword] = sym_endif_keyword,
  [sym_enddo_keyword] = sym_enddo_keyword,
  [sym_next_keyword] = sym_next_keyword,
  [sym_boolean] = sym_boolean,
  [sym_nil] = sym_nil,
  [sym_number] = sym_number,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_SQUOTE_SQUOTE] = anon_sym_SQUOTE_SQUOTE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [anon_sym_DQUOTE_DQUOTE] = anon_sym_DQUOTE_DQUOTE,
  [sym_comment] = sym_comment,
  [sym_operator] = sym_operator,
  [sym_punctuation] = sym_punctuation,
  [sym_newline] = sym_newline,
  [sym_source_file] = sym_source_file,
  [sym_function_definition] = sym_function_definition,
  [sym_procedure_definition] = sym_procedure_definition,
  [sym_method_definition] = sym_method_definition,
  [sym_declaration_statement] = sym_declaration_statement,
  [sym_declaration_keyword] = sym_declaration_keyword,
  [sym_if_opener] = sym_if_opener,
  [sym_do_while_opener] = sym_do_while_opener,
  [sym_for_opener] = sym_for_opener,
  [sym_endif] = sym_endif,
  [sym_enddo] = sym_enddo,
  [sym_next] = sym_next,
  [sym_call] = sym_call,
  [sym_string] = sym_string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_declaration_statement_repeat1] = aux_sym_declaration_statement_repeat1,
  [aux_sym_call_repeat1] = aux_sym_call_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_string_repeat2] = aux_sym_string_repeat2,
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
  [anon_sym_COMMA] = {
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
  [sym_static_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_user_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_function_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_procedure_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_method_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_local_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_private_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_public_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_param_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_if_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_do_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_while_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_for_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_endif_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_enddo_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_next_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_nil] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
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
  [sym_newline] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_procedure_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_method_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_if_opener] = {
    .visible = true,
    .named = true,
  },
  [sym_do_while_opener] = {
    .visible = true,
    .named = true,
  },
  [sym_for_opener] = {
    .visible = true,
    .named = true,
  },
  [sym_endif] = {
    .visible = true,
    .named = true,
  },
  [sym_enddo] = {
    .visible = true,
    .named = true,
  },
  [sym_next] = {
    .visible = true,
    .named = true,
  },
  [sym_call] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_declaration_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_call_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat2] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_function = 1,
  field_kind = 2,
  field_name = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_function] = "function",
  [field_kind] = "kind",
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 3},
  [6] = {.index = 8, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_kind, 0},
    {field_name, 1},
  [3] =
    {field_name, 2},
  [4] =
    {field_function, 0},
  [5] =
    {field_kind, 0},
    {field_name, 1},
    {field_name, 2, .inherited = true},
  [8] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
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
  [26] = 20,
  [27] = 17,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 28,
  [35] = 30,
  [36] = 31,
  [37] = 29,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(18);
      ADVANCE_MAP(
        '\n', 45,
        '\r', 1,
        '!', 8,
        '"', 32,
        '&', 4,
        '\'', 27,
        '(', 20,
        ')', 21,
        '*', 38,
        ',', 19,
        '-', 41,
        '.', 42,
        '/', 39,
        ':', 40,
        '<', 43,
        '=', 40,
        '>', 40,
        '%', 37,
        '+', 37,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(0);
      if (lookahead == ';' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(45);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 45,
        '\r', 1,
        '!', 8,
        '"', 31,
        '\'', 26,
        ')', 21,
        '-', 41,
        '.', 42,
        ':', 40,
        '<', 43,
        '=', 40,
        '>', 40,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(2);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/') ADVANCE(37);
      if (('(' <= lookahead && lookahead <= ',') ||
          lookahead == ';' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(34);
      END_STATE();
    case 4:
      if (lookahead == '&') ADVANCE(36);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(29);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(37);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(22);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(37);
      END_STATE();
    case 9:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(6);
      END_STATE();
    case 10:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(6);
      END_STATE();
    case 13:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(6);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 15:
      if (eof) ADVANCE(18);
      ADVANCE_MAP(
        '\n', 45,
        '\r', 1,
        '!', 8,
        '"', 31,
        '&', 4,
        '\'', 26,
        '(', 20,
        '*', 38,
        '-', 41,
        '.', 42,
        '/', 39,
        ':', 40,
        '<', 43,
        '=', 40,
        '>', 40,
        '%', 37,
        '+', 37,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(15);
      if ((')' <= lookahead && lookahead <= ',') ||
          lookahead == ';' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 16:
      if (eof) ADVANCE(18);
      ADVANCE_MAP(
        '\n', 45,
        '\r', 1,
        '!', 8,
        '"', 31,
        '&', 4,
        '\'', 26,
        '*', 38,
        ',', 19,
        '-', 41,
        '.', 42,
        '/', 39,
        ':', 40,
        '<', 43,
        '=', 40,
        '>', 40,
        '%', 37,
        '+', 37,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(16);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 17:
      if (eof) ADVANCE(18);
      ADVANCE_MAP(
        '\n', 45,
        '\r', 1,
        '!', 8,
        '"', 31,
        '&', 4,
        '\'', 26,
        '*', 38,
        '-', 41,
        '.', 42,
        '/', 39,
        ':', 40,
        '<', 43,
        '=', 40,
        '>', 40,
        '%', 37,
        '+', 37,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(17);
      if (('(' <= lookahead && lookahead <= ',') ||
          lookahead == ';' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_boolean);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(30);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != '\'') ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\'') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(35);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_operator);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '*') ADVANCE(36);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '/') ADVANCE(36);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '=') ADVANCE(37);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '>') ADVANCE(37);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_operator);
      ADVANCE_MAP(
        'A', 10,
        'a', 10,
        'F', 7,
        'f', 7,
        'N', 11,
        'n', 11,
        'O', 12,
        'o', 12,
        'T', 7,
        't', 7,
      );
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '=' ||
          lookahead == '>') ADVANCE(37);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_punctuation);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_newline);
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
        'D', 1,
        'd', 1,
        'E', 2,
        'e', 2,
        'F', 3,
        'f', 3,
        'I', 4,
        'i', 4,
        'L', 5,
        'l', 5,
        'M', 6,
        'm', 6,
        'N', 7,
        'n', 7,
        'P', 8,
        'p', 8,
        'S', 9,
        's', 9,
        'U', 10,
        'u', 10,
        'W', 11,
        'w', 11,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(12);
      END_STATE();
    case 2:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 3:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(14);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 4:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(16);
      END_STATE();
    case 5:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 6:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 7:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(19);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(20);
      END_STATE();
    case 8:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(21);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(22);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 9:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(24);
      END_STATE();
    case 10:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(25);
      END_STATE();
    case 11:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(26);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_do_keyword);
      END_STATE();
    case 13:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(27);
      END_STATE();
    case 14:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 15:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_if_keyword);
      END_STATE();
    case 17:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(30);
      END_STATE();
    case 18:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(31);
      END_STATE();
    case 19:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(32);
      END_STATE();
    case 20:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 21:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 22:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(35);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 23:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(37);
      END_STATE();
    case 24:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 25:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 26:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 27:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(41);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_for_keyword);
      END_STATE();
    case 29:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(43);
      END_STATE();
    case 30:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 31:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(45);
      END_STATE();
    case 32:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(46);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_nil);
      END_STATE();
    case 34:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 35:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(48);
      END_STATE();
    case 36:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(49);
      END_STATE();
    case 37:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 38:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(51);
      END_STATE();
    case 39:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 40:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 41:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 42:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(55);
      END_STATE();
    case 43:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(56);
      END_STATE();
    case 44:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 45:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_next_keyword);
      END_STATE();
    case 47:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(59);
      END_STATE();
    case 48:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 49:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 50:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 51:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_user_modifier);
      END_STATE();
    case 53:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_enddo_keyword);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_endif_keyword);
      END_STATE();
    case 56:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_local_keyword);
      END_STATE();
    case 58:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(66);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_param_keyword);
      END_STATE();
    case 60:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(67);
      END_STATE();
    case 61:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(68);
      END_STATE();
    case 62:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(69);
      END_STATE();
    case 63:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(70);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_while_keyword);
      END_STATE();
    case 65:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_method_keyword);
      END_STATE();
    case 67:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 68:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(73);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_public_keyword);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_static_modifier);
      END_STATE();
    case 71:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_private_keyword);
      END_STATE();
    case 73:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_function_keyword);
      END_STATE();
    case 75:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_procedure_keyword);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 17},
  [2] = {.lex_state = 17},
  [3] = {.lex_state = 17},
  [4] = {.lex_state = 16},
  [5] = {.lex_state = 16},
  [6] = {.lex_state = 16},
  [7] = {.lex_state = 15},
  [8] = {.lex_state = 16},
  [9] = {.lex_state = 17},
  [10] = {.lex_state = 17},
  [11] = {.lex_state = 17},
  [12] = {.lex_state = 17},
  [13] = {.lex_state = 17},
  [14] = {.lex_state = 17},
  [15] = {.lex_state = 17},
  [16] = {.lex_state = 17},
  [17] = {.lex_state = 17},
  [18] = {.lex_state = 17},
  [19] = {.lex_state = 17},
  [20] = {.lex_state = 17},
  [21] = {.lex_state = 17},
  [22] = {.lex_state = 17},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_static_modifier] = ACTIONS(1),
    [sym_user_modifier] = ACTIONS(1),
    [sym_function_keyword] = ACTIONS(1),
    [sym_procedure_keyword] = ACTIONS(1),
    [sym_method_keyword] = ACTIONS(1),
    [sym_local_keyword] = ACTIONS(1),
    [sym_private_keyword] = ACTIONS(1),
    [sym_public_keyword] = ACTIONS(1),
    [sym_param_keyword] = ACTIONS(1),
    [sym_if_keyword] = ACTIONS(1),
    [sym_do_keyword] = ACTIONS(1),
    [sym_while_keyword] = ACTIONS(1),
    [sym_for_keyword] = ACTIONS(1),
    [sym_endif_keyword] = ACTIONS(1),
    [sym_enddo_keyword] = ACTIONS(1),
    [sym_next_keyword] = ACTIONS(1),
    [sym_boolean] = ACTIONS(1),
    [sym_nil] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_operator] = ACTIONS(1),
    [sym_punctuation] = ACTIONS(1),
    [sym_newline] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(38),
    [sym_function_definition] = STATE(2),
    [sym_procedure_definition] = STATE(2),
    [sym_method_definition] = STATE(2),
    [sym_declaration_statement] = STATE(2),
    [sym_declaration_keyword] = STATE(39),
    [sym_if_opener] = STATE(2),
    [sym_do_while_opener] = STATE(2),
    [sym_for_opener] = STATE(2),
    [sym_endif] = STATE(2),
    [sym_enddo] = STATE(2),
    [sym_next] = STATE(2),
    [sym_call] = STATE(2),
    [sym_string] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [sym_static_modifier] = ACTIONS(7),
    [sym_user_modifier] = ACTIONS(7),
    [sym_function_keyword] = ACTIONS(9),
    [sym_procedure_keyword] = ACTIONS(11),
    [sym_method_keyword] = ACTIONS(13),
    [sym_local_keyword] = ACTIONS(15),
    [sym_private_keyword] = ACTIONS(15),
    [sym_public_keyword] = ACTIONS(15),
    [sym_param_keyword] = ACTIONS(15),
    [sym_if_keyword] = ACTIONS(17),
    [sym_do_keyword] = ACTIONS(19),
    [sym_for_keyword] = ACTIONS(21),
    [sym_endif_keyword] = ACTIONS(23),
    [sym_enddo_keyword] = ACTIONS(25),
    [sym_next_keyword] = ACTIONS(27),
    [sym_boolean] = ACTIONS(29),
    [sym_nil] = ACTIONS(29),
    [sym_number] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [sym_comment] = ACTIONS(29),
    [sym_operator] = ACTIONS(35),
    [sym_punctuation] = ACTIONS(29),
    [sym_newline] = ACTIONS(29),
  },
  [2] = {
    [sym_function_definition] = STATE(3),
    [sym_procedure_definition] = STATE(3),
    [sym_method_definition] = STATE(3),
    [sym_declaration_statement] = STATE(3),
    [sym_declaration_keyword] = STATE(39),
    [sym_if_opener] = STATE(3),
    [sym_do_while_opener] = STATE(3),
    [sym_for_opener] = STATE(3),
    [sym_endif] = STATE(3),
    [sym_enddo] = STATE(3),
    [sym_next] = STATE(3),
    [sym_call] = STATE(3),
    [sym_string] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(37),
    [sym_identifier] = ACTIONS(5),
    [sym_static_modifier] = ACTIONS(7),
    [sym_user_modifier] = ACTIONS(7),
    [sym_function_keyword] = ACTIONS(9),
    [sym_procedure_keyword] = ACTIONS(11),
    [sym_method_keyword] = ACTIONS(13),
    [sym_local_keyword] = ACTIONS(15),
    [sym_private_keyword] = ACTIONS(15),
    [sym_public_keyword] = ACTIONS(15),
    [sym_param_keyword] = ACTIONS(15),
    [sym_if_keyword] = ACTIONS(17),
    [sym_do_keyword] = ACTIONS(19),
    [sym_for_keyword] = ACTIONS(21),
    [sym_endif_keyword] = ACTIONS(23),
    [sym_enddo_keyword] = ACTIONS(25),
    [sym_next_keyword] = ACTIONS(27),
    [sym_boolean] = ACTIONS(39),
    [sym_nil] = ACTIONS(39),
    [sym_number] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [sym_comment] = ACTIONS(39),
    [sym_operator] = ACTIONS(41),
    [sym_punctuation] = ACTIONS(39),
    [sym_newline] = ACTIONS(39),
  },
  [3] = {
    [sym_function_definition] = STATE(3),
    [sym_procedure_definition] = STATE(3),
    [sym_method_definition] = STATE(3),
    [sym_declaration_statement] = STATE(3),
    [sym_declaration_keyword] = STATE(39),
    [sym_if_opener] = STATE(3),
    [sym_do_while_opener] = STATE(3),
    [sym_for_opener] = STATE(3),
    [sym_endif] = STATE(3),
    [sym_enddo] = STATE(3),
    [sym_next] = STATE(3),
    [sym_call] = STATE(3),
    [sym_string] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(43),
    [sym_identifier] = ACTIONS(45),
    [sym_static_modifier] = ACTIONS(48),
    [sym_user_modifier] = ACTIONS(48),
    [sym_function_keyword] = ACTIONS(51),
    [sym_procedure_keyword] = ACTIONS(54),
    [sym_method_keyword] = ACTIONS(57),
    [sym_local_keyword] = ACTIONS(60),
    [sym_private_keyword] = ACTIONS(60),
    [sym_public_keyword] = ACTIONS(60),
    [sym_param_keyword] = ACTIONS(60),
    [sym_if_keyword] = ACTIONS(63),
    [sym_do_keyword] = ACTIONS(66),
    [sym_for_keyword] = ACTIONS(69),
    [sym_endif_keyword] = ACTIONS(72),
    [sym_enddo_keyword] = ACTIONS(75),
    [sym_next_keyword] = ACTIONS(78),
    [sym_boolean] = ACTIONS(81),
    [sym_nil] = ACTIONS(81),
    [sym_number] = ACTIONS(81),
    [anon_sym_SQUOTE] = ACTIONS(84),
    [anon_sym_DQUOTE] = ACTIONS(87),
    [sym_comment] = ACTIONS(81),
    [sym_operator] = ACTIONS(90),
    [sym_punctuation] = ACTIONS(81),
    [sym_newline] = ACTIONS(81),
  },
  [4] = {
    [aux_sym_declaration_statement_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(93),
    [sym_identifier] = ACTIONS(95),
    [anon_sym_COMMA] = ACTIONS(97),
    [sym_static_modifier] = ACTIONS(93),
    [sym_user_modifier] = ACTIONS(93),
    [sym_function_keyword] = ACTIONS(93),
    [sym_procedure_keyword] = ACTIONS(93),
    [sym_method_keyword] = ACTIONS(93),
    [sym_local_keyword] = ACTIONS(93),
    [sym_private_keyword] = ACTIONS(93),
    [sym_public_keyword] = ACTIONS(93),
    [sym_param_keyword] = ACTIONS(93),
    [sym_if_keyword] = ACTIONS(93),
    [sym_do_keyword] = ACTIONS(93),
    [sym_for_keyword] = ACTIONS(93),
    [sym_endif_keyword] = ACTIONS(93),
    [sym_enddo_keyword] = ACTIONS(93),
    [sym_next_keyword] = ACTIONS(93),
    [sym_boolean] = ACTIONS(93),
    [sym_nil] = ACTIONS(93),
    [sym_number] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(93),
    [sym_comment] = ACTIONS(93),
    [sym_operator] = ACTIONS(95),
    [sym_punctuation] = ACTIONS(95),
    [sym_newline] = ACTIONS(93),
  },
  [5] = {
    [aux_sym_declaration_statement_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(99),
    [sym_identifier] = ACTIONS(101),
    [anon_sym_COMMA] = ACTIONS(97),
    [sym_static_modifier] = ACTIONS(99),
    [sym_user_modifier] = ACTIONS(99),
    [sym_function_keyword] = ACTIONS(99),
    [sym_procedure_keyword] = ACTIONS(99),
    [sym_method_keyword] = ACTIONS(99),
    [sym_local_keyword] = ACTIONS(99),
    [sym_private_keyword] = ACTIONS(99),
    [sym_public_keyword] = ACTIONS(99),
    [sym_param_keyword] = ACTIONS(99),
    [sym_if_keyword] = ACTIONS(99),
    [sym_do_keyword] = ACTIONS(99),
    [sym_for_keyword] = ACTIONS(99),
    [sym_endif_keyword] = ACTIONS(99),
    [sym_enddo_keyword] = ACTIONS(99),
    [sym_next_keyword] = ACTIONS(99),
    [sym_boolean] = ACTIONS(99),
    [sym_nil] = ACTIONS(99),
    [sym_number] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(99),
    [sym_comment] = ACTIONS(99),
    [sym_operator] = ACTIONS(101),
    [sym_punctuation] = ACTIONS(101),
    [sym_newline] = ACTIONS(99),
  },
  [6] = {
    [aux_sym_declaration_statement_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(103),
    [sym_identifier] = ACTIONS(105),
    [anon_sym_COMMA] = ACTIONS(107),
    [sym_static_modifier] = ACTIONS(103),
    [sym_user_modifier] = ACTIONS(103),
    [sym_function_keyword] = ACTIONS(103),
    [sym_procedure_keyword] = ACTIONS(103),
    [sym_method_keyword] = ACTIONS(103),
    [sym_local_keyword] = ACTIONS(103),
    [sym_private_keyword] = ACTIONS(103),
    [sym_public_keyword] = ACTIONS(103),
    [sym_param_keyword] = ACTIONS(103),
    [sym_if_keyword] = ACTIONS(103),
    [sym_do_keyword] = ACTIONS(103),
    [sym_for_keyword] = ACTIONS(103),
    [sym_endif_keyword] = ACTIONS(103),
    [sym_enddo_keyword] = ACTIONS(103),
    [sym_next_keyword] = ACTIONS(103),
    [sym_boolean] = ACTIONS(103),
    [sym_nil] = ACTIONS(103),
    [sym_number] = ACTIONS(103),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [anon_sym_DQUOTE] = ACTIONS(103),
    [sym_comment] = ACTIONS(103),
    [sym_operator] = ACTIONS(105),
    [sym_punctuation] = ACTIONS(105),
    [sym_newline] = ACTIONS(103),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(110),
    [sym_identifier] = ACTIONS(112),
    [anon_sym_LPAREN] = ACTIONS(114),
    [sym_static_modifier] = ACTIONS(110),
    [sym_user_modifier] = ACTIONS(110),
    [sym_function_keyword] = ACTIONS(110),
    [sym_procedure_keyword] = ACTIONS(110),
    [sym_method_keyword] = ACTIONS(110),
    [sym_local_keyword] = ACTIONS(110),
    [sym_private_keyword] = ACTIONS(110),
    [sym_public_keyword] = ACTIONS(110),
    [sym_param_keyword] = ACTIONS(110),
    [sym_if_keyword] = ACTIONS(110),
    [sym_do_keyword] = ACTIONS(110),
    [sym_for_keyword] = ACTIONS(110),
    [sym_endif_keyword] = ACTIONS(110),
    [sym_enddo_keyword] = ACTIONS(110),
    [sym_next_keyword] = ACTIONS(110),
    [sym_boolean] = ACTIONS(110),
    [sym_nil] = ACTIONS(110),
    [sym_number] = ACTIONS(110),
    [anon_sym_SQUOTE] = ACTIONS(110),
    [anon_sym_DQUOTE] = ACTIONS(110),
    [sym_comment] = ACTIONS(110),
    [sym_operator] = ACTIONS(112),
    [sym_punctuation] = ACTIONS(112),
    [sym_newline] = ACTIONS(110),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(116),
    [sym_identifier] = ACTIONS(118),
    [anon_sym_COMMA] = ACTIONS(116),
    [sym_static_modifier] = ACTIONS(116),
    [sym_user_modifier] = ACTIONS(116),
    [sym_function_keyword] = ACTIONS(116),
    [sym_procedure_keyword] = ACTIONS(116),
    [sym_method_keyword] = ACTIONS(116),
    [sym_local_keyword] = ACTIONS(116),
    [sym_private_keyword] = ACTIONS(116),
    [sym_public_keyword] = ACTIONS(116),
    [sym_param_keyword] = ACTIONS(116),
    [sym_if_keyword] = ACTIONS(116),
    [sym_do_keyword] = ACTIONS(116),
    [sym_for_keyword] = ACTIONS(116),
    [sym_endif_keyword] = ACTIONS(116),
    [sym_enddo_keyword] = ACTIONS(116),
    [sym_next_keyword] = ACTIONS(116),
    [sym_boolean] = ACTIONS(116),
    [sym_nil] = ACTIONS(116),
    [sym_number] = ACTIONS(116),
    [anon_sym_SQUOTE] = ACTIONS(116),
    [anon_sym_DQUOTE] = ACTIONS(116),
    [sym_comment] = ACTIONS(116),
    [sym_operator] = ACTIONS(118),
    [sym_punctuation] = ACTIONS(118),
    [sym_newline] = ACTIONS(116),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(122), 2,
      sym_identifier,
      sym_operator,
    ACTIONS(120), 24,
      ts_builtin_sym_end,
      sym_static_modifier,
      sym_user_modifier,
      sym_function_keyword,
      sym_procedure_keyword,
      sym_method_keyword,
      sym_local_keyword,
      sym_private_keyword,
      sym_public_keyword,
      sym_param_keyword,
      sym_if_keyword,
      sym_do_keyword,
      sym_for_keyword,
      sym_endif_keyword,
      sym_enddo_keyword,
      sym_next_keyword,
      sym_boolean,
      sym_nil,
      sym_number,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_comment,
      sym_punctuation,
      sym_newline,
  [31] = 2,
    ACTIONS(126), 2,
      sym_identifier,
      sym_operator,
    ACTIONS(124), 24,
      ts_builtin_sym_end,
      sym_static_modifier,
      sym_user_modifier,
      sym_function_keyword,
      sym_procedure_keyword,
      sym_method_keyword,
      sym_local_keyword,
      sym_private_keyword,
      sym_public_keyword,
      sym_param_keyword,
      sym_if_keyword,
      sym_do_keyword,
      sym_for_keyword,
      sym_endif_keyword,
      sym_enddo_keyword,
      sym_next_keyword,
      sym_boolean,
      sym_nil,
      sym_number,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_comment,
      sym_punctuation,
      sym_newline,
  [62] = 2,
    ACTIONS(130), 2,
      sym_identifier,
      sym_operator,
    ACTIONS(128), 24,
      ts_builtin_sym_end,
      sym_static_modifier,
      sym_user_modifier,
      sym_function_keyword,
      sym_procedure_keyword,
      sym_method_keyword,
      sym_local_keyword,
      sym_private_keyword,
      sym_public_keyword,
      sym_param_keyword,
      sym_if_keyword,
      sym_do_keyword,
      sym_for_keyword,
      sym_endif_keyword,
      sym_enddo_keyword,
      sym_next_keyword,
      sym_boolean,
      sym_nil,
      sym_number,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_comment,
      sym_punctuation,
      sym_newline,
  [93] = 2,
    ACTIONS(134), 2,
      sym_identifier,
      sym_operator,
    ACTIONS(132), 24,
      ts_builtin_sym_end,
      sym_static_modifier,
      sym_user_modifier,
      sym_function_keyword,
      sym_procedure_keyword,
      sym_method_keyword,
      sym_local_keyword,
      sym_private_keyword,
      sym_public_keyword,
      sym_param_keyword,
      sym_if_keyword,
      sym_do_keyword,
      sym_for_keyword,
      sym_endif_keyword,
      sym_enddo_keyword,
      sym_next_keyword,
      sym_boolean,
      sym_nil,
      sym_number,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_comment,
      sym_punctuation,
      sym_newline,
  [124] = 2,
    ACTIONS(138), 2,
      sym_identifier,
      sym_operator,
    ACTIONS(136), 24,
      ts_builtin_sym_end,
      sym_static_modifier,
      sym_user_modifier,
      sym_function_keyword,
      sym_procedure_keyword,
      sym_method_keyword,
      sym_local_keyword,
      sym_private_keyword,
      sym_public_keyword,
      sym_param_keyword,
      sym_if_keyword,
      sym_do_keyword,
      sym_for_keyword,
      sym_endif_keyword,
      sym_enddo_keyword,
      sym_next_keyword,
      sym_boolean,
      sym_nil,
      sym_number,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_comment,
      sym_punctuation,
      sym_newline,
  [155] = 2,
    ACTIONS(142), 2,
      sym_identifier,
      sym_operator,
    ACTIONS(140), 24,
      ts_builtin_sym_end,
      sym_static_modifier,
      sym_user_modifier,
      sym_function_keyword,
      sym_procedure_keyword,
      sym_method_keyword,
      sym_local_keyword,
      sym_private_keyword,
      sym_public_keyword,
      sym_param_keyword,
      sym_if_keyword,
      sym_do_keyword,
      sym_for_keyword,
      sym_endif_keyword,
      sym_enddo_keyword,
      sym_next_keyword,
      sym_boolean,
      sym_nil,
      sym_number,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_comment,
      sym_punctuation,
      sym_newline,
  [186] = 2,
    ACTIONS(146), 2,
      sym_identifier,
      sym_operator,
    ACTIONS(144), 24,
      ts_builtin_sym_end,
      sym_static_modifier,
      sym_user_modifier,
      sym_function_keyword,
      sym_procedure_keyword,
      sym_method_keyword,
      sym_local_keyword,
      sym_private_keyword,
      sym_public_keyword,
      sym_param_keyword,
      sym_if_keyword,
      sym_do_keyword,
      sym_for_keyword,
      sym_endif_keyword,
      sym_enddo_keyword,
      sym_next_keyword,
      sym_boolean,
      sym_nil,
      sym_number,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_comment,
      sym_punctuation,
      sym_newline,
  [217] = 2,
    ACTIONS(150), 2,
      sym_identifier,
      sym_operator,
    ACTIONS(148), 24,
      ts_builtin_sym_end,
      sym_static_modifier,
      sym_user_modifier,
      sym_function_keyword,
      sym_procedure_keyword,
      sym_method_keyword,
      sym_local_keyword,
      sym_private_keyword,
      sym_public_keyword,
      sym_param_keyword,
      sym_if_keyword,
      sym_do_keyword,
      sym_for_keyword,
      sym_endif_keyword,
      sym_enddo_keyword,
      sym_next_keyword,
      sym_boolean,
      sym_nil,
      sym_number,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_comment,
      sym_punctuation,
      sym_newline,
  [248] = 2,
    ACTIONS(154), 2,
      sym_identifier,
      sym_operator,
    ACTIONS(152), 24,
      ts_builtin_sym_end,
      sym_static_modifier,
      sym_user_modifier,
      sym_function_keyword,
      sym_procedure_keyword,
      sym_method_keyword,
      sym_local_keyword,
      sym_private_keyword,
      sym_public_keyword,
      sym_param_keyword,
      sym_if_keyword,
      sym_do_keyword,
      sym_for_keyword,
      sym_endif_keyword,
      sym_enddo_keyword,
      sym_next_keyword,
      sym_boolean,
      sym_nil,
      sym_number,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_comment,
      sym_punctuation,
      sym_newline,
  [279] = 2,
    ACTIONS(158), 2,
      sym_identifier,
      sym_operator,
    ACTIONS(156), 24,
      ts_builtin_sym_end,
      sym_static_modifier,
      sym_user_modifier,
      sym_function_keyword,
      sym_procedure_keyword,
      sym_method_keyword,
      sym_local_keyword,
      sym_private_keyword,
      sym_public_keyword,
      sym_param_keyword,
      sym_if_keyword,
      sym_do_keyword,
      sym_for_keyword,
      sym_endif_keyword,
      sym_enddo_keyword,
      sym_next_keyword,
      sym_boolean,
      sym_nil,
      sym_number,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_comment,
      sym_punctuation,
      sym_newline,
  [310] = 2,
    ACTIONS(162), 2,
      sym_identifier,
      sym_operator,
    ACTIONS(160), 24,
      ts_builtin_sym_end,
      sym_static_modifier,
      sym_user_modifier,
      sym_function_keyword,
      sym_procedure_keyword,
      sym_method_keyword,
      sym_local_keyword,
      sym_private_keyword,
      sym_public_keyword,
      sym_param_keyword,
      sym_if_keyword,
      sym_do_keyword,
      sym_for_keyword,
      sym_endif_keyword,
      sym_enddo_keyword,
      sym_next_keyword,
      sym_boolean,
      sym_nil,
      sym_number,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_comment,
      sym_punctuation,
      sym_newline,
  [341] = 2,
    ACTIONS(166), 2,
      sym_identifier,
      sym_operator,
    ACTIONS(164), 24,
      ts_builtin_sym_end,
      sym_static_modifier,
      sym_user_modifier,
      sym_function_keyword,
      sym_procedure_keyword,
      sym_method_keyword,
      sym_local_keyword,
      sym_private_keyword,
      sym_public_keyword,
      sym_param_keyword,
      sym_if_keyword,
      sym_do_keyword,
      sym_for_keyword,
      sym_endif_keyword,
      sym_enddo_keyword,
      sym_next_keyword,
      sym_boolean,
      sym_nil,
      sym_number,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_comment,
      sym_punctuation,
      sym_newline,
  [372] = 2,
    ACTIONS(170), 2,
      sym_identifier,
      sym_operator,
    ACTIONS(168), 24,
      ts_builtin_sym_end,
      sym_static_modifier,
      sym_user_modifier,
      sym_function_keyword,
      sym_procedure_keyword,
      sym_method_keyword,
      sym_local_keyword,
      sym_private_keyword,
      sym_public_keyword,
      sym_param_keyword,
      sym_if_keyword,
      sym_do_keyword,
      sym_for_keyword,
      sym_endif_keyword,
      sym_enddo_keyword,
      sym_next_keyword,
      sym_boolean,
      sym_nil,
      sym_number,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_comment,
      sym_punctuation,
      sym_newline,
  [403] = 2,
    ACTIONS(174), 2,
      sym_identifier,
      sym_operator,
    ACTIONS(172), 24,
      ts_builtin_sym_end,
      sym_static_modifier,
      sym_user_modifier,
      sym_function_keyword,
      sym_procedure_keyword,
      sym_method_keyword,
      sym_local_keyword,
      sym_private_keyword,
      sym_public_keyword,
      sym_param_keyword,
      sym_if_keyword,
      sym_do_keyword,
      sym_for_keyword,
      sym_endif_keyword,
      sym_enddo_keyword,
      sym_next_keyword,
      sym_boolean,
      sym_nil,
      sym_number,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_comment,
      sym_punctuation,
      sym_newline,
  [434] = 6,
    ACTIONS(178), 1,
      anon_sym_RPAREN,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    ACTIONS(184), 1,
      anon_sym_DQUOTE,
    STATE(24), 2,
      sym_string,
      aux_sym_call_repeat1,
    ACTIONS(176), 3,
      sym_identifier,
      sym_operator,
      sym_punctuation,
    ACTIONS(180), 4,
      sym_boolean,
      sym_nil,
      sym_number,
      sym_newline,
  [459] = 6,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    ACTIONS(184), 1,
      anon_sym_DQUOTE,
    ACTIONS(188), 1,
      anon_sym_RPAREN,
    STATE(25), 2,
      sym_string,
      aux_sym_call_repeat1,
    ACTIONS(186), 3,
      sym_identifier,
      sym_operator,
      sym_punctuation,
    ACTIONS(190), 4,
      sym_boolean,
      sym_nil,
      sym_number,
      sym_newline,
  [484] = 6,
    ACTIONS(195), 1,
      anon_sym_RPAREN,
    ACTIONS(200), 1,
      anon_sym_SQUOTE,
    ACTIONS(203), 1,
      anon_sym_DQUOTE,
    STATE(25), 2,
      sym_string,
      aux_sym_call_repeat1,
    ACTIONS(192), 3,
      sym_identifier,
      sym_operator,
      sym_punctuation,
    ACTIONS(197), 4,
      sym_boolean,
      sym_nil,
      sym_number,
      sym_newline,
  [509] = 2,
    ACTIONS(166), 3,
      sym_identifier,
      sym_operator,
      sym_punctuation,
    ACTIONS(164), 7,
      anon_sym_RPAREN,
      sym_boolean,
      sym_nil,
      sym_number,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_newline,
  [524] = 2,
    ACTIONS(154), 3,
      sym_identifier,
      sym_operator,
      sym_punctuation,
    ACTIONS(152), 7,
      anon_sym_RPAREN,
      sym_boolean,
      sym_nil,
      sym_number,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_newline,
  [539] = 4,
    ACTIONS(206), 1,
      anon_sym_SQUOTE,
    ACTIONS(208), 1,
      aux_sym_string_token1,
    ACTIONS(210), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(31), 1,
      aux_sym_string_repeat1,
  [552] = 4,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    ACTIONS(214), 1,
      aux_sym_string_token2,
    ACTIONS(216), 1,
      anon_sym_DQUOTE_DQUOTE,
    STATE(33), 1,
      aux_sym_string_repeat2,
  [565] = 4,
    ACTIONS(206), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      aux_sym_string_token2,
    ACTIONS(220), 1,
      anon_sym_DQUOTE_DQUOTE,
    STATE(29), 1,
      aux_sym_string_repeat2,
  [578] = 4,
    ACTIONS(212), 1,
      anon_sym_SQUOTE,
    ACTIONS(222), 1,
      aux_sym_string_token1,
    ACTIONS(224), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(32), 1,
      aux_sym_string_repeat1,
  [591] = 4,
    ACTIONS(226), 1,
      anon_sym_SQUOTE,
    ACTIONS(228), 1,
      aux_sym_string_token1,
    ACTIONS(231), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(32), 1,
      aux_sym_string_repeat1,
  [604] = 4,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      aux_sym_string_token2,
    ACTIONS(239), 1,
      anon_sym_DQUOTE_DQUOTE,
    STATE(33), 1,
      aux_sym_string_repeat2,
  [617] = 4,
    ACTIONS(242), 1,
      anon_sym_SQUOTE,
    ACTIONS(244), 1,
      aux_sym_string_token1,
    ACTIONS(246), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(36), 1,
      aux_sym_string_repeat1,
  [630] = 4,
    ACTIONS(242), 1,
      anon_sym_DQUOTE,
    ACTIONS(248), 1,
      aux_sym_string_token2,
    ACTIONS(250), 1,
      anon_sym_DQUOTE_DQUOTE,
    STATE(37), 1,
      aux_sym_string_repeat2,
  [643] = 4,
    ACTIONS(222), 1,
      aux_sym_string_token1,
    ACTIONS(224), 1,
      anon_sym_SQUOTE_SQUOTE,
    ACTIONS(252), 1,
      anon_sym_SQUOTE,
    STATE(32), 1,
      aux_sym_string_repeat1,
  [656] = 4,
    ACTIONS(214), 1,
      aux_sym_string_token2,
    ACTIONS(216), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(252), 1,
      anon_sym_DQUOTE,
    STATE(33), 1,
      aux_sym_string_repeat2,
  [669] = 1,
    ACTIONS(254), 1,
      ts_builtin_sym_end,
  [673] = 1,
    ACTIONS(256), 1,
      sym_identifier,
  [677] = 1,
    ACTIONS(258), 1,
      sym_while_keyword,
  [681] = 1,
    ACTIONS(260), 1,
      sym_function_keyword,
  [685] = 1,
    ACTIONS(262), 1,
      sym_identifier,
  [689] = 1,
    ACTIONS(264), 1,
      sym_identifier,
  [693] = 1,
    ACTIONS(266), 1,
      sym_identifier,
  [697] = 1,
    ACTIONS(268), 1,
      sym_identifier,
  [701] = 1,
    ACTIONS(270), 1,
      sym_identifier,
  [705] = 1,
    ACTIONS(272), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 31,
  [SMALL_STATE(11)] = 62,
  [SMALL_STATE(12)] = 93,
  [SMALL_STATE(13)] = 124,
  [SMALL_STATE(14)] = 155,
  [SMALL_STATE(15)] = 186,
  [SMALL_STATE(16)] = 217,
  [SMALL_STATE(17)] = 248,
  [SMALL_STATE(18)] = 279,
  [SMALL_STATE(19)] = 310,
  [SMALL_STATE(20)] = 341,
  [SMALL_STATE(21)] = 372,
  [SMALL_STATE(22)] = 403,
  [SMALL_STATE(23)] = 434,
  [SMALL_STATE(24)] = 459,
  [SMALL_STATE(25)] = 484,
  [SMALL_STATE(26)] = 509,
  [SMALL_STATE(27)] = 524,
  [SMALL_STATE(28)] = 539,
  [SMALL_STATE(29)] = 552,
  [SMALL_STATE(30)] = 565,
  [SMALL_STATE(31)] = 578,
  [SMALL_STATE(32)] = 591,
  [SMALL_STATE(33)] = 604,
  [SMALL_STATE(34)] = 617,
  [SMALL_STATE(35)] = 630,
  [SMALL_STATE(36)] = 643,
  [SMALL_STATE(37)] = 656,
  [SMALL_STATE(38)] = 669,
  [SMALL_STATE(39)] = 673,
  [SMALL_STATE(40)] = 677,
  [SMALL_STATE(41)] = 681,
  [SMALL_STATE(42)] = 685,
  [SMALL_STATE(43)] = 689,
  [SMALL_STATE(44)] = 693,
  [SMALL_STATE(45)] = 697,
  [SMALL_STATE(46)] = 701,
  [SMALL_STATE(47)] = 705,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_statement, 2, 0, 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration_statement, 2, 0, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_statement, 3, 0, 5),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration_statement, 3, 0, 5),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_statement_repeat1, 2, 0, 6),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_statement_repeat1, 2, 0, 6),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_statement_repeat1, 2, 0, 6), SHIFT_REPEAT(43),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_statement_repeat1, 2, 0, 1),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_statement_repeat1, 2, 0, 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endif, 1, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_endif, 1, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_opener, 1, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_opener, 1, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enddo, 1, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enddo, 1, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_next, 1, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_next, 1, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_opener, 1, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_opener, 1, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 2, 0, 1),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 2, 0, 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_definition, 2, 0, 1),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_definition, 2, 0, 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_definition, 2, 0, 1),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_definition, 2, 0, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3, 0, 3),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 3, 0, 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3, 0, 4),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 3, 0, 4),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_while_opener, 2, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_do_while_opener, 2, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 4, 0, 4),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 4, 0, 4),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [192] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_call_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_repeat1, 2, 0, 0),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [231] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2, 0, 0),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2, 0, 0), SHIFT_REPEAT(33),
  [239] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2, 0, 0), SHIFT_REPEAT(33),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [254] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_keyword, 1, 0, 0),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
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

TS_PUBLIC const TSLanguage *tree_sitter_newage_erp(void) {
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
