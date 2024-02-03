module.exports = grammar({
  name: "plantuml",
  word: $ => $.identifier,
  rules: {
    diagram: $ => repeat(
      choice(
        $._startend,
        $.preprocessor,
        $.procedure
      )
    ),
    _startend: $ => choice(
      "@startuml",
      "@enduml"
    ),
    preprocessor: $ => seq(
      alias("!include", $.include),
      " ",
      field("url", $.unqouted_string)
    ),
    procedure: $ => seq(alias($.identifier, $.procedure_identifier), $.block),
    block: $ => seq(
      '(',
      $.argument_list,
      ')'
    ),
    argument_list: $ => repeat1(
      seq(
        $._expression,
        optional(seq(",", optional(" ")))
      )
    ),
    _expression: $ => choice(
      $.identifier,
      $.string,
      $.named_parameter,
    ),
    named_parameter: $ => seq(
      "$",
      $.identifier,
      "=",
      $.string
    ),
    identifier: $ => /\w+_*/,
    string: $ => /["'][^"]*?["']/,
    unqouted_string: $ => /.+/,
  }
});
