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

(component name:    (identifier) @type.definition)
(component inputs:  (component_inputs (identifier) @variable.parameter))
(component outputs: (component_outputs (identifier) @variable.parameter))
