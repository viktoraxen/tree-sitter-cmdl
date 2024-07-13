"component" @keyword
"signal"    @keyword
"end"       @keyword

"and" @operator
"or"  @operator
"not" @operator
"=>"  @operator
"<="  @operator

"("  @punctuation.bracket
")"  @punctuation.bracket
","  @punctuation.delimiter
"."  @punctuation.delimiter
":"  @punctuation.delimiter
"::" @punctuation.delimiter

(number)     @constant
(identifier) @variable

(constant             width:  (number) @number)
(signal_definition    (number) @number)
(reference            (number) @number)
(expression_subscript (number) @number)

(expression_component name:   (component_reference (identifier) @type))
(expression_component inputs: (expression_component_input_list (identifier) @variable))

(component         (identifier) @type.definition)
(component_inputs  (identifier) @variable.parameter)
(component_outputs (identifier) @variable.parameter)

(comment) @comment
