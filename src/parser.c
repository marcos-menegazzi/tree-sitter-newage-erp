#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 75
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 63
#define ALIAS_COUNT 0
#define TOKEN_COUNT 39
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 8

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_DASH_GT = 2,
  anon_sym_COMMA = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  anon_sym_LBRACK = 6,
  anon_sym_RBRACK = 7,
  anon_sym_LBRACE = 8,
  anon_sym_RBRACE = 9,
  sym_static_modifier = 10,
  sym_user_modifier = 11,
  sym_function_keyword = 12,
  sym_procedure_keyword = 13,
  sym_method_keyword = 14,
  sym_local_keyword = 15,
  sym_private_keyword = 16,
  sym_public_keyword = 17,
  sym_param_keyword = 18,
  sym_if_keyword = 19,
  sym_do_keyword = 20,
  sym_while_keyword = 21,
  sym_for_keyword = 22,
  sym_endif_keyword = 23,
  sym_enddo_keyword = 24,
  sym_next_keyword = 25,
  sym_boolean = 26,
  sym_nil = 27,
  sym_number = 28,
  anon_sym_SQUOTE = 29,
  aux_sym_string_token1 = 30,
  anon_sym_SQUOTE_SQUOTE = 31,
  anon_sym_DQUOTE = 32,
  aux_sym_string_token2 = 33,
  anon_sym_DQUOTE_DQUOTE = 34,
  sym_comment = 35,
  sym_operator = 36,
  sym_punctuation = 37,
  sym_newline = 38,
  sym_source_file = 39,
  sym_function_definition = 40,
  sym_procedure_definition = 41,
  sym_method_definition = 42,
  sym_declaration_statement = 43,
  sym_declaration_keyword = 44,
  sym_field_access = 45,
  sym_if_opener = 46,
  sym_do_while_opener = 47,
  sym_for_opener = 48,
  sym_endif = 49,
  sym_enddo = 50,
  sym_next = 51,
  sym_call = 52,
  sym_parenthesized_expression = 53,
  sym_subscript_expression = 54,
  sym_brace_expression = 55,
  sym__expression_item = 56,
  sym_string = 57,
  aux_sym_source_file_repeat1 = 58,
  aux_sym_declaration_statement_repeat1 = 59,
  aux_sym_parenthesized_expression_repeat1 = 60,
  aux_sym_string_repeat1 = 61,
  aux_sym_string_repeat2 = 62,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_COMMA] = ",",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
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
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym_subscript_expression] = "subscript_expression",
  [sym_brace_expression] = "brace_expression",
  [sym__expression_item] = "_expression_item",
  [sym_string] = "string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_declaration_statement_repeat1] = "declaration_statement_repeat1",
  [aux_sym_parenthesized_expression_repeat1] = "parenthesized_expression_repeat1",
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
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
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
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym_subscript_expression] = sym_subscript_expression,
  [sym_brace_expression] = sym_brace_expression,
  [sym__expression_item] = sym__expression_item,
  [sym_string] = sym_string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_declaration_statement_repeat1] = aux_sym_declaration_statement_repeat1,
  [aux_sym_parenthesized_expression_repeat1] = aux_sym_parenthesized_expression_repeat1,
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
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
  [sym_parenthesized_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_subscript_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_brace_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__expression_item] = {
    .visible = false,
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
  [aux_sym_parenthesized_expression_repeat1] = {
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
  field_arguments = 1,
  field_field = 2,
  field_function = 3,
  field_kind = 4,
  field_name = 5,
  field_object = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_arguments] = "arguments",
  [field_field] = "field",
  [field_function] = "function",
  [field_kind] = "kind",
  [field_name] = "name",
  [field_object] = "object",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 1},
  [5] = {.index = 6, .length = 2},
  [6] = {.index = 8, .length = 3},
  [7] = {.index = 11, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_arguments, 1},
    {field_function, 0},
  [3] =
    {field_kind, 0},
    {field_name, 1},
  [5] =
    {field_name, 2},
  [6] =
    {field_field, 2},
    {field_object, 0},
  [8] =
    {field_kind, 0},
    {field_name, 1},
    {field_name, 2, .inherited = true},
  [11] =
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
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 35,
  [37] = 32,
  [38] = 30,
  [39] = 33,
  [40] = 34,
  [41] = 31,
  [42] = 42,
  [43] = 16,
  [44] = 14,
  [45] = 15,
  [46] = 21,
  [47] = 20,
  [48] = 22,
  [49] = 24,
  [50] = 23,
  [51] = 25,
  [52] = 28,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 55,
  [60] = 54,
  [61] = 57,
  [62] = 58,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 67,
  [73] = 73,
  [74] = 74,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(15);
      ADVANCE_MAP(
        '\n', 47,
        '\r', 1,
        '!', 42,
        '"', 34,
        '&', 3,
        '\'', 29,
        '(', 18,
        ')', 19,
        '*', 40,
        ',', 17,
        '-', 43,
        '.', 44,
        '/', 41,
        ':', 42,
        ';', 46,
        '<', 45,
        '=', 42,
        '>', 42,
        '[', 20,
        ']', 21,
        '{', 22,
        '}', 23,
        '%', 39,
        '+', 39,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(47);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(36);
      END_STATE();
    case 3:
      if (lookahead == '&') ADVANCE(38);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(31);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(39);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(24);
      END_STATE();
    case 7:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(5);
      END_STATE();
    case 8:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(11);
      END_STATE();
    case 10:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(5);
      END_STATE();
    case 11:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(5);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 13:
      if (eof) ADVANCE(15);
      ADVANCE_MAP(
        '\n', 47,
        '\r', 1,
        '!', 42,
        '"', 33,
        '&', 3,
        '\'', 28,
        '(', 18,
        ')', 19,
        '*', 40,
        '-', 43,
        '.', 44,
        '/', 41,
        ':', 42,
        '<', 45,
        '=', 42,
        '>', 42,
        '[', 20,
        ']', 21,
        '{', 22,
        '}', 23,
        '%', 39,
        '+', 39,
        ',', 46,
        ';', 46,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 14:
      if (eof) ADVANCE(15);
      ADVANCE_MAP(
        '\n', 47,
        '\r', 1,
        '!', 42,
        '"', 33,
        '&', 3,
        '\'', 28,
        '(', 18,
        '*', 40,
        ',', 17,
        '-', 43,
        '.', 44,
        '/', 41,
        ':', 42,
        ';', 46,
        '<', 45,
        '=', 42,
        '>', 42,
        '[', 20,
        '{', 22,
        '%', 39,
        '+', 39,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_boolean);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(32);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != '\'') ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\'') ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(37);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(36);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_operator);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '*') ADVANCE(38);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '/') ADVANCE(38);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '=') ADVANCE(39);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '>') ADVANCE(16);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_operator);
      ADVANCE_MAP(
        'A', 8,
        'a', 8,
        'F', 6,
        'f', 6,
        'N', 9,
        'n', 9,
        'O', 10,
        'o', 10,
        'T', 6,
        't', 6,
      );
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '=' ||
          lookahead == '>') ADVANCE(39);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_punctuation);
      END_STATE();
    case 47:
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
  [1] = {.lex_state = 13},
  [2] = {.lex_state = 13},
  [3] = {.lex_state = 13},
  [4] = {.lex_state = 14},
  [5] = {.lex_state = 14},
  [6] = {.lex_state = 14},
  [7] = {.lex_state = 13},
  [8] = {.lex_state = 14},
  [9] = {.lex_state = 13},
  [10] = {.lex_state = 13},
  [11] = {.lex_state = 13},
  [12] = {.lex_state = 13},
  [13] = {.lex_state = 13},
  [14] = {.lex_state = 13},
  [15] = {.lex_state = 13},
  [16] = {.lex_state = 13},
  [17] = {.lex_state = 13},
  [18] = {.lex_state = 13},
  [19] = {.lex_state = 13},
  [20] = {.lex_state = 13},
  [21] = {.lex_state = 13},
  [22] = {.lex_state = 13},
  [23] = {.lex_state = 13},
  [24] = {.lex_state = 13},
  [25] = {.lex_state = 13},
  [26] = {.lex_state = 13},
  [27] = {.lex_state = 13},
  [28] = {.lex_state = 13},
  [29] = {.lex_state = 13},
  [30] = {.lex_state = 13},
  [31] = {.lex_state = 13},
  [32] = {.lex_state = 13},
  [33] = {.lex_state = 13},
  [34] = {.lex_state = 13},
  [35] = {.lex_state = 13},
  [36] = {.lex_state = 13},
  [37] = {.lex_state = 13},
  [38] = {.lex_state = 13},
  [39] = {.lex_state = 13},
  [40] = {.lex_state = 13},
  [41] = {.lex_state = 13},
  [42] = {.lex_state = 13},
  [43] = {.lex_state = 13},
  [44] = {.lex_state = 13},
  [45] = {.lex_state = 13},
  [46] = {.lex_state = 13},
  [47] = {.lex_state = 13},
  [48] = {.lex_state = 13},
  [49] = {.lex_state = 13},
  [50] = {.lex_state = 13},
  [51] = {.lex_state = 13},
  [52] = {.lex_state = 13},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
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
    [sym_source_file] = STATE(66),
    [sym_function_definition] = STATE(2),
    [sym_procedure_definition] = STATE(2),
    [sym_method_definition] = STATE(2),
    [sym_declaration_statement] = STATE(2),
    [sym_declaration_keyword] = STATE(69),
    [sym_field_access] = STATE(2),
    [sym_if_opener] = STATE(2),
    [sym_do_while_opener] = STATE(2),
    [sym_for_opener] = STATE(2),
    [sym_endif] = STATE(2),
    [sym_enddo] = STATE(2),
    [sym_next] = STATE(2),
    [sym_call] = STATE(2),
    [sym_parenthesized_expression] = STATE(2),
    [sym_subscript_expression] = STATE(2),
    [sym_brace_expression] = STATE(2),
    [sym_string] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [anon_sym_DASH_GT] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [sym_static_modifier] = ACTIONS(15),
    [sym_user_modifier] = ACTIONS(15),
    [sym_function_keyword] = ACTIONS(17),
    [sym_procedure_keyword] = ACTIONS(19),
    [sym_method_keyword] = ACTIONS(21),
    [sym_local_keyword] = ACTIONS(23),
    [sym_private_keyword] = ACTIONS(23),
    [sym_public_keyword] = ACTIONS(23),
    [sym_param_keyword] = ACTIONS(23),
    [sym_if_keyword] = ACTIONS(25),
    [sym_do_keyword] = ACTIONS(27),
    [sym_for_keyword] = ACTIONS(29),
    [sym_endif_keyword] = ACTIONS(31),
    [sym_enddo_keyword] = ACTIONS(33),
    [sym_next_keyword] = ACTIONS(35),
    [sym_boolean] = ACTIONS(7),
    [sym_nil] = ACTIONS(7),
    [sym_number] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym_comment] = ACTIONS(7),
    [sym_operator] = ACTIONS(41),
    [sym_punctuation] = ACTIONS(7),
    [sym_newline] = ACTIONS(7),
  },
  [2] = {
    [sym_function_definition] = STATE(3),
    [sym_procedure_definition] = STATE(3),
    [sym_method_definition] = STATE(3),
    [sym_declaration_statement] = STATE(3),
    [sym_declaration_keyword] = STATE(69),
    [sym_field_access] = STATE(3),
    [sym_if_opener] = STATE(3),
    [sym_do_while_opener] = STATE(3),
    [sym_for_opener] = STATE(3),
    [sym_endif] = STATE(3),
    [sym_enddo] = STATE(3),
    [sym_next] = STATE(3),
    [sym_call] = STATE(3),
    [sym_parenthesized_expression] = STATE(3),
    [sym_subscript_expression] = STATE(3),
    [sym_brace_expression] = STATE(3),
    [sym_string] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(43),
    [sym_identifier] = ACTIONS(5),
    [anon_sym_DASH_GT] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [sym_static_modifier] = ACTIONS(15),
    [sym_user_modifier] = ACTIONS(15),
    [sym_function_keyword] = ACTIONS(17),
    [sym_procedure_keyword] = ACTIONS(19),
    [sym_method_keyword] = ACTIONS(21),
    [sym_local_keyword] = ACTIONS(23),
    [sym_private_keyword] = ACTIONS(23),
    [sym_public_keyword] = ACTIONS(23),
    [sym_param_keyword] = ACTIONS(23),
    [sym_if_keyword] = ACTIONS(25),
    [sym_do_keyword] = ACTIONS(27),
    [sym_for_keyword] = ACTIONS(29),
    [sym_endif_keyword] = ACTIONS(31),
    [sym_enddo_keyword] = ACTIONS(33),
    [sym_next_keyword] = ACTIONS(35),
    [sym_boolean] = ACTIONS(45),
    [sym_nil] = ACTIONS(45),
    [sym_number] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym_comment] = ACTIONS(45),
    [sym_operator] = ACTIONS(47),
    [sym_punctuation] = ACTIONS(45),
    [sym_newline] = ACTIONS(45),
  },
  [3] = {
    [sym_function_definition] = STATE(3),
    [sym_procedure_definition] = STATE(3),
    [sym_method_definition] = STATE(3),
    [sym_declaration_statement] = STATE(3),
    [sym_declaration_keyword] = STATE(69),
    [sym_field_access] = STATE(3),
    [sym_if_opener] = STATE(3),
    [sym_do_while_opener] = STATE(3),
    [sym_for_opener] = STATE(3),
    [sym_endif] = STATE(3),
    [sym_enddo] = STATE(3),
    [sym_next] = STATE(3),
    [sym_call] = STATE(3),
    [sym_parenthesized_expression] = STATE(3),
    [sym_subscript_expression] = STATE(3),
    [sym_brace_expression] = STATE(3),
    [sym_string] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(49),
    [sym_identifier] = ACTIONS(51),
    [anon_sym_DASH_GT] = ACTIONS(54),
    [anon_sym_LPAREN] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(60),
    [anon_sym_LBRACE] = ACTIONS(63),
    [sym_static_modifier] = ACTIONS(66),
    [sym_user_modifier] = ACTIONS(66),
    [sym_function_keyword] = ACTIONS(69),
    [sym_procedure_keyword] = ACTIONS(72),
    [sym_method_keyword] = ACTIONS(75),
    [sym_local_keyword] = ACTIONS(78),
    [sym_private_keyword] = ACTIONS(78),
    [sym_public_keyword] = ACTIONS(78),
    [sym_param_keyword] = ACTIONS(78),
    [sym_if_keyword] = ACTIONS(81),
    [sym_do_keyword] = ACTIONS(84),
    [sym_for_keyword] = ACTIONS(87),
    [sym_endif_keyword] = ACTIONS(90),
    [sym_enddo_keyword] = ACTIONS(93),
    [sym_next_keyword] = ACTIONS(96),
    [sym_boolean] = ACTIONS(54),
    [sym_nil] = ACTIONS(54),
    [sym_number] = ACTIONS(54),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(102),
    [sym_comment] = ACTIONS(54),
    [sym_operator] = ACTIONS(105),
    [sym_punctuation] = ACTIONS(54),
    [sym_newline] = ACTIONS(54),
  },
  [4] = {
    [aux_sym_declaration_statement_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(108),
    [sym_identifier] = ACTIONS(110),
    [anon_sym_DASH_GT] = ACTIONS(108),
    [anon_sym_COMMA] = ACTIONS(112),
    [anon_sym_LPAREN] = ACTIONS(108),
    [anon_sym_LBRACK] = ACTIONS(108),
    [anon_sym_LBRACE] = ACTIONS(108),
    [sym_static_modifier] = ACTIONS(108),
    [sym_user_modifier] = ACTIONS(108),
    [sym_function_keyword] = ACTIONS(108),
    [sym_procedure_keyword] = ACTIONS(108),
    [sym_method_keyword] = ACTIONS(108),
    [sym_local_keyword] = ACTIONS(108),
    [sym_private_keyword] = ACTIONS(108),
    [sym_public_keyword] = ACTIONS(108),
    [sym_param_keyword] = ACTIONS(108),
    [sym_if_keyword] = ACTIONS(108),
    [sym_do_keyword] = ACTIONS(108),
    [sym_for_keyword] = ACTIONS(108),
    [sym_endif_keyword] = ACTIONS(108),
    [sym_enddo_keyword] = ACTIONS(108),
    [sym_next_keyword] = ACTIONS(108),
    [sym_boolean] = ACTIONS(108),
    [sym_nil] = ACTIONS(108),
    [sym_number] = ACTIONS(108),
    [anon_sym_SQUOTE] = ACTIONS(108),
    [anon_sym_DQUOTE] = ACTIONS(108),
    [sym_comment] = ACTIONS(108),
    [sym_operator] = ACTIONS(110),
    [sym_punctuation] = ACTIONS(110),
    [sym_newline] = ACTIONS(108),
  },
  [5] = {
    [aux_sym_declaration_statement_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(114),
    [sym_identifier] = ACTIONS(116),
    [anon_sym_DASH_GT] = ACTIONS(114),
    [anon_sym_COMMA] = ACTIONS(112),
    [anon_sym_LPAREN] = ACTIONS(114),
    [anon_sym_LBRACK] = ACTIONS(114),
    [anon_sym_LBRACE] = ACTIONS(114),
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
  [6] = {
    [aux_sym_declaration_statement_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(118),
    [sym_identifier] = ACTIONS(120),
    [anon_sym_DASH_GT] = ACTIONS(118),
    [anon_sym_COMMA] = ACTIONS(122),
    [anon_sym_LPAREN] = ACTIONS(118),
    [anon_sym_LBRACK] = ACTIONS(118),
    [anon_sym_LBRACE] = ACTIONS(118),
    [sym_static_modifier] = ACTIONS(118),
    [sym_user_modifier] = ACTIONS(118),
    [sym_function_keyword] = ACTIONS(118),
    [sym_procedure_keyword] = ACTIONS(118),
    [sym_method_keyword] = ACTIONS(118),
    [sym_local_keyword] = ACTIONS(118),
    [sym_private_keyword] = ACTIONS(118),
    [sym_public_keyword] = ACTIONS(118),
    [sym_param_keyword] = ACTIONS(118),
    [sym_if_keyword] = ACTIONS(118),
    [sym_do_keyword] = ACTIONS(118),
    [sym_for_keyword] = ACTIONS(118),
    [sym_endif_keyword] = ACTIONS(118),
    [sym_enddo_keyword] = ACTIONS(118),
    [sym_next_keyword] = ACTIONS(118),
    [sym_boolean] = ACTIONS(118),
    [sym_nil] = ACTIONS(118),
    [sym_number] = ACTIONS(118),
    [anon_sym_SQUOTE] = ACTIONS(118),
    [anon_sym_DQUOTE] = ACTIONS(118),
    [sym_comment] = ACTIONS(118),
    [sym_operator] = ACTIONS(120),
    [sym_punctuation] = ACTIONS(120),
    [sym_newline] = ACTIONS(118),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(129), 1,
      anon_sym_DASH_GT,
    STATE(21), 1,
      sym_parenthesized_expression,
    ACTIONS(127), 2,
      sym_identifier,
      sym_operator,
    ACTIONS(125), 26,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
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
  [42] = 2,
    ACTIONS(133), 3,
      sym_identifier,
      sym_operator,
      sym_punctuation,
    ACTIONS(131), 28,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
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
      sym_newline,
  [78] = 2,
    ACTIONS(137), 2,
      sym_identifier,
      sym_operator,
    ACTIONS(135), 28,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
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
  [113] = 2,
    ACTIONS(141), 2,
      sym_identifier,
      sym_operator,
    ACTIONS(139), 28,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
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
  [148] = 2,
    ACTIONS(145), 2,
      sym_identifier,
      sym_operator,
    ACTIONS(143), 28,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
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
  [183] = 2,
    ACTIONS(149), 2,
      sym_identifier,
      sym_operator,
    ACTIONS(147), 28,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
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
  [218] = 2,
    ACTIONS(153), 2,
      sym_identifier,
      sym_operator,
    ACTIONS(151), 28,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
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
  [253] = 2,
    ACTIONS(157), 2,
      sym_identifier,
      sym_operator,
    ACTIONS(155), 28,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
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
    ACTIONS(159), 28,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
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
  [323] = 2,
    ACTIONS(165), 2,
      sym_identifier,
      sym_operator,
    ACTIONS(163), 28,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
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
  [358] = 2,
    ACTIONS(169), 2,
      sym_identifier,
      sym_operator,
    ACTIONS(167), 28,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
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
  [393] = 2,
    ACTIONS(173), 2,
      sym_identifier,
      sym_operator,
    ACTIONS(171), 28,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
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
  [428] = 2,
    ACTIONS(177), 2,
      sym_identifier,
      sym_operator,
    ACTIONS(175), 28,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
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
  [463] = 2,
    ACTIONS(181), 2,
      sym_identifier,
      sym_operator,
    ACTIONS(179), 28,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
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
  [498] = 2,
    ACTIONS(185), 2,
      sym_identifier,
      sym_operator,
    ACTIONS(183), 28,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
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
  [533] = 2,
    ACTIONS(189), 2,
      sym_identifier,
      sym_operator,
    ACTIONS(187), 28,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
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
  [568] = 2,
    ACTIONS(193), 2,
      sym_identifier,
      sym_operator,
    ACTIONS(191), 28,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
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
  [603] = 2,
    ACTIONS(197), 2,
      sym_identifier,
      sym_operator,
    ACTIONS(195), 28,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
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
  [638] = 2,
    ACTIONS(201), 2,
      sym_identifier,
      sym_operator,
    ACTIONS(199), 28,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
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
  [673] = 2,
    ACTIONS(205), 2,
      sym_identifier,
      sym_operator,
    ACTIONS(203), 28,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
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
  [708] = 2,
    ACTIONS(209), 2,
      sym_identifier,
      sym_operator,
    ACTIONS(207), 28,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
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
  [743] = 2,
    ACTIONS(213), 2,
      sym_identifier,
      sym_operator,
    ACTIONS(211), 28,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
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
  [778] = 10,
    ACTIONS(215), 1,
      sym_identifier,
    ACTIONS(221), 1,
      anon_sym_LPAREN,
    ACTIONS(226), 1,
      anon_sym_LBRACK,
    ACTIONS(229), 1,
      anon_sym_LBRACE,
    ACTIONS(232), 1,
      anon_sym_SQUOTE,
    ACTIONS(235), 1,
      anon_sym_DQUOTE,
    ACTIONS(238), 1,
      sym_operator,
    ACTIONS(224), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
    ACTIONS(218), 7,
      anon_sym_DASH_GT,
      sym_boolean,
      sym_nil,
      sym_number,
      sym_comment,
      sym_punctuation,
      sym_newline,
    STATE(29), 8,
      sym_field_access,
      sym_call,
      sym_parenthesized_expression,
      sym_subscript_expression,
      sym_brace_expression,
      sym__expression_item,
      sym_string,
      aux_sym_parenthesized_expression_repeat1,
  [824] = 10,
    ACTIONS(241), 1,
      sym_identifier,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      anon_sym_LBRACK,
    ACTIONS(249), 1,
      anon_sym_LBRACE,
    ACTIONS(251), 1,
      anon_sym_RBRACE,
    ACTIONS(253), 1,
      anon_sym_SQUOTE,
    ACTIONS(255), 1,
      anon_sym_DQUOTE,
    ACTIONS(257), 1,
      sym_operator,
    ACTIONS(243), 7,
      anon_sym_DASH_GT,
      sym_boolean,
      sym_nil,
      sym_number,
      sym_comment,
      sym_punctuation,
      sym_newline,
    STATE(41), 8,
      sym_field_access,
      sym_call,
      sym_parenthesized_expression,
      sym_subscript_expression,
      sym_brace_expression,
      sym__expression_item,
      sym_string,
      aux_sym_parenthesized_expression_repeat1,
  [868] = 10,
    ACTIONS(241), 1,
      sym_identifier,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      anon_sym_LBRACK,
    ACTIONS(249), 1,
      anon_sym_LBRACE,
    ACTIONS(253), 1,
      anon_sym_SQUOTE,
    ACTIONS(255), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      anon_sym_RBRACE,
    ACTIONS(263), 1,
      sym_operator,
    ACTIONS(259), 7,
      anon_sym_DASH_GT,
      sym_boolean,
      sym_nil,
      sym_number,
      sym_comment,
      sym_punctuation,
      sym_newline,
    STATE(29), 8,
      sym_field_access,
      sym_call,
      sym_parenthesized_expression,
      sym_subscript_expression,
      sym_brace_expression,
      sym__expression_item,
      sym_string,
      aux_sym_parenthesized_expression_repeat1,
  [912] = 10,
    ACTIONS(241), 1,
      sym_identifier,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      anon_sym_LBRACK,
    ACTIONS(249), 1,
      anon_sym_LBRACE,
    ACTIONS(253), 1,
      anon_sym_SQUOTE,
    ACTIONS(255), 1,
      anon_sym_DQUOTE,
    ACTIONS(267), 1,
      anon_sym_RBRACK,
    ACTIONS(269), 1,
      sym_operator,
    ACTIONS(265), 7,
      anon_sym_DASH_GT,
      sym_boolean,
      sym_nil,
      sym_number,
      sym_comment,
      sym_punctuation,
      sym_newline,
    STATE(34), 8,
      sym_field_access,
      sym_call,
      sym_parenthesized_expression,
      sym_subscript_expression,
      sym_brace_expression,
      sym__expression_item,
      sym_string,
      aux_sym_parenthesized_expression_repeat1,
  [956] = 10,
    ACTIONS(241), 1,
      sym_identifier,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      anon_sym_LBRACK,
    ACTIONS(249), 1,
      anon_sym_LBRACE,
    ACTIONS(253), 1,
      anon_sym_SQUOTE,
    ACTIONS(255), 1,
      anon_sym_DQUOTE,
    ACTIONS(263), 1,
      sym_operator,
    ACTIONS(271), 1,
      anon_sym_RPAREN,
    ACTIONS(259), 7,
      anon_sym_DASH_GT,
      sym_boolean,
      sym_nil,
      sym_number,
      sym_comment,
      sym_punctuation,
      sym_newline,
    STATE(29), 8,
      sym_field_access,
      sym_call,
      sym_parenthesized_expression,
      sym_subscript_expression,
      sym_brace_expression,
      sym__expression_item,
      sym_string,
      aux_sym_parenthesized_expression_repeat1,
  [1000] = 10,
    ACTIONS(241), 1,
      sym_identifier,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      anon_sym_LBRACK,
    ACTIONS(249), 1,
      anon_sym_LBRACE,
    ACTIONS(253), 1,
      anon_sym_SQUOTE,
    ACTIONS(255), 1,
      anon_sym_DQUOTE,
    ACTIONS(263), 1,
      sym_operator,
    ACTIONS(273), 1,
      anon_sym_RBRACK,
    ACTIONS(259), 7,
      anon_sym_DASH_GT,
      sym_boolean,
      sym_nil,
      sym_number,
      sym_comment,
      sym_punctuation,
      sym_newline,
    STATE(29), 8,
      sym_field_access,
      sym_call,
      sym_parenthesized_expression,
      sym_subscript_expression,
      sym_brace_expression,
      sym__expression_item,
      sym_string,
      aux_sym_parenthesized_expression_repeat1,
  [1044] = 10,
    ACTIONS(241), 1,
      sym_identifier,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      anon_sym_LBRACK,
    ACTIONS(249), 1,
      anon_sym_LBRACE,
    ACTIONS(253), 1,
      anon_sym_SQUOTE,
    ACTIONS(255), 1,
      anon_sym_DQUOTE,
    ACTIONS(277), 1,
      anon_sym_RPAREN,
    ACTIONS(279), 1,
      sym_operator,
    ACTIONS(275), 7,
      anon_sym_DASH_GT,
      sym_boolean,
      sym_nil,
      sym_number,
      sym_comment,
      sym_punctuation,
      sym_newline,
    STATE(33), 8,
      sym_field_access,
      sym_call,
      sym_parenthesized_expression,
      sym_subscript_expression,
      sym_brace_expression,
      sym__expression_item,
      sym_string,
      aux_sym_parenthesized_expression_repeat1,
  [1088] = 10,
    ACTIONS(241), 1,
      sym_identifier,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      anon_sym_LBRACK,
    ACTIONS(249), 1,
      anon_sym_LBRACE,
    ACTIONS(253), 1,
      anon_sym_SQUOTE,
    ACTIONS(255), 1,
      anon_sym_DQUOTE,
    ACTIONS(283), 1,
      anon_sym_RPAREN,
    ACTIONS(285), 1,
      sym_operator,
    ACTIONS(281), 7,
      anon_sym_DASH_GT,
      sym_boolean,
      sym_nil,
      sym_number,
      sym_comment,
      sym_punctuation,
      sym_newline,
    STATE(39), 8,
      sym_field_access,
      sym_call,
      sym_parenthesized_expression,
      sym_subscript_expression,
      sym_brace_expression,
      sym__expression_item,
      sym_string,
      aux_sym_parenthesized_expression_repeat1,
  [1132] = 10,
    ACTIONS(241), 1,
      sym_identifier,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      anon_sym_LBRACK,
    ACTIONS(249), 1,
      anon_sym_LBRACE,
    ACTIONS(253), 1,
      anon_sym_SQUOTE,
    ACTIONS(255), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      anon_sym_RBRACK,
    ACTIONS(291), 1,
      sym_operator,
    ACTIONS(287), 7,
      anon_sym_DASH_GT,
      sym_boolean,
      sym_nil,
      sym_number,
      sym_comment,
      sym_punctuation,
      sym_newline,
    STATE(40), 8,
      sym_field_access,
      sym_call,
      sym_parenthesized_expression,
      sym_subscript_expression,
      sym_brace_expression,
      sym__expression_item,
      sym_string,
      aux_sym_parenthesized_expression_repeat1,
  [1176] = 10,
    ACTIONS(241), 1,
      sym_identifier,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      anon_sym_LBRACK,
    ACTIONS(249), 1,
      anon_sym_LBRACE,
    ACTIONS(253), 1,
      anon_sym_SQUOTE,
    ACTIONS(255), 1,
      anon_sym_DQUOTE,
    ACTIONS(295), 1,
      anon_sym_RBRACE,
    ACTIONS(297), 1,
      sym_operator,
    ACTIONS(293), 7,
      anon_sym_DASH_GT,
      sym_boolean,
      sym_nil,
      sym_number,
      sym_comment,
      sym_punctuation,
      sym_newline,
    STATE(31), 8,
      sym_field_access,
      sym_call,
      sym_parenthesized_expression,
      sym_subscript_expression,
      sym_brace_expression,
      sym__expression_item,
      sym_string,
      aux_sym_parenthesized_expression_repeat1,
  [1220] = 10,
    ACTIONS(241), 1,
      sym_identifier,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      anon_sym_LBRACK,
    ACTIONS(249), 1,
      anon_sym_LBRACE,
    ACTIONS(253), 1,
      anon_sym_SQUOTE,
    ACTIONS(255), 1,
      anon_sym_DQUOTE,
    ACTIONS(263), 1,
      sym_operator,
    ACTIONS(299), 1,
      anon_sym_RPAREN,
    ACTIONS(259), 7,
      anon_sym_DASH_GT,
      sym_boolean,
      sym_nil,
      sym_number,
      sym_comment,
      sym_punctuation,
      sym_newline,
    STATE(29), 8,
      sym_field_access,
      sym_call,
      sym_parenthesized_expression,
      sym_subscript_expression,
      sym_brace_expression,
      sym__expression_item,
      sym_string,
      aux_sym_parenthesized_expression_repeat1,
  [1264] = 10,
    ACTIONS(241), 1,
      sym_identifier,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      anon_sym_LBRACK,
    ACTIONS(249), 1,
      anon_sym_LBRACE,
    ACTIONS(253), 1,
      anon_sym_SQUOTE,
    ACTIONS(255), 1,
      anon_sym_DQUOTE,
    ACTIONS(263), 1,
      sym_operator,
    ACTIONS(301), 1,
      anon_sym_RBRACK,
    ACTIONS(259), 7,
      anon_sym_DASH_GT,
      sym_boolean,
      sym_nil,
      sym_number,
      sym_comment,
      sym_punctuation,
      sym_newline,
    STATE(29), 8,
      sym_field_access,
      sym_call,
      sym_parenthesized_expression,
      sym_subscript_expression,
      sym_brace_expression,
      sym__expression_item,
      sym_string,
      aux_sym_parenthesized_expression_repeat1,
  [1308] = 10,
    ACTIONS(241), 1,
      sym_identifier,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      anon_sym_LBRACK,
    ACTIONS(249), 1,
      anon_sym_LBRACE,
    ACTIONS(253), 1,
      anon_sym_SQUOTE,
    ACTIONS(255), 1,
      anon_sym_DQUOTE,
    ACTIONS(263), 1,
      sym_operator,
    ACTIONS(303), 1,
      anon_sym_RBRACE,
    ACTIONS(259), 7,
      anon_sym_DASH_GT,
      sym_boolean,
      sym_nil,
      sym_number,
      sym_comment,
      sym_punctuation,
      sym_newline,
    STATE(29), 8,
      sym_field_access,
      sym_call,
      sym_parenthesized_expression,
      sym_subscript_expression,
      sym_brace_expression,
      sym__expression_item,
      sym_string,
      aux_sym_parenthesized_expression_repeat1,
  [1352] = 5,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    ACTIONS(307), 1,
      anon_sym_DASH_GT,
    STATE(46), 1,
      sym_parenthesized_expression,
    ACTIONS(305), 2,
      sym_identifier,
      sym_operator,
    ACTIONS(309), 13,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_boolean,
      sym_nil,
      sym_number,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_comment,
      sym_punctuation,
      sym_newline,
  [1381] = 2,
    ACTIONS(165), 2,
      sym_identifier,
      sym_operator,
    ACTIONS(163), 15,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_boolean,
      sym_nil,
      sym_number,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_comment,
      sym_punctuation,
      sym_newline,
  [1403] = 2,
    ACTIONS(157), 2,
      sym_identifier,
      sym_operator,
    ACTIONS(155), 15,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_boolean,
      sym_nil,
      sym_number,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_comment,
      sym_punctuation,
      sym_newline,
  [1425] = 2,
    ACTIONS(161), 2,
      sym_identifier,
      sym_operator,
    ACTIONS(159), 15,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_boolean,
      sym_nil,
      sym_number,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_comment,
      sym_punctuation,
      sym_newline,
  [1447] = 2,
    ACTIONS(185), 2,
      sym_identifier,
      sym_operator,
    ACTIONS(183), 15,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_boolean,
      sym_nil,
      sym_number,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_comment,
      sym_punctuation,
      sym_newline,
  [1469] = 2,
    ACTIONS(181), 2,
      sym_identifier,
      sym_operator,
    ACTIONS(179), 15,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_boolean,
      sym_nil,
      sym_number,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_comment,
      sym_punctuation,
      sym_newline,
  [1491] = 2,
    ACTIONS(189), 2,
      sym_identifier,
      sym_operator,
    ACTIONS(187), 15,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_boolean,
      sym_nil,
      sym_number,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_comment,
      sym_punctuation,
      sym_newline,
  [1513] = 2,
    ACTIONS(197), 2,
      sym_identifier,
      sym_operator,
    ACTIONS(195), 15,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_boolean,
      sym_nil,
      sym_number,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_comment,
      sym_punctuation,
      sym_newline,
  [1535] = 2,
    ACTIONS(193), 2,
      sym_identifier,
      sym_operator,
    ACTIONS(191), 15,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_boolean,
      sym_nil,
      sym_number,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_comment,
      sym_punctuation,
      sym_newline,
  [1557] = 2,
    ACTIONS(201), 2,
      sym_identifier,
      sym_operator,
    ACTIONS(199), 15,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_boolean,
      sym_nil,
      sym_number,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_comment,
      sym_punctuation,
      sym_newline,
  [1579] = 2,
    ACTIONS(213), 2,
      sym_identifier,
      sym_operator,
    ACTIONS(211), 15,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_boolean,
      sym_nil,
      sym_number,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_comment,
      sym_punctuation,
      sym_newline,
  [1601] = 4,
    ACTIONS(311), 1,
      anon_sym_SQUOTE,
    ACTIONS(313), 1,
      aux_sym_string_token1,
    ACTIONS(316), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(53), 1,
      aux_sym_string_repeat1,
  [1614] = 4,
    ACTIONS(319), 1,
      anon_sym_DQUOTE,
    ACTIONS(321), 1,
      aux_sym_string_token2,
    ACTIONS(323), 1,
      anon_sym_DQUOTE_DQUOTE,
    STATE(58), 1,
      aux_sym_string_repeat2,
  [1627] = 4,
    ACTIONS(319), 1,
      anon_sym_SQUOTE,
    ACTIONS(325), 1,
      aux_sym_string_token1,
    ACTIONS(327), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(57), 1,
      aux_sym_string_repeat1,
  [1640] = 4,
    ACTIONS(329), 1,
      anon_sym_DQUOTE,
    ACTIONS(331), 1,
      aux_sym_string_token2,
    ACTIONS(334), 1,
      anon_sym_DQUOTE_DQUOTE,
    STATE(56), 1,
      aux_sym_string_repeat2,
  [1653] = 4,
    ACTIONS(337), 1,
      anon_sym_SQUOTE,
    ACTIONS(339), 1,
      aux_sym_string_token1,
    ACTIONS(341), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(53), 1,
      aux_sym_string_repeat1,
  [1666] = 4,
    ACTIONS(337), 1,
      anon_sym_DQUOTE,
    ACTIONS(343), 1,
      aux_sym_string_token2,
    ACTIONS(345), 1,
      anon_sym_DQUOTE_DQUOTE,
    STATE(56), 1,
      aux_sym_string_repeat2,
  [1679] = 4,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    ACTIONS(349), 1,
      aux_sym_string_token1,
    ACTIONS(351), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(61), 1,
      aux_sym_string_repeat1,
  [1692] = 4,
    ACTIONS(347), 1,
      anon_sym_DQUOTE,
    ACTIONS(353), 1,
      aux_sym_string_token2,
    ACTIONS(355), 1,
      anon_sym_DQUOTE_DQUOTE,
    STATE(62), 1,
      aux_sym_string_repeat2,
  [1705] = 4,
    ACTIONS(339), 1,
      aux_sym_string_token1,
    ACTIONS(341), 1,
      anon_sym_SQUOTE_SQUOTE,
    ACTIONS(357), 1,
      anon_sym_SQUOTE,
    STATE(53), 1,
      aux_sym_string_repeat1,
  [1718] = 4,
    ACTIONS(343), 1,
      aux_sym_string_token2,
    ACTIONS(345), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(357), 1,
      anon_sym_DQUOTE,
    STATE(56), 1,
      aux_sym_string_repeat2,
  [1731] = 1,
    ACTIONS(359), 1,
      sym_identifier,
  [1735] = 1,
    ACTIONS(361), 1,
      sym_identifier,
  [1739] = 1,
    ACTIONS(363), 1,
      sym_function_keyword,
  [1743] = 1,
    ACTIONS(365), 1,
      ts_builtin_sym_end,
  [1747] = 1,
    ACTIONS(367), 1,
      sym_identifier,
  [1751] = 1,
    ACTIONS(369), 1,
      sym_while_keyword,
  [1755] = 1,
    ACTIONS(371), 1,
      sym_identifier,
  [1759] = 1,
    ACTIONS(373), 1,
      sym_identifier,
  [1763] = 1,
    ACTIONS(375), 1,
      sym_identifier,
  [1767] = 1,
    ACTIONS(377), 1,
      sym_identifier,
  [1771] = 1,
    ACTIONS(379), 1,
      sym_identifier,
  [1775] = 1,
    ACTIONS(381), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 42,
  [SMALL_STATE(9)] = 78,
  [SMALL_STATE(10)] = 113,
  [SMALL_STATE(11)] = 148,
  [SMALL_STATE(12)] = 183,
  [SMALL_STATE(13)] = 218,
  [SMALL_STATE(14)] = 253,
  [SMALL_STATE(15)] = 288,
  [SMALL_STATE(16)] = 323,
  [SMALL_STATE(17)] = 358,
  [SMALL_STATE(18)] = 393,
  [SMALL_STATE(19)] = 428,
  [SMALL_STATE(20)] = 463,
  [SMALL_STATE(21)] = 498,
  [SMALL_STATE(22)] = 533,
  [SMALL_STATE(23)] = 568,
  [SMALL_STATE(24)] = 603,
  [SMALL_STATE(25)] = 638,
  [SMALL_STATE(26)] = 673,
  [SMALL_STATE(27)] = 708,
  [SMALL_STATE(28)] = 743,
  [SMALL_STATE(29)] = 778,
  [SMALL_STATE(30)] = 824,
  [SMALL_STATE(31)] = 868,
  [SMALL_STATE(32)] = 912,
  [SMALL_STATE(33)] = 956,
  [SMALL_STATE(34)] = 1000,
  [SMALL_STATE(35)] = 1044,
  [SMALL_STATE(36)] = 1088,
  [SMALL_STATE(37)] = 1132,
  [SMALL_STATE(38)] = 1176,
  [SMALL_STATE(39)] = 1220,
  [SMALL_STATE(40)] = 1264,
  [SMALL_STATE(41)] = 1308,
  [SMALL_STATE(42)] = 1352,
  [SMALL_STATE(43)] = 1381,
  [SMALL_STATE(44)] = 1403,
  [SMALL_STATE(45)] = 1425,
  [SMALL_STATE(46)] = 1447,
  [SMALL_STATE(47)] = 1469,
  [SMALL_STATE(48)] = 1491,
  [SMALL_STATE(49)] = 1513,
  [SMALL_STATE(50)] = 1535,
  [SMALL_STATE(51)] = 1557,
  [SMALL_STATE(52)] = 1579,
  [SMALL_STATE(53)] = 1601,
  [SMALL_STATE(54)] = 1614,
  [SMALL_STATE(55)] = 1627,
  [SMALL_STATE(56)] = 1640,
  [SMALL_STATE(57)] = 1653,
  [SMALL_STATE(58)] = 1666,
  [SMALL_STATE(59)] = 1679,
  [SMALL_STATE(60)] = 1692,
  [SMALL_STATE(61)] = 1705,
  [SMALL_STATE(62)] = 1718,
  [SMALL_STATE(63)] = 1731,
  [SMALL_STATE(64)] = 1735,
  [SMALL_STATE(65)] = 1739,
  [SMALL_STATE(66)] = 1743,
  [SMALL_STATE(67)] = 1747,
  [SMALL_STATE(68)] = 1751,
  [SMALL_STATE(69)] = 1755,
  [SMALL_STATE(70)] = 1759,
  [SMALL_STATE(71)] = 1763,
  [SMALL_STATE(72)] = 1767,
  [SMALL_STATE(73)] = 1771,
  [SMALL_STATE(74)] = 1775,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_statement, 2, 0, 3),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration_statement, 2, 0, 3),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_statement, 3, 0, 6),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration_statement, 3, 0, 6),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_statement_repeat1, 2, 0, 7),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_statement_repeat1, 2, 0, 7),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_statement_repeat1, 2, 0, 7), SHIFT_REPEAT(73),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_statement_repeat1, 2, 0, 1),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_statement_repeat1, 2, 0, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endif, 1, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_endif, 1, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enddo, 1, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enddo, 1, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_opener, 1, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_opener, 1, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_opener, 1, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_opener, 1, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_next, 1, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_next, 1, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 2, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 2, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subscript_expression, 2, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subscript_expression, 2, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brace_expression, 2, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_expression, 2, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 2, 0, 1),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 2, 0, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_definition, 2, 0, 1),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_definition, 2, 0, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_definition, 2, 0, 1),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_definition, 2, 0, 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 2, 0, 2),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 2, 0, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brace_expression, 3, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_expression, 3, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subscript_expression, 3, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subscript_expression, 3, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_access, 3, 0, 5),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_access, 3, 0, 5),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3, 0, 4),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 3, 0, 4),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_while_opener, 2, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_do_while_opener, 2, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [215] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parenthesized_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parenthesized_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parenthesized_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parenthesized_expression_repeat1, 2, 0, 0),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parenthesized_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parenthesized_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parenthesized_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parenthesized_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parenthesized_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_item, 1, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_item, 1, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [313] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [316] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2, 0, 0),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2, 0, 0), SHIFT_REPEAT(56),
  [334] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2, 0, 0), SHIFT_REPEAT(56),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_keyword, 1, 0, 0),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [365] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
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
