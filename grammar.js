module.exports = grammar({
    name: 'cmdl',

    rules: {
        source_file: $ => optional($._source_block),

        _source_block: $ => repeat1(choice(
            $._statements,
            $._comments)),

        _comments: $ => prec(-2, repeat1($.comment)),

        comment: _ => token(seq('#', /.*/)),

        _statements: $ => prec(-1, repeat1($._statement)),

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
        component_body:    $ => $._source_block,

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

        declaration_left_list:  $ => prec(-1, seq($.identifier, repeat(seq(',', $.identifier)))),
        declaration_right_list: $ => prec(-1, seq($._expression, repeat(seq(',', $._expression)))),

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

        assignment_left_list:  $ => prec(-1, seq($.identifier, repeat(seq(',', $.identifier)))),
        assignment_right_list: $ => prec(-1, seq($._expression, repeat(seq(',', $._expression)))),

        /*
         * Expressions
         *
         */

        _expressions: $ => seq($._expression, repeat(seq(',', $._expression))),

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

        expression_component_input_list: $ => prec(-1, seq($._expression, repeat(seq(',', $._expression)))),

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

        _identifiers: $ => seq($.identifier, repeat(seq(',', $.identifier))),

        identifier: _ => /[a-zA-Z_][a-zA-Z0-9_]*/,

        number: _ => /[0-9]+/
    }
});
