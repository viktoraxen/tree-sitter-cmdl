module.exports = grammar({
    name: 'YOUR_LANGUAGE_NAME',

    rules: {
        source_file: $ => repeat($.statement),

        statement: $ => choice(
            $.declaration,
            $.assignment,
            $.definition,
            $.component
        ),

        component: $ => seq(
            'component',
            field('name', $.identifier),
            '(', field('inputs', $.atomics), ')',
            '=>', field('outputs', $.identifiers),
            repeat($.statement),
            'end'
        ),

        declaration: $ => seq(
            'signal',
            $.identifiers
        ),

        assignment: $ => seq(
            $.identifiers,
            '<=',
            choice(
                prec(1, $.atomics),
                prec(0, $.expression))
        ),

        definition: $ => seq(
            'signal',
            $.identifiers,
            '<=',
            choice(
                prec(1, $.atomics),
                prec(0, $.expression))
        ),

        expression: $ => choice(
            prec(5, $.expression_or),
            prec(4, $.expression_and),
            prec(3, $.expression_not),
            prec(2, $.expression_component),
            prec(1, seq('(', $.expression, ')')),
            prec(0, $.atomics)
        ),

        expression_or: $ => prec.left(seq(
            field('left_or', $.expression),
            'or',
            field('right_or', $.expression)
        )),

        expression_and: $ => prec.left(seq(
            field('left_and', $.expression),
            'and',
            field('right_and', $.expression)
        )),

        expression_not: $ => prec.left(seq(
            'not',
            field('not', $.expression)
        )),

        expression_component: $ => seq(
            field('name', $.identifier),
            '(',
            field('inputs', $.atomics),
            ')'
        ),

        atomics: $ => seq(
            choice($.identifier, $.number),
            repeat(seq(',', choice($.identifier, $.number)))
        ),
        
        identifiers: $ => seq(
            $.identifier,
            repeat(seq(',', $.identifier))
        ),

        identifier: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,

        number: $ => /[0-9]+/
    }
});
