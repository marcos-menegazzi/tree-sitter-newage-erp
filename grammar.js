const word = (value) => token(prec(2, new RegExp(value.split("").map((ch) => `[${ch.toLowerCase()}${ch.toUpperCase()}]`).join(""))));
const commaSep1 = (rule) => seq(rule, repeat(seq(",", rule)));

module.exports = grammar({
  name: "newage_erp",

  extras: ($) => [/[ \t\f]+/],

  word: ($) => $.identifier,

  conflicts: ($) => [
    [$.source_file, $.field_access]
  ],

  rules: {
    source_file: ($) => repeat(choice(
      $.function_definition,
      $.procedure_definition,
      $.method_definition,
      $.declaration_statement,
      $.field_access,
      $.if_opener,
      $.do_while_opener,
      $.for_opener,
      $.endif,
      $.enddo,
      $.next,
      $.call,
      $.comment,
      $.string,
      $.number,
      $.boolean,
      $.nil,
      $.identifier,
      $.operator,
      "->",
      $.punctuation,
      $.newline
    )),

    function_definition: ($) => seq(
      optional(choice($.static_modifier, $.user_modifier)),
      $.function_keyword,
      field("name", $.identifier)
    ),

    procedure_definition: ($) => seq(
      $.procedure_keyword,
      field("name", $.identifier)
    ),

    method_definition: ($) => seq(
      $.method_keyword,
      field("name", $.identifier)
    ),

    declaration_statement: ($) => seq(
      field("kind", $.declaration_keyword),
      commaSep1(field("name", $.identifier))
    ),

    declaration_keyword: ($) => choice(
      $.local_keyword,
      $.private_keyword,
      $.public_keyword,
      $.param_keyword
    ),

    // Alias->field access (e.g. PAGREC->LOCAL). Modeled explicitly so that
    // the field name is parsed as a plain identifier instead of being
    // mistaken for the start of a new declaration_statement, which would
    // otherwise happen for reserved words like LOCAL/PRIVATE/PUBLIC/PARAM
    // since the grammar has no statement boundaries to rule that out.
    field_access: ($) => seq(
      field("object", $.identifier),
      "->",
      field("field", $.identifier)
    ),

    if_opener: ($) => $.if_keyword,
    do_while_opener: ($) => seq($.do_keyword, $.while_keyword),
    for_opener: ($) => $.for_keyword,
    endif: ($) => $.endif_keyword,
    enddo: ($) => $.enddo_keyword,
    next: ($) => $.next_keyword,

    call: ($) => prec(1, seq(
      field("function", $.identifier),
      "(",
      repeat(choice($.string, $.number, $.boolean, $.nil, $.identifier, $.operator, $.punctuation, $.newline)),
      ")"
    )),

    static_modifier: (_) => word("static"),
    user_modifier: (_) => word("user"),
    function_keyword: (_) => word("function"),
    procedure_keyword: (_) => word("procedure"),
    method_keyword: (_) => word("method"),
    local_keyword: (_) => word("local"),
    private_keyword: (_) => word("private"),
    public_keyword: (_) => word("public"),
    param_keyword: (_) => word("param"),
    if_keyword: (_) => word("if"),
    do_keyword: (_) => word("do"),
    while_keyword: (_) => word("while"),
    for_keyword: (_) => word("for"),
    endif_keyword: (_) => word("endif"),
    enddo_keyword: (_) => word("enddo"),
    next_keyword: (_) => word("next"),

    boolean: (_) => token(prec(2, choice(/\.[tT]\./, /\.[fF]\./))),
    nil: (_) => token(prec(2, word("nil"))),
    identifier: (_) => /[A-Za-z_][A-Za-z0-9_]*/,
    number: (_) => /\d+(\.\d+)?/,
    string: (_) => choice(
      seq("'", repeat(choice(/[^'\r\n]+/, "''")), "'"),
      seq("\"", repeat(choice(/[^"\r\n]+/, "\"\"")), "\"")
    ),
    comment: (_) => token(choice(
      seq("//", /[^\r\n]*/),
      seq("&&", /[^\r\n]*/),
      seq(/\*{2,}/, /[^\r\n]*/)
    )),
    operator: (_) => token(choice(
      ":=",
      "<=",
      ">=",
      "<>",
      "!=",
      "==",
      /\.[aA][nN][dD]\./,
      /\.[oO][rR]\./,
      /\.[nN][oO][tT]\./,
      "+",
      "-",
      "*",
      "/",
      "%",
      "=",
      "<",
      ">",
      ":",
      "."
    )),
    punctuation: (_) => token(choice(",", ";", "(", ")", "[", "]", "{", "}")),
    newline: (_) => /\r?\n/,
  },
});
