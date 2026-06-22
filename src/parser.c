#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 41
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 45
#define ALIAS_COUNT 0
#define TOKEN_COUNT 29
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 4

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_LPAREN = 2,
  anon_sym_RPAREN = 3,
  sym_static_modifier = 4,
  sym_user_modifier = 5,
  sym_function_keyword = 6,
  sym_procedure_keyword = 7,
  sym_method_keyword = 8,
  sym_if_keyword = 9,
  sym_do_keyword = 10,
  sym_while_keyword = 11,
  sym_for_keyword = 12,
  sym_endif_keyword = 13,
  sym_enddo_keyword = 14,
  sym_next_keyword = 15,
  sym_boolean = 16,
  sym_nil = 17,
  sym_number = 18,
  anon_sym_SQUOTE = 19,
  aux_sym_string_token1 = 20,
  anon_sym_SQUOTE_SQUOTE = 21,
  anon_sym_DQUOTE = 22,
  aux_sym_string_token2 = 23,
  anon_sym_DQUOTE_DQUOTE = 24,
  sym_comment = 25,
  sym_operator = 26,
  sym_punctuation = 27,
  sym_newline = 28,
  sym_source_file = 29,
  sym_function_definition = 30,
  sym_procedure_definition = 31,
  sym_method_definition = 32,
  sym_if_opener = 33,
  sym_do_while_opener = 34,
  sym_for_opener = 35,
  sym_endif = 36,
  sym_enddo = 37,
  sym_next = 38,
  sym_call = 39,
  sym_string = 40,
  aux_sym_source_file_repeat1 = 41,
  aux_sym_call_repeat1 = 42,
  aux_sym_string_repeat1 = 43,
  aux_sym_string_repeat2 = 44,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_static_modifier] = "static_modifier",
  [sym_user_modifier] = "user_modifier",
  [sym_function_keyword] = "function_keyword",
  [sym_procedure_keyword] = "procedure_keyword",
  [sym_method_keyword] = "method_keyword",
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
  [sym_if_opener] = "if_opener",
  [sym_do_while_opener] = "do_while_opener",
  [sym_for_opener] = "for_opener",
  [sym_endif] = "endif",
  [sym_enddo] = "enddo",
  [sym_next] = "next",
  [sym_call] = "call",
  [sym_string] = "string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_call_repeat1] = "call_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_repeat2] = "string_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_static_modifier] = sym_static_modifier,
  [sym_user_modifier] = sym_user_modifier,
  [sym_function_keyword] = sym_function_keyword,
  [sym_procedure_keyword] = sym_procedure_keyword,
  [sym_method_keyword] = sym_method_keyword,
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
  [sym_if_opener] = sym_if_opener,
  [sym_do_while_opener] = sym_do_while_opener,
  [sym_for_opener] = sym_for_opener,
  [sym_endif] = sym_endif,
  [sym_enddo] = sym_enddo,
  [sym_next] = sym_next,
  [sym_call] = sym_call,
  [sym_string] = sym_string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
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
  field_name = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_function] = "function",
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_name, 2},
  [2] =
    {field_function, 0},
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
  [22] = 14,
  [23] = 17,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 24,
  [31] = 27,
  [32] = 25,
  [33] = 26,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(18);
      ADVANCE_MAP(
        '\n', 50,
        '\r', 1,
        '!', 8,
        '"', 37,
        '&', 4,
        '\'', 32,
        '(', 19,
        ')', 20,
        '*', 43,
        '-', 46,
        '.', 47,
        '/', 44,
        ':', 45,
        '<', 48,
        '=', 45,
        '>', 45,
        '%', 42,
        '+', 42,
        'F', 22,
        'f', 22,
        'T', 23,
        't', 23,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(0);
      if (lookahead == ',' ||
          lookahead == ';' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(50);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 50,
        '\r', 1,
        '!', 8,
        '"', 36,
        '\'', 31,
        ')', 20,
        '-', 46,
        '.', 47,
        ':', 45,
        '<', 48,
        '=', 45,
        '>', 45,
        'F', 22,
        'f', 22,
        'T', 23,
        't', 23,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(2);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/') ADVANCE(42);
      if (('(' <= lookahead && lookahead <= ',') ||
          lookahead == ';' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(39);
      END_STATE();
    case 4:
      if (lookahead == '&') ADVANCE(41);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(34);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(42);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(21);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(42);
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
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(14);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 16:
      if (eof) ADVANCE(18);
      ADVANCE_MAP(
        '\n', 50,
        '\r', 1,
        '!', 8,
        '"', 36,
        '&', 4,
        '\'', 31,
        '(', 19,
        '*', 43,
        '-', 46,
        '.', 47,
        '/', 44,
        ':', 45,
        '<', 48,
        '=', 45,
        '>', 45,
        '%', 42,
        '+', 42,
        'F', 22,
        'f', 22,
        'T', 23,
        't', 23,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(16);
      if ((')' <= lookahead && lookahead <= ',') ||
          lookahead == ';' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 17:
      if (eof) ADVANCE(18);
      ADVANCE_MAP(
        '\n', 50,
        '\r', 1,
        '!', 8,
        '"', 36,
        '&', 4,
        '\'', 31,
        '*', 43,
        '-', 46,
        '.', 47,
        '/', 44,
        ':', 45,
        '<', 48,
        '=', 45,
        '>', 45,
        '%', 42,
        '+', 42,
        'F', 22,
        'f', 22,
        'T', 23,
        't', 23,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(17);
      if (('(' <= lookahead && lookahead <= ',') ||
          lookahead == ';' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_boolean);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_boolean);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_boolean);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(35);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != '\'') ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\'') ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(40);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(39);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_operator);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '*') ADVANCE(41);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '/') ADVANCE(41);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '=') ADVANCE(42);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '>') ADVANCE(42);
      END_STATE();
    case 47:
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
    case 48:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '=' ||
          lookahead == '>') ADVANCE(42);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_punctuation);
      END_STATE();
    case 50:
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
        'M', 5,
        'm', 5,
        'N', 6,
        'n', 6,
        'P', 7,
        'p', 7,
        'S', 8,
        's', 8,
        'U', 9,
        'u', 9,
        'W', 10,
        'w', 10,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(11);
      END_STATE();
    case 2:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 3:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(13);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 4:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(15);
      END_STATE();
    case 5:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 6:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(17);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(18);
      END_STATE();
    case 7:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 8:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(20);
      END_STATE();
    case 9:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(21);
      END_STATE();
    case 10:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(22);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_do_keyword);
      END_STATE();
    case 12:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(23);
      END_STATE();
    case 13:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 14:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_if_keyword);
      END_STATE();
    case 16:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(26);
      END_STATE();
    case 17:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(27);
      END_STATE();
    case 18:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 19:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 20:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 21:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 22:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 23:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(33);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_for_keyword);
      END_STATE();
    case 25:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(35);
      END_STATE();
    case 26:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(36);
      END_STATE();
    case 27:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(37);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_nil);
      END_STATE();
    case 29:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(38);
      END_STATE();
    case 30:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(39);
      END_STATE();
    case 31:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 32:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 33:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 34:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(43);
      END_STATE();
    case 35:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(44);
      END_STATE();
    case 36:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_next_keyword);
      END_STATE();
    case 38:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 39:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_user_modifier);
      END_STATE();
    case 41:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_enddo_keyword);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_endif_keyword);
      END_STATE();
    case 44:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 45:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(50);
      END_STATE();
    case 46:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(51);
      END_STATE();
    case 47:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(52);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_while_keyword);
      END_STATE();
    case 49:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_method_keyword);
      END_STATE();
    case 51:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_static_modifier);
      END_STATE();
    case 53:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 54:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_function_keyword);
      END_STATE();
    case 56:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 57:
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
  [5] = {.lex_state = 17},
  [6] = {.lex_state = 17},
  [7] = {.lex_state = 17},
  [8] = {.lex_state = 17},
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
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 14},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 14},
  [37] = {.lex_state = 14},
  [38] = {.lex_state = 14},
  [39] = {.lex_state = 14},
  [40] = {.lex_state = 14},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_static_modifier] = ACTIONS(1),
    [sym_user_modifier] = ACTIONS(1),
    [sym_function_keyword] = ACTIONS(1),
    [sym_procedure_keyword] = ACTIONS(1),
    [sym_method_keyword] = ACTIONS(1),
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
    [sym_source_file] = STATE(35),
    [sym_function_definition] = STATE(2),
    [sym_procedure_definition] = STATE(2),
    [sym_method_definition] = STATE(2),
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
    [sym_if_keyword] = ACTIONS(15),
    [sym_do_keyword] = ACTIONS(17),
    [sym_for_keyword] = ACTIONS(19),
    [sym_endif_keyword] = ACTIONS(21),
    [sym_enddo_keyword] = ACTIONS(23),
    [sym_next_keyword] = ACTIONS(25),
    [sym_boolean] = ACTIONS(27),
    [sym_nil] = ACTIONS(29),
    [sym_number] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [sym_comment] = ACTIONS(29),
    [sym_operator] = ACTIONS(27),
    [sym_punctuation] = ACTIONS(29),
    [sym_newline] = ACTIONS(29),
  },
  [2] = {
    [sym_function_definition] = STATE(3),
    [sym_procedure_definition] = STATE(3),
    [sym_method_definition] = STATE(3),
    [sym_if_opener] = STATE(3),
    [sym_do_while_opener] = STATE(3),
    [sym_for_opener] = STATE(3),
    [sym_endif] = STATE(3),
    [sym_enddo] = STATE(3),
    [sym_next] = STATE(3),
    [sym_call] = STATE(3),
    [sym_string] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(35),
    [sym_identifier] = ACTIONS(5),
    [sym_static_modifier] = ACTIONS(7),
    [sym_user_modifier] = ACTIONS(7),
    [sym_function_keyword] = ACTIONS(9),
    [sym_procedure_keyword] = ACTIONS(11),
    [sym_method_keyword] = ACTIONS(13),
    [sym_if_keyword] = ACTIONS(15),
    [sym_do_keyword] = ACTIONS(17),
    [sym_for_keyword] = ACTIONS(19),
    [sym_endif_keyword] = ACTIONS(21),
    [sym_enddo_keyword] = ACTIONS(23),
    [sym_next_keyword] = ACTIONS(25),
    [sym_boolean] = ACTIONS(37),
    [sym_nil] = ACTIONS(39),
    [sym_number] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [sym_comment] = ACTIONS(39),
    [sym_operator] = ACTIONS(37),
    [sym_punctuation] = ACTIONS(39),
    [sym_newline] = ACTIONS(39),
  },
  [3] = {
    [sym_function_definition] = STATE(3),
    [sym_procedure_definition] = STATE(3),
    [sym_method_definition] = STATE(3),
    [sym_if_opener] = STATE(3),
    [sym_do_while_opener] = STATE(3),
    [sym_for_opener] = STATE(3),
    [sym_endif] = STATE(3),
    [sym_enddo] = STATE(3),
    [sym_next] = STATE(3),
    [sym_call] = STATE(3),
    [sym_string] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(41),
    [sym_identifier] = ACTIONS(43),
    [sym_static_modifier] = ACTIONS(46),
    [sym_user_modifier] = ACTIONS(46),
    [sym_function_keyword] = ACTIONS(49),
    [sym_procedure_keyword] = ACTIONS(52),
    [sym_method_keyword] = ACTIONS(55),
    [sym_if_keyword] = ACTIONS(58),
    [sym_do_keyword] = ACTIONS(61),
    [sym_for_keyword] = ACTIONS(64),
    [sym_endif_keyword] = ACTIONS(67),
    [sym_enddo_keyword] = ACTIONS(70),
    [sym_next_keyword] = ACTIONS(73),
    [sym_boolean] = ACTIONS(76),
    [sym_nil] = ACTIONS(79),
    [sym_number] = ACTIONS(79),
    [anon_sym_SQUOTE] = ACTIONS(82),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_comment] = ACTIONS(79),
    [sym_operator] = ACTIONS(76),
    [sym_punctuation] = ACTIONS(79),
    [sym_newline] = ACTIONS(79),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(88),
    [sym_identifier] = ACTIONS(90),
    [anon_sym_LPAREN] = ACTIONS(92),
    [sym_static_modifier] = ACTIONS(88),
    [sym_user_modifier] = ACTIONS(88),
    [sym_function_keyword] = ACTIONS(88),
    [sym_procedure_keyword] = ACTIONS(88),
    [sym_method_keyword] = ACTIONS(88),
    [sym_if_keyword] = ACTIONS(88),
    [sym_do_keyword] = ACTIONS(88),
    [sym_for_keyword] = ACTIONS(88),
    [sym_endif_keyword] = ACTIONS(88),
    [sym_enddo_keyword] = ACTIONS(88),
    [sym_next_keyword] = ACTIONS(88),
    [sym_boolean] = ACTIONS(90),
    [sym_nil] = ACTIONS(88),
    [sym_number] = ACTIONS(88),
    [anon_sym_SQUOTE] = ACTIONS(88),
    [anon_sym_DQUOTE] = ACTIONS(88),
    [sym_comment] = ACTIONS(88),
    [sym_operator] = ACTIONS(90),
    [sym_punctuation] = ACTIONS(90),
    [sym_newline] = ACTIONS(88),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(96), 3,
      sym_boolean,
      sym_identifier,
      sym_operator,
    ACTIONS(94), 19,
      ts_builtin_sym_end,
      sym_static_modifier,
      sym_user_modifier,
      sym_function_keyword,
      sym_procedure_keyword,
      sym_method_keyword,
      sym_if_keyword,
      sym_do_keyword,
      sym_for_keyword,
      sym_endif_keyword,
      sym_enddo_keyword,
      sym_next_keyword,
      sym_nil,
      sym_number,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_comment,
      sym_punctuation,
      sym_newline,
  [27] = 2,
    ACTIONS(100), 3,
      sym_boolean,
      sym_identifier,
      sym_operator,
    ACTIONS(98), 19,
      ts_builtin_sym_end,
      sym_static_modifier,
      sym_user_modifier,
      sym_function_keyword,
      sym_procedure_keyword,
      sym_method_keyword,
      sym_if_keyword,
      sym_do_keyword,
      sym_for_keyword,
      sym_endif_keyword,
      sym_enddo_keyword,
      sym_next_keyword,
      sym_nil,
      sym_number,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_comment,
      sym_punctuation,
      sym_newline,
  [54] = 2,
    ACTIONS(104), 3,
      sym_boolean,
      sym_identifier,
      sym_operator,
    ACTIONS(102), 19,
      ts_builtin_sym_end,
      sym_static_modifier,
      sym_user_modifier,
      sym_function_keyword,
      sym_procedure_keyword,
      sym_method_keyword,
      sym_if_keyword,
      sym_do_keyword,
      sym_for_keyword,
      sym_endif_keyword,
      sym_enddo_keyword,
      sym_next_keyword,
      sym_nil,
      sym_number,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_comment,
      sym_punctuation,
      sym_newline,
  [81] = 2,
    ACTIONS(108), 3,
      sym_boolean,
      sym_identifier,
      sym_operator,
    ACTIONS(106), 19,
      ts_builtin_sym_end,
      sym_static_modifier,
      sym_user_modifier,
      sym_function_keyword,
      sym_procedure_keyword,
      sym_method_keyword,
      sym_if_keyword,
      sym_do_keyword,
      sym_for_keyword,
      sym_endif_keyword,
      sym_enddo_keyword,
      sym_next_keyword,
      sym_nil,
      sym_number,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_comment,
      sym_punctuation,
      sym_newline,
  [108] = 2,
    ACTIONS(112), 3,
      sym_boolean,
      sym_identifier,
      sym_operator,
    ACTIONS(110), 19,
      ts_builtin_sym_end,
      sym_static_modifier,
      sym_user_modifier,
      sym_function_keyword,
      sym_procedure_keyword,
      sym_method_keyword,
      sym_if_keyword,
      sym_do_keyword,
      sym_for_keyword,
      sym_endif_keyword,
      sym_enddo_keyword,
      sym_next_keyword,
      sym_nil,
      sym_number,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_comment,
      sym_punctuation,
      sym_newline,
  [135] = 2,
    ACTIONS(116), 3,
      sym_boolean,
      sym_identifier,
      sym_operator,
    ACTIONS(114), 19,
      ts_builtin_sym_end,
      sym_static_modifier,
      sym_user_modifier,
      sym_function_keyword,
      sym_procedure_keyword,
      sym_method_keyword,
      sym_if_keyword,
      sym_do_keyword,
      sym_for_keyword,
      sym_endif_keyword,
      sym_enddo_keyword,
      sym_next_keyword,
      sym_nil,
      sym_number,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_comment,
      sym_punctuation,
      sym_newline,
  [162] = 2,
    ACTIONS(120), 3,
      sym_boolean,
      sym_identifier,
      sym_operator,
    ACTIONS(118), 19,
      ts_builtin_sym_end,
      sym_static_modifier,
      sym_user_modifier,
      sym_function_keyword,
      sym_procedure_keyword,
      sym_method_keyword,
      sym_if_keyword,
      sym_do_keyword,
      sym_for_keyword,
      sym_endif_keyword,
      sym_enddo_keyword,
      sym_next_keyword,
      sym_nil,
      sym_number,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_comment,
      sym_punctuation,
      sym_newline,
  [189] = 2,
    ACTIONS(124), 3,
      sym_boolean,
      sym_identifier,
      sym_operator,
    ACTIONS(122), 19,
      ts_builtin_sym_end,
      sym_static_modifier,
      sym_user_modifier,
      sym_function_keyword,
      sym_procedure_keyword,
      sym_method_keyword,
      sym_if_keyword,
      sym_do_keyword,
      sym_for_keyword,
      sym_endif_keyword,
      sym_enddo_keyword,
      sym_next_keyword,
      sym_nil,
      sym_number,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_comment,
      sym_punctuation,
      sym_newline,
  [216] = 2,
    ACTIONS(128), 3,
      sym_boolean,
      sym_identifier,
      sym_operator,
    ACTIONS(126), 19,
      ts_builtin_sym_end,
      sym_static_modifier,
      sym_user_modifier,
      sym_function_keyword,
      sym_procedure_keyword,
      sym_method_keyword,
      sym_if_keyword,
      sym_do_keyword,
      sym_for_keyword,
      sym_endif_keyword,
      sym_enddo_keyword,
      sym_next_keyword,
      sym_nil,
      sym_number,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_comment,
      sym_punctuation,
      sym_newline,
  [243] = 2,
    ACTIONS(132), 3,
      sym_boolean,
      sym_identifier,
      sym_operator,
    ACTIONS(130), 19,
      ts_builtin_sym_end,
      sym_static_modifier,
      sym_user_modifier,
      sym_function_keyword,
      sym_procedure_keyword,
      sym_method_keyword,
      sym_if_keyword,
      sym_do_keyword,
      sym_for_keyword,
      sym_endif_keyword,
      sym_enddo_keyword,
      sym_next_keyword,
      sym_nil,
      sym_number,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_comment,
      sym_punctuation,
      sym_newline,
  [270] = 2,
    ACTIONS(136), 3,
      sym_boolean,
      sym_identifier,
      sym_operator,
    ACTIONS(134), 19,
      ts_builtin_sym_end,
      sym_static_modifier,
      sym_user_modifier,
      sym_function_keyword,
      sym_procedure_keyword,
      sym_method_keyword,
      sym_if_keyword,
      sym_do_keyword,
      sym_for_keyword,
      sym_endif_keyword,
      sym_enddo_keyword,
      sym_next_keyword,
      sym_nil,
      sym_number,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_comment,
      sym_punctuation,
      sym_newline,
  [297] = 2,
    ACTIONS(140), 3,
      sym_boolean,
      sym_identifier,
      sym_operator,
    ACTIONS(138), 19,
      ts_builtin_sym_end,
      sym_static_modifier,
      sym_user_modifier,
      sym_function_keyword,
      sym_procedure_keyword,
      sym_method_keyword,
      sym_if_keyword,
      sym_do_keyword,
      sym_for_keyword,
      sym_endif_keyword,
      sym_enddo_keyword,
      sym_next_keyword,
      sym_nil,
      sym_number,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_comment,
      sym_punctuation,
      sym_newline,
  [324] = 2,
    ACTIONS(144), 3,
      sym_boolean,
      sym_identifier,
      sym_operator,
    ACTIONS(142), 19,
      ts_builtin_sym_end,
      sym_static_modifier,
      sym_user_modifier,
      sym_function_keyword,
      sym_procedure_keyword,
      sym_method_keyword,
      sym_if_keyword,
      sym_do_keyword,
      sym_for_keyword,
      sym_endif_keyword,
      sym_enddo_keyword,
      sym_next_keyword,
      sym_nil,
      sym_number,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_comment,
      sym_punctuation,
      sym_newline,
  [351] = 2,
    ACTIONS(148), 3,
      sym_boolean,
      sym_identifier,
      sym_operator,
    ACTIONS(146), 19,
      ts_builtin_sym_end,
      sym_static_modifier,
      sym_user_modifier,
      sym_function_keyword,
      sym_procedure_keyword,
      sym_method_keyword,
      sym_if_keyword,
      sym_do_keyword,
      sym_for_keyword,
      sym_endif_keyword,
      sym_enddo_keyword,
      sym_next_keyword,
      sym_nil,
      sym_number,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_comment,
      sym_punctuation,
      sym_newline,
  [378] = 6,
    ACTIONS(153), 1,
      anon_sym_RPAREN,
    ACTIONS(158), 1,
      anon_sym_SQUOTE,
    ACTIONS(161), 1,
      anon_sym_DQUOTE,
    STATE(19), 2,
      sym_string,
      aux_sym_call_repeat1,
    ACTIONS(150), 3,
      sym_identifier,
      sym_operator,
      sym_punctuation,
    ACTIONS(155), 4,
      sym_boolean,
      sym_nil,
      sym_number,
      sym_newline,
  [403] = 6,
    ACTIONS(166), 1,
      anon_sym_RPAREN,
    ACTIONS(170), 1,
      anon_sym_SQUOTE,
    ACTIONS(172), 1,
      anon_sym_DQUOTE,
    STATE(21), 2,
      sym_string,
      aux_sym_call_repeat1,
    ACTIONS(164), 3,
      sym_identifier,
      sym_operator,
      sym_punctuation,
    ACTIONS(168), 4,
      sym_boolean,
      sym_nil,
      sym_number,
      sym_newline,
  [428] = 6,
    ACTIONS(170), 1,
      anon_sym_SQUOTE,
    ACTIONS(172), 1,
      anon_sym_DQUOTE,
    ACTIONS(176), 1,
      anon_sym_RPAREN,
    STATE(19), 2,
      sym_string,
      aux_sym_call_repeat1,
    ACTIONS(174), 3,
      sym_identifier,
      sym_operator,
      sym_punctuation,
    ACTIONS(178), 4,
      sym_boolean,
      sym_nil,
      sym_number,
      sym_newline,
  [453] = 2,
    ACTIONS(132), 3,
      sym_identifier,
      sym_operator,
      sym_punctuation,
    ACTIONS(130), 7,
      anon_sym_RPAREN,
      sym_boolean,
      sym_nil,
      sym_number,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_newline,
  [468] = 2,
    ACTIONS(144), 3,
      sym_identifier,
      sym_operator,
      sym_punctuation,
    ACTIONS(142), 7,
      anon_sym_RPAREN,
      sym_boolean,
      sym_nil,
      sym_number,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_newline,
  [483] = 4,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      aux_sym_string_token2,
    ACTIONS(184), 1,
      anon_sym_DQUOTE_DQUOTE,
    STATE(26), 1,
      aux_sym_string_repeat2,
  [496] = 4,
    ACTIONS(186), 1,
      anon_sym_SQUOTE,
    ACTIONS(188), 1,
      aux_sym_string_token1,
    ACTIONS(190), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(29), 1,
      aux_sym_string_repeat1,
  [509] = 4,
    ACTIONS(186), 1,
      anon_sym_DQUOTE,
    ACTIONS(192), 1,
      aux_sym_string_token2,
    ACTIONS(194), 1,
      anon_sym_DQUOTE_DQUOTE,
    STATE(28), 1,
      aux_sym_string_repeat2,
  [522] = 4,
    ACTIONS(180), 1,
      anon_sym_SQUOTE,
    ACTIONS(196), 1,
      aux_sym_string_token1,
    ACTIONS(198), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(25), 1,
      aux_sym_string_repeat1,
  [535] = 4,
    ACTIONS(200), 1,
      anon_sym_DQUOTE,
    ACTIONS(202), 1,
      aux_sym_string_token2,
    ACTIONS(205), 1,
      anon_sym_DQUOTE_DQUOTE,
    STATE(28), 1,
      aux_sym_string_repeat2,
  [548] = 4,
    ACTIONS(208), 1,
      anon_sym_SQUOTE,
    ACTIONS(210), 1,
      aux_sym_string_token1,
    ACTIONS(213), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(29), 1,
      aux_sym_string_repeat1,
  [561] = 4,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      aux_sym_string_token2,
    ACTIONS(220), 1,
      anon_sym_DQUOTE_DQUOTE,
    STATE(33), 1,
      aux_sym_string_repeat2,
  [574] = 4,
    ACTIONS(216), 1,
      anon_sym_SQUOTE,
    ACTIONS(222), 1,
      aux_sym_string_token1,
    ACTIONS(224), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(32), 1,
      aux_sym_string_repeat1,
  [587] = 4,
    ACTIONS(188), 1,
      aux_sym_string_token1,
    ACTIONS(190), 1,
      anon_sym_SQUOTE_SQUOTE,
    ACTIONS(226), 1,
      anon_sym_SQUOTE,
    STATE(29), 1,
      aux_sym_string_repeat1,
  [600] = 4,
    ACTIONS(192), 1,
      aux_sym_string_token2,
    ACTIONS(194), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(226), 1,
      anon_sym_DQUOTE,
    STATE(28), 1,
      aux_sym_string_repeat2,
  [613] = 1,
    ACTIONS(228), 1,
      sym_while_keyword,
  [617] = 1,
    ACTIONS(230), 1,
      ts_builtin_sym_end,
  [621] = 1,
    ACTIONS(232), 1,
      sym_identifier,
  [625] = 1,
    ACTIONS(234), 1,
      sym_identifier,
  [629] = 1,
    ACTIONS(236), 1,
      sym_identifier,
  [633] = 1,
    ACTIONS(238), 1,
      sym_function_keyword,
  [637] = 1,
    ACTIONS(240), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 27,
  [SMALL_STATE(7)] = 54,
  [SMALL_STATE(8)] = 81,
  [SMALL_STATE(9)] = 108,
  [SMALL_STATE(10)] = 135,
  [SMALL_STATE(11)] = 162,
  [SMALL_STATE(12)] = 189,
  [SMALL_STATE(13)] = 216,
  [SMALL_STATE(14)] = 243,
  [SMALL_STATE(15)] = 270,
  [SMALL_STATE(16)] = 297,
  [SMALL_STATE(17)] = 324,
  [SMALL_STATE(18)] = 351,
  [SMALL_STATE(19)] = 378,
  [SMALL_STATE(20)] = 403,
  [SMALL_STATE(21)] = 428,
  [SMALL_STATE(22)] = 453,
  [SMALL_STATE(23)] = 468,
  [SMALL_STATE(24)] = 483,
  [SMALL_STATE(25)] = 496,
  [SMALL_STATE(26)] = 509,
  [SMALL_STATE(27)] = 522,
  [SMALL_STATE(28)] = 535,
  [SMALL_STATE(29)] = 548,
  [SMALL_STATE(30)] = 561,
  [SMALL_STATE(31)] = 574,
  [SMALL_STATE(32)] = 587,
  [SMALL_STATE(33)] = 600,
  [SMALL_STATE(34)] = 613,
  [SMALL_STATE(35)] = 617,
  [SMALL_STATE(36)] = 621,
  [SMALL_STATE(37)] = 625,
  [SMALL_STATE(38)] = 629,
  [SMALL_STATE(39)] = 633,
  [SMALL_STATE(40)] = 637,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_definition, 2, 0, 1),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_definition, 2, 0, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_opener, 1, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_opener, 1, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_opener, 1, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_opener, 1, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endif, 1, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_endif, 1, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enddo, 1, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enddo, 1, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_next, 1, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_next, 1, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 2, 0, 1),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 2, 0, 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_definition, 2, 0, 1),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_definition, 2, 0, 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_while_opener, 2, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_do_while_opener, 2, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3, 0, 2),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 3, 0, 2),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3, 0, 3),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 3, 0, 3),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 4, 0, 3),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 4, 0, 3),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_call_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_repeat1, 2, 0, 0),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2, 0, 0),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2, 0, 0), SHIFT_REPEAT(28),
  [205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2, 0, 0), SHIFT_REPEAT(28),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [230] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
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
