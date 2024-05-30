"component" @keyword
"signal"    @keyword
"end"       @keyword

"and" @operator
"or"  @operator
"not" @operator
"=>"  @operator
"<="  @operator

"(" @punctuation.bracket
")" @punctuation.bracket
"," @punctuation.delimiter

(number) @number
(identifier) @variable

(expression_component name:   (identifier) @type)
(expression_component inputs: (expression_component_input_list (identifier) @variable))

(component         (identifier) @type.definition)
(component_inputs  (identifier) @variable.parameter)
(component_outputs (identifier) @variable.parameter)

(comment) @comment
