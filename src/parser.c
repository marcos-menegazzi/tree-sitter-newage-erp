#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 50
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 55
#define ALIAS_COUNT 0
#define TOKEN_COUNT 35
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 8

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_DASH_GT = 2,
  anon_sym_COMMA = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  sym_static_modifier = 6,
  sym_user_modifier = 7,
  sym_function_keyword = 8,
  sym_procedure_keyword = 9,
  sym_method_keyword = 10,
  sym_local_keyword = 11,
  sym_private_keyword = 12,
  sym_public_keyword = 13,
  sym_param_keyword = 14,
  sym_if_keyword = 15,
  sym_do_keyword = 16,
  sym_while_keyword = 17,
  sym_for_keyword = 18,
  sym_endif_keyword = 19,
  sym_enddo_keyword = 20,
  sym_next_keyword = 21,
  sym_boolean = 22,
  sym_nil = 23,
  sym_number = 24,
  anon_sym_SQUOTE = 25,
  aux_sym_string_token1 = 26,
  anon_sym_SQUOTE_SQUOTE = 27,
  anon_sym_DQUOTE = 28,
  aux_sym_string_token2 = 29,
  anon_sym_DQUOTE_DQUOTE = 30,
  sym_comment = 31,
  sym_operator = 32,
  sym_punctuation = 33,
  sym_newline = 34,
  sym_source_file = 35,
  sym_function_definition = 36,
  sym_procedure_definition = 37,
  sym_method_definition = 38,
  sym_declaration_statement = 39,
  sym_declaration_keyword = 40,
  sym_field_access = 41,
  sym_if_opener = 42,
  sym_do_while_opener = 43,
  sym_for_opener = 44,
  sym_endif = 45,
  sym_enddo = 46,
  sym_next = 47,
  sym_call = 48,
  sym_string = 49,
  aux_sym_source_file_repeat1 = 50,
  aux_sym_declaration_statement_repeat1 = 51,
  aux_sym_call_repeat1 = 52,
  aux_sym_string_repeat1 = 53,
  aux_sym_string_repeat2 = 54,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_DASH_GT] = "->",
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
  [sym_field_access] = "field_access",
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
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
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
  [sym_field_access] = sym_field_access,
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
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
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
  [sym_field_access] = {
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
  field_field = 1,
  field_function = 2,
  field_kind = 3,
  field_name = 4,
  field_object = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_field] = "field",
  [field_function] = "function",
  [field_kind] = "kind",
  [field_name] = "name",
  [field_object] = "object",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 1},
  [6] = {.index = 7, .length = 3},
  [7] = {.index = 10, .length = 2},
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
    {field_field, 2},
    {field_object, 0},
  [6] =
    {field_function, 0},
  [7] =
    {field_kind, 0},
    {field_name, 1},
    {field_name, 2, .inherited = true},
  [10] =
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
  [26] = 26,
  [27] = 17,
  [28] = 22,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 32,
  [36] = 34,
  [37] = 31,
  [38] = 29,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(18);
      ADVANCE_MAP(
        '\n', 46,
        '\r', 1,
        '!', 8,
        '"', 33,
        '&', 4,
        '\'', 28,
        '(', 21,
        ')', 22,
        '*', 39,
        ',', 20,
        '-', 42,
        '.', 43,
        '/', 40,
        ':', 41,
        '<', 44,
        '=', 41,
        '>', 41,
        '%', 38,
        '+', 38,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(0);
      if (lookahead == ';' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(46);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 46,
        '\r', 1,
        '!', 8,
        '"', 32,
        '\'', 27,
        ')', 22,
        '.', 43,
        ':', 41,
        '<', 44,
        '=', 41,
        '>', 41,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(2);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/')) ADVANCE(38);
      if (('(' <= lookahead && lookahead <= ',') ||
          lookahead == ';' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(35);
      END_STATE();
    case 4:
      if (lookahead == '&') ADVANCE(37);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(30);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(38);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(23);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(38);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 15:
      if (eof) ADVANCE(18);
      ADVANCE_MAP(
        '\n', 46,
        '\r', 1,
        '!', 8,
        '"', 32,
        '&', 4,
        '\'', 27,
        '(', 21,
        '*', 39,
        '-', 42,
        '.', 43,
        '/', 40,
        ':', 41,
        '<', 44,
        '=', 41,
        '>', 41,
        '%', 38,
        '+', 38,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(15);
      if ((')' <= lookahead && lookahead <= ',') ||
          lookahead == ';' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 16:
      if (eof) ADVANCE(18);
      ADVANCE_MAP(
        '\n', 46,
        '\r', 1,
        '!', 8,
        '"', 32,
        '&', 4,
        '\'', 27,
        '*', 39,
        ',', 20,
        '-', 42,
        '.', 43,
        '/', 40,
        ':', 41,
        '<', 44,
        '=', 41,
        '>', 41,
        '%', 38,
        '+', 38,
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
          lookahead == '}') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 17:
      if (eof) ADVANCE(18);
      ADVANCE_MAP(
        '\n', 46,
        '\r', 1,
        '!', 8,
        '"', 32,
        '&', 4,
        '\'', 27,
        '*', 39,
        '-', 42,
        '.', 43,
        '/', 40,
        ':', 41,
        '<', 44,
        '=', 41,
        '>', 41,
        '%', 38,
        '+', 38,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(17);
      if (('(' <= lookahead && lookahead <= ',') ||
          lookahead == ';' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_boolean);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(31);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != '\'') ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\'') ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(36);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_operator);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '*') ADVANCE(37);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '/') ADVANCE(37);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '=') ADVANCE(38);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '>') ADVANCE(19);
      END_STATE();
    case 43:
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
    case 44:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '=' ||
          lookahead == '>') ADVANCE(38);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_punctuation);
      END_STATE();
    case 46:
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
  [7] = {.lex_state = 16},
  [8] = {.lex_state = 15},
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
  [23] = {.lex_state = 17},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
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
    [sym_source_file] = STATE(39),
    [sym_function_definition] = STATE(2),
    [sym_procedure_definition] = STATE(2),
    [sym_method_definition] = STATE(2),
    [sym_declaration_statement] = STATE(2),
    [sym_declaration_keyword] = STATE(40),
    [sym_field_access] = STATE(2),
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
    [anon_sym_DASH_GT] = ACTIONS(7),
    [sym_static_modifier] = ACTIONS(9),
    [sym_user_modifier] = ACTIONS(9),
    [sym_function_keyword] = ACTIONS(11),
    [sym_procedure_keyword] = ACTIONS(13),
    [sym_method_keyword] = ACTIONS(15),
    [sym_local_keyword] = ACTIONS(17),
    [sym_private_keyword] = ACTIONS(17),
    [sym_public_keyword] = ACTIONS(17),
    [sym_param_keyword] = ACTIONS(17),
    [sym_if_keyword] = ACTIONS(19),
    [sym_do_keyword] = ACTIONS(21),
    [sym_for_keyword] = ACTIONS(23),
    [sym_endif_keyword] = ACTIONS(25),
    [sym_enddo_keyword] = ACTIONS(27),
    [sym_next_keyword] = ACTIONS(29),
    [sym_boolean] = ACTIONS(7),
    [sym_nil] = ACTIONS(7),
    [sym_number] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [sym_comment] = ACTIONS(7),
    [sym_operator] = ACTIONS(35),
    [sym_punctuation] = ACTIONS(7),
    [sym_newline] = ACTIONS(7),
  },
  [2] = {
    [sym_function_definition] = STATE(3),
    [sym_procedure_definition] = STATE(3),
    [sym_method_definition] = STATE(3),
    [sym_declaration_statement] = STATE(3),
    [sym_declaration_keyword] = STATE(40),
    [sym_field_access] = STATE(3),
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
    [anon_sym_DASH_GT] = ACTIONS(39),
    [sym_static_modifier] = ACTIONS(9),
    [sym_user_modifier] = ACTIONS(9),
    [sym_function_keyword] = ACTIONS(11),
    [sym_procedure_keyword] = ACTIONS(13),
    [sym_method_keyword] = ACTIONS(15),
    [sym_local_keyword] = ACTIONS(17),
    [sym_private_keyword] = ACTIONS(17),
    [sym_public_keyword] = ACTIONS(17),
    [sym_param_keyword] = ACTIONS(17),
    [sym_if_keyword] = ACTIONS(19),
    [sym_do_keyword] = ACTIONS(21),
    [sym_for_keyword] = ACTIONS(23),
    [sym_endif_keyword] = ACTIONS(25),
    [sym_enddo_keyword] = ACTIONS(27),
    [sym_next_keyword] = ACTIONS(29),
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
    [sym_declaration_keyword] = STATE(40),
    [sym_field_access] = STATE(3),
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
    [anon_sym_DASH_GT] = ACTIONS(48),
    [sym_static_modifier] = ACTIONS(51),
    [sym_user_modifier] = ACTIONS(51),
    [sym_function_keyword] = ACTIONS(54),
    [sym_procedure_keyword] = ACTIONS(57),
    [sym_method_keyword] = ACTIONS(60),
    [sym_local_keyword] = ACTIONS(63),
    [sym_private_keyword] = ACTIONS(63),
    [sym_public_keyword] = ACTIONS(63),
    [sym_param_keyword] = ACTIONS(63),
    [sym_if_keyword] = ACTIONS(66),
    [sym_do_keyword] = ACTIONS(69),
    [sym_for_keyword] = ACTIONS(72),
    [sym_endif_keyword] = ACTIONS(75),
    [sym_enddo_keyword] = ACTIONS(78),
    [sym_next_keyword] = ACTIONS(81),
    [sym_boolean] = ACTIONS(48),
    [sym_nil] = ACTIONS(48),
    [sym_number] = ACTIONS(48),
    [anon_sym_SQUOTE] = ACTIONS(84),
    [anon_sym_DQUOTE] = ACTIONS(87),
    [sym_comment] = ACTIONS(48),
    [sym_operator] = ACTIONS(90),
    [sym_punctuation] = ACTIONS(48),
    [sym_newline] = ACTIONS(48),
  },
  [4] = {
    [aux_sym_declaration_statement_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(93),
    [sym_identifier] = ACTIONS(95),
    [anon_sym_DASH_GT] = ACTIONS(93),
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
    [anon_sym_DASH_GT] = ACTIONS(99),
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
    [anon_sym_DASH_GT] = ACTIONS(103),
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
    [anon_sym_DASH_GT] = ACTIONS(110),
    [anon_sym_COMMA] = ACTIONS(110),
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
    [ts_builtin_sym_end] = ACTIONS(114),
    [sym_identifier] = ACTIONS(116),
    [anon_sym_DASH_GT] = ACTIONS(118),
    [anon_sym_LPAREN] = ACTIONS(121),
    [sym_static_modifier] = ACTIONS(114),
    [sym_user_modifier] = ACTIONS(114),
    [sym_function_keyword] = ACTIONS(114),
    [sym_procedure_keyword] = ACTIONS(114),
    [sym_method_keyword] = ACTIONS(114),
    [sym_local_keyword] = ACTIONS(114),
    [sym_private_keyword] = ACTIONS(114),
    [sym_public_keyword] = ACTIONS(114),
    [sym_param_keyword] = ACTIONS(114),
    [sym_if_keyword] = ACTIONS(114),
    [sym_do_keyword] = ACTIONS(114),
    [sym_for_keyword] = ACTIONS(114),
    [sym_endif_keyword] = ACTIONS(114),
    [sym_enddo_keyword] = ACTIONS(114),
    [sym_next_keyword] = ACTIONS(114),
    [sym_boolean] = ACTIONS(114),
    [sym_nil] = ACTIONS(114),
    [sym_number] = ACTIONS(114),
    [anon_sym_SQUOTE] = ACTIONS(114),
    [anon_sym_DQUOTE] = ACTIONS(114),
    [sym_comment] = ACTIONS(114),
    [sym_operator] = ACTIONS(116),
    [sym_punctuation] = ACTIONS(116),
    [sym_newline] = ACTIONS(114),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(125), 2,
      sym_identifier,
      sym_operator,
    ACTIONS(123), 25,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
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
  [32] = 2,
    ACTIONS(129), 2,
      sym_identifier,
      sym_operator,
    ACTIONS(127), 25,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
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
  [64] = 2,
    ACTIONS(133), 2,
      sym_identifier,
      sym_operator,
    ACTIONS(131), 25,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
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
  [96] = 2,
    ACTIONS(137), 2,
      sym_identifier,
      sym_operator,
    ACTIONS(135), 25,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
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
  [128] = 2,
    ACTIONS(141), 2,
      sym_identifier,
      sym_operator,
    ACTIONS(139), 25,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
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
  [160] = 2,
    ACTIONS(145), 2,
      sym_identifier,
      sym_operator,
    ACTIONS(143), 25,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
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
  [192] = 2,
    ACTIONS(149), 2,
      sym_identifier,
      sym_operator,
    ACTIONS(147), 25,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
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
  [224] = 2,
    ACTIONS(153), 2,
      sym_identifier,
      sym_operator,
    ACTIONS(151), 25,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
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
  [256] = 2,
    ACTIONS(157), 2,
      sym_identifier,
      sym_operator,
    ACTIONS(155), 25,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
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
  [288] = 2,
    ACTIONS(161), 2,
      sym_identifier,
      sym_operator,
    ACTIONS(159), 25,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
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
  [320] = 2,
    ACTIONS(165), 2,
      sym_identifier,
      sym_operator,
    ACTIONS(163), 25,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
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
  [352] = 2,
    ACTIONS(169), 2,
      sym_identifier,
      sym_operator,
    ACTIONS(167), 25,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
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
  [384] = 2,
    ACTIONS(173), 2,
      sym_identifier,
      sym_operator,
    ACTIONS(171), 25,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
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
  [416] = 2,
    ACTIONS(177), 2,
      sym_identifier,
      sym_operator,
    ACTIONS(175), 25,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
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
  [448] = 2,
    ACTIONS(181), 2,
      sym_identifier,
      sym_operator,
    ACTIONS(179), 25,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
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
  [480] = 6,
    ACTIONS(185), 1,
      anon_sym_RPAREN,
    ACTIONS(189), 1,
      anon_sym_SQUOTE,
    ACTIONS(191), 1,
      anon_sym_DQUOTE,
    STATE(26), 2,
      sym_string,
      aux_sym_call_repeat1,
    ACTIONS(183), 3,
      sym_identifier,
      sym_operator,
      sym_punctuation,
    ACTIONS(187), 4,
      sym_boolean,
      sym_nil,
      sym_number,
      sym_newline,
  [505] = 6,
    ACTIONS(196), 1,
      anon_sym_RPAREN,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(204), 1,
      anon_sym_DQUOTE,
    STATE(25), 2,
      sym_string,
      aux_sym_call_repeat1,
    ACTIONS(193), 3,
      sym_identifier,
      sym_operator,
      sym_punctuation,
    ACTIONS(198), 4,
      sym_boolean,
      sym_nil,
      sym_number,
      sym_newline,
  [530] = 6,
    ACTIONS(189), 1,
      anon_sym_SQUOTE,
    ACTIONS(191), 1,
      anon_sym_DQUOTE,
    ACTIONS(209), 1,
      anon_sym_RPAREN,
    STATE(25), 2,
      sym_string,
      aux_sym_call_repeat1,
    ACTIONS(207), 3,
      sym_identifier,
      sym_operator,
      sym_punctuation,
    ACTIONS(211), 4,
      sym_boolean,
      sym_nil,
      sym_number,
      sym_newline,
  [555] = 2,
    ACTIONS(157), 3,
      sym_identifier,
      sym_operator,
      sym_punctuation,
    ACTIONS(155), 7,
      anon_sym_RPAREN,
      sym_boolean,
      sym_nil,
      sym_number,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_newline,
  [570] = 2,
    ACTIONS(177), 3,
      sym_identifier,
      sym_operator,
      sym_punctuation,
    ACTIONS(175), 7,
      anon_sym_RPAREN,
      sym_boolean,
      sym_nil,
      sym_number,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_newline,
  [585] = 4,
    ACTIONS(213), 1,
      anon_sym_DQUOTE,
    ACTIONS(215), 1,
      aux_sym_string_token2,
    ACTIONS(217), 1,
      anon_sym_DQUOTE_DQUOTE,
    STATE(30), 1,
      aux_sym_string_repeat2,
  [598] = 4,
    ACTIONS(219), 1,
      anon_sym_DQUOTE,
    ACTIONS(221), 1,
      aux_sym_string_token2,
    ACTIONS(224), 1,
      anon_sym_DQUOTE_DQUOTE,
    STATE(30), 1,
      aux_sym_string_repeat2,
  [611] = 4,
    ACTIONS(227), 1,
      anon_sym_SQUOTE,
    ACTIONS(229), 1,
      aux_sym_string_token1,
    ACTIONS(231), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(34), 1,
      aux_sym_string_repeat1,
  [624] = 4,
    ACTIONS(227), 1,
      anon_sym_DQUOTE,
    ACTIONS(233), 1,
      aux_sym_string_token2,
    ACTIONS(235), 1,
      anon_sym_DQUOTE_DQUOTE,
    STATE(29), 1,
      aux_sym_string_repeat2,
  [637] = 4,
    ACTIONS(237), 1,
      anon_sym_SQUOTE,
    ACTIONS(239), 1,
      aux_sym_string_token1,
    ACTIONS(242), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(33), 1,
      aux_sym_string_repeat1,
  [650] = 4,
    ACTIONS(213), 1,
      anon_sym_SQUOTE,
    ACTIONS(245), 1,
      aux_sym_string_token1,
    ACTIONS(247), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(33), 1,
      aux_sym_string_repeat1,
  [663] = 4,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      aux_sym_string_token2,
    ACTIONS(253), 1,
      anon_sym_DQUOTE_DQUOTE,
    STATE(38), 1,
      aux_sym_string_repeat2,
  [676] = 4,
    ACTIONS(245), 1,
      aux_sym_string_token1,
    ACTIONS(247), 1,
      anon_sym_SQUOTE_SQUOTE,
    ACTIONS(255), 1,
      anon_sym_SQUOTE,
    STATE(33), 1,
      aux_sym_string_repeat1,
  [689] = 4,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(257), 1,
      aux_sym_string_token1,
    ACTIONS(259), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(36), 1,
      aux_sym_string_repeat1,
  [702] = 4,
    ACTIONS(215), 1,
      aux_sym_string_token2,
    ACTIONS(217), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(255), 1,
      anon_sym_DQUOTE,
    STATE(30), 1,
      aux_sym_string_repeat2,
  [715] = 1,
    ACTIONS(261), 1,
      ts_builtin_sym_end,
  [719] = 1,
    ACTIONS(263), 1,
      sym_identifier,
  [723] = 1,
    ACTIONS(265), 1,
      sym_identifier,
  [727] = 1,
    ACTIONS(267), 1,
      sym_identifier,
  [731] = 1,
    ACTIONS(269), 1,
      sym_identifier,
  [735] = 1,
    ACTIONS(271), 1,
      sym_identifier,
  [739] = 1,
    ACTIONS(273), 1,
      sym_function_keyword,
  [743] = 1,
    ACTIONS(275), 1,
      sym_identifier,
  [747] = 1,
    ACTIONS(277), 1,
      sym_identifier,
  [751] = 1,
    ACTIONS(279), 1,
      sym_identifier,
  [755] = 1,
    ACTIONS(281), 1,
      sym_while_keyword,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 32,
  [SMALL_STATE(11)] = 64,
  [SMALL_STATE(12)] = 96,
  [SMALL_STATE(13)] = 128,
  [SMALL_STATE(14)] = 160,
  [SMALL_STATE(15)] = 192,
  [SMALL_STATE(16)] = 224,
  [SMALL_STATE(17)] = 256,
  [SMALL_STATE(18)] = 288,
  [SMALL_STATE(19)] = 320,
  [SMALL_STATE(20)] = 352,
  [SMALL_STATE(21)] = 384,
  [SMALL_STATE(22)] = 416,
  [SMALL_STATE(23)] = 448,
  [SMALL_STATE(24)] = 480,
  [SMALL_STATE(25)] = 505,
  [SMALL_STATE(26)] = 530,
  [SMALL_STATE(27)] = 555,
  [SMALL_STATE(28)] = 570,
  [SMALL_STATE(29)] = 585,
  [SMALL_STATE(30)] = 598,
  [SMALL_STATE(31)] = 611,
  [SMALL_STATE(32)] = 624,
  [SMALL_STATE(33)] = 637,
  [SMALL_STATE(34)] = 650,
  [SMALL_STATE(35)] = 663,
  [SMALL_STATE(36)] = 676,
  [SMALL_STATE(37)] = 689,
  [SMALL_STATE(38)] = 702,
  [SMALL_STATE(39)] = 715,
  [SMALL_STATE(40)] = 719,
  [SMALL_STATE(41)] = 723,
  [SMALL_STATE(42)] = 727,
  [SMALL_STATE(43)] = 731,
  [SMALL_STATE(44)] = 735,
  [SMALL_STATE(45)] = 739,
  [SMALL_STATE(46)] = 743,
  [SMALL_STATE(47)] = 747,
  [SMALL_STATE(48)] = 751,
  [SMALL_STATE(49)] = 755,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_statement, 2, 0, 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration_statement, 2, 0, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_statement, 3, 0, 6),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration_statement, 3, 0, 6),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_statement_repeat1, 2, 0, 7),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_statement_repeat1, 2, 0, 7),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_statement_repeat1, 2, 0, 7), SHIFT_REPEAT(43),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_statement_repeat1, 2, 0, 1),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_statement_repeat1, 2, 0, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0), SHIFT(41),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endif, 1, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_endif, 1, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_opener, 1, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_opener, 1, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_next, 1, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_next, 1, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enddo, 1, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enddo, 1, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 2, 0, 1),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 2, 0, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_definition, 2, 0, 1),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_definition, 2, 0, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_definition, 2, 0, 1),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_definition, 2, 0, 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_while_opener, 2, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_do_while_opener, 2, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3, 0, 3),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 3, 0, 3),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_access, 3, 0, 4),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_access, 3, 0, 4),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3, 0, 5),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 3, 0, 5),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_opener, 1, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_opener, 1, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 4, 0, 5),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 4, 0, 5),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [193] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_call_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_repeat1, 2, 0, 0),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2, 0, 0),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2, 0, 0), SHIFT_REPEAT(30),
  [224] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2, 0, 0), SHIFT_REPEAT(30),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [242] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [261] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_keyword, 1, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
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
