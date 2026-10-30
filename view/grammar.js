const ci = (value) => value.split("").map((ch) => /[a-z]/i.test(ch) ? `[${ch.toLowerCase()}${ch.toUpperCase()}]` : ch).join("");
const word = (value) => token(prec(2, new RegExp(ci(value))));
const words = (values) => token(prec(2, new RegExp(values.map(ci).join("|"))));

const SQL_KEYWORDS = [
  "select", "from", "where", "and", "or", "not", "in", "is", "null", "as", "on",
  "join", "left", "right", "inner", "outer", "full", "cross", "group", "by", "order",
  "having", "distinct", "union", "all", "intersect", "minus", "except", "case", "when",
  "then", "else", "end", "like", "between", "exists", "asc", "desc", "with", "within",
  "over", "partition", "connect", "prior", "start", "nulls", "first", "last", "insert",
  "update", "delete", "into", "values", "set", "any", "some", "fetch", "offset", "rows",
  "only", "escape"
];

module.exports = grammar({
  name: "newage_view",

  extras: ($) => [/\s+/, $.comment],

  word: ($) => $.identifier,

  rules: {
    // Lista plana: uma linha de cabeçalho fora do formato não apaga o destaque das seguintes.
    source_file: ($) => repeat(choice(
      $.table_declaration,
      $.exec_view,
      $.bind_declaration,
      $._sql_item
    )),

    table_declaration: ($) => seq(
      $.table_keyword,
      field("alias", $.identifier),
      field("name", $.identifier)
    ),

    exec_view: ($) => seq(
      $.exec_view_keyword,
      "(",
      field("name", $._exec_view_argument),
      repeat(seq(",", $._exec_view_argument)),
      ")"
    ),

    _exec_view_argument: ($) => choice($.string, alias($.quoted_identifier, $.string)),

    bind_declaration: ($) => seq(
      $.bindvar_keyword,
      field("name", $.identifier)
    ),

    _sql_item: ($) => choice(
      $.xharbour_expression,
      $.call,
      $.qualified_name,
      $.keyword,
      $.identifier,
      $.table_placeholder,
      $.bind_reference,
      $.number,
      $.string,
      $.quoted_identifier,
      $.operator,
      $.punctuation
    ),

    // Trecho xHarbour avaliado pelo NewAge: o conteúdo precisa ficar balanceado.
    xharbour_expression: ($) => seq(
      field("function", $.xharbour_function),
      token.immediate("("),
      repeat($._xharbour_item),
      ")"
    ),

    xharbour_group: ($) => seq("(", repeat($._xharbour_item), ")"),

    _xharbour_item: ($) => choice(
      $.xharbour_group,
      $.string,
      alias(/"[^"\n]*"/, $.string),
      $._xharbour_text
    ),

    _xharbour_text: (_) => /[^()'"\s]+/,

    // `TABLE(` do Oracle é chamada, não declaração de cabeçalho.
    call: ($) => seq(
      field("function", choice($.identifier, alias($.table_keyword, $.identifier))),
      token.immediate("(")
    ),

    qualified_name: ($) => seq(
      field("table", $.identifier),
      token.immediate("."),
      field("column", choice($.identifier, "*"))
    ),

    table_keyword: (_) => word("table"),
    exec_view_keyword: (_) => word("execview"),
    bindvar_keyword: (_) => word("bindvar"),
    xharbour_function: (_) => words(["iif", "if"]),
    keyword: (_) => words(SQL_KEYWORDS),

    identifier: (_) => /[A-Za-z_][A-Za-z0-9_$#]*/,
    table_placeholder: (_) => /<[A-Za-z_][A-Za-z0-9_]*>/,
    bind_reference: (_) => /:[A-Za-z_][A-Za-z0-9_]*/,
    number: (_) => /\d+(\.\d+)?/,
    string: (_) => /'([^']|'')*'/,
    quoted_identifier: (_) => /"[^"\n]*"/,

    comment: (_) => token(choice(
      seq("--", /.*/),
      seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/")
    )),

    operator: (_) => choice("=", "<>", "!=", "<", ">", "<=", ">=", "+", "-", "*", "/", "||", "%"),

    punctuation: (_) => choice(",", ";", "(", ")", ".")
  }
});
