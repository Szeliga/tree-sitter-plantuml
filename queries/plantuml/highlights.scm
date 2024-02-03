[
  "("
  ")"
] @punctuation.bracket

[
  "@startuml"
  "@enduml"
] @keyword

[
  ","
] @punctuation.delimiter

[
"="
] @operator

(procedure
  (procedure_identifier) @function.call
)

(string) @string

(preprocessor
  (include) @keyword.import
  url: (unqouted_string) @string.special.url
)

(identifier) @constant
