module.exports = grammar({
    name: 'CMDL',

    rules: {
        source_file: $ => optional($._statements),

        _statements: $ => repeat1($._statement),

        _statement: $ => choice(
            $.declaration,
            $.assignment,
            $.component),

        component: $ => seq(
            'component',
            field('name', $.identifier),
            '(',  field('inputs',  $.component_inputs), ')',
            '=>', field('outputs', $.component_outputs),
            optional(
                field('body', $.component_body)),
            'end'),

        component_inputs:  $ => $._identifiers,
        component_outputs: $ => $._identifiers,
        component_body:    $ => $._statements,

        /*
         * Declarations
         *
         */

        declaration: $ => seq(
            'signal',
            field('left', $._declaration_left),
            optional(seq(
                '<=',
                field('right', $._declaration_right)))),

        _declaration_left: $ => choice(
            $.identifier,
            $.declaration_left_list),

        _declaration_right: $ => choice(
            $._expression,
            $.declaration_right_list),

        declaration_left_list:  $ => prec(-1, commaSep1($.identifier)),
        declaration_right_list: $ => prec(-1, commaSep1($._expression)),

        /*
         * Assignments
         *
         */

        assignment: $ => seq(
            field('left', $._assignment_left),
            '<=',
            field('right', $._assignment_right)),

        _assignment_left: $ => choice(
            prec(0, $.identifier),
            prec(1, $.assignment_left_list)),

        _assignment_right: $ => choice(
            prec(0, $._expression),
            prec(1, $.assignment_right_list)),

        assignment_left_list:  $ => prec(-1, commaSep1($.identifier)),
        assignment_right_list: $ => prec(-1, commaSep1($._expression)),

        /*
         * Expressions
         *
         */

        _expressions: $ => commaSep1($._expression),

        _expression: $ => choice(
            prec(0, $._expression_primary),
            prec(1, $.expression_component),
            prec(2, $.expression_unary),
            prec(3, $.expression_binary)),

        _expression_primary: $ => choice(
            $._atomic,
            seq('(', $._expression, ')')),

        /* Expression Component */

        expression_component: $ => seq(
            field('name', $.identifier),
            '(',
            field('inputs', $._expression_component_input),
            ')'),

        _expression_component_input: $ => choice(
            prec(0, $._expression),
            prec(1, $.expression_component_input_list)),

        expression_component_input_list: $ => prec(-1, commaSep1($._expression)),

        /**/

        expression_unary: $ => prec.left(seq(
            'not',
            field('operand', $._expression))),

        expression_binary: $ => prec.left(seq(
            field('left', $._expression),
            choice(
                prec(0, 'and'),
                prec(1, 'or')),
            field('right', $._expression))),

        /*
         * Atomics
         *
         */

        _atomic: $ => choice(
            $.identifier,
            $.number),

        _identifiers: $ => commaSep1($.identifier),

        identifier: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,

        number: $ => /[0-9]+/
    }
});

function commaSep1(rule) {
    return seq(rule, repeat(seq(',', rule)))
}

function commaSep(rule) {
    return optional(commaSep1(rule))
}
