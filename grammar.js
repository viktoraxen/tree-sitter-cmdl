module.exports = grammar({
  name: 'cmdl',

  rules: {
    source_file: $ => optional($._source_block),

    /*
     * Code Block
     */

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

    /*
     * Component
     */

    component: $ => seq(
      choice('component', 'synchronized'),
      field('name', $.identifier),
      '(', field('inputs', $.component_inputs), ')',
      '=>', field('outputs', $.component_outputs),
      optional(
        field('body', $.component_body)),
      'end'),

    component_inputs: $ => choice(
      $._component_input,
      $._component_input_list),

    component_outputs: $ => choice(
      $._component_output,
      $._component_output_list),

    component_body: $ => $._source_block,

    _component_input_list: $ => prec(-1, seq($._component_input, repeat(seq(',', $._component_input)))),

    _component_input: $ => $._definition,

    _component_output_list: $ => prec(-1, seq($._component_output, repeat(seq(',', $._component_output)))),

    _component_output: $ => $._definition,

    /*
     * Declarations
     */

    declaration: $ => seq(
      'signal',
      field('left', $._declaration_left),
      optional(seq(
        '<=',
        field('right', $._declaration_right)))),

    _declaration_left: $ => choice(
      $._declarator,
      $.declaration_left_list),

    _declaration_right: $ => choice(
      $._expression,
      $.declaration_right_list),

    declaration_left_list: $ => prec(-1, seq($._declarator, repeat(seq(',', $._declarator)))),
    declaration_right_list: $ => prec(-1, seq($._expression, repeat(seq(',', $._expression)))),

    _declarator: $ => $._signal_definition,

    /*
     * Assignments
     */

    assignment: $ => seq(
      field('left', $._assignment_left),
      '<=',
      field('right', $._assignment_right)),

    _assignment_left: $ => choice(
      prec(0, $._reference),
      prec(1, $.assignment_left_list)),

    _assignment_right: $ => choice(
      prec(0, $._expression),
      prec(1, $.assignment_right_list)),

    assignment_left_list: $ => prec(-1, seq($._reference, repeat(seq(',', $._reference)))),
    assignment_right_list: $ => prec(-1, seq($._expression, repeat(seq(',', $._expression)))),

    /*
     * Expressions
     */

    _expressions: $ => seq($._expression, repeat(seq(',', $._expression))),

    _expression: $ => choice(
      prec(0, $._expression_primary),
      prec(1, $.expression_component),
      prec(2, $.expression_subscript),
      prec(3, $.expression_unary),
      prec(4, $.expression_binary)),

    _expression_primary: $ => choice(
      $.identifier,
      $._constant_definition,
      seq('(', $._expression, ')')),

    /* Expression Component */

    expression_component: $ => seq(
      field('name', $._expression_component_reference),
      '(',
      field('inputs', $._expression_component_input),
      ')'),

    _expression_component_reference: $ => choice(
      prec(0, $.identifier),
      prec(1, $.component_reference)),

    component_reference: $ => prec(-1, seq($.identifier, repeat(seq('::', $.identifier)))),

    _expression_component_input: $ => choice(
      prec(0, $._expression),
      prec(1, $.expression_component_input_list)),

    expression_component_input_list: $ => prec(-1, seq($._expression, repeat(seq(',', $._expression)))),

    /**/

    expression_subscript: $ => prec.left(seq(
      $._expression, '.', $._subscript)),

    expression_unary: $ => prec.left(seq(
      choice('not', '!'),
      field('operand', $._expression))),

    expression_binary: $ => prec.left(seq(
      field('left', $._expression),
      choice(
        prec(0, choice('cat', '+')),
        prec(1, choice('xnor', '~')),
        prec(2, choice('xor', '^')),
        prec(3, choice('nand', '!&')),
        prec(4, choice('nor', '!|')),
        prec(5, choice('and', '&')),
        prec(6, choice('or', '|')),
        prec(7, choice('eq', '='))),
      field('right', $._expression))),

    /*
     * Definition
     */

    _definition: $ => choice(
      $._signal_definition,
      $._constant_definition),

    _signal_definition: $ => choice(
      $.identifier,
      $.signal_definition),

    signal_definition: $ => seq(
      field('name', $.identifier), ':',
      field('width', $.number)),

    _constant_definition: $ => choice(
      $.number,
      $.constant),

    constant: $ => seq(
      field('value', $.number), ':',
      field('width', $.number)),

    /*
     * Reference
     */

    _reference: $ => choice(
      $.identifier,
      $.reference),

    reference: $ => seq(
      field('signal', $.identifier), '.',
      field('subscript', $._subscript)),

    _subscript: $ => choice(
      $._index,
      $._range),

    _index: $ => seq($.number),

    _range: $ => choice(
      $.range_closed,
      $.range_open_left,
      $.range_open_right),

    range_closed: $ => seq(
      field('start', $.number), ':',
      field('stop', $.number)),
    range_open_left: $ => seq(
      ':', field('stop', $.number)),
    range_open_right: $ => seq(
      field('start', $.number), ':'),

    /*
     * Atomics
     *
     */

    _atomic: $ => choice(
      $.identifier,
      $.number,
      $.constant),

    constant: $ => seq(
      field('value', $.number), ':',
      field('width', $.number)),

    _identifiers: $ => seq($.identifier, repeat(seq(',', $.identifier))),

    identifier: _ => /[a-zA-Z_][a-zA-Z0-9_]*/,

    number: _ => /[0-9]+/
  }
});
