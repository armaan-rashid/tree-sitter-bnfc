module.exports = grammar({
  name: 'bnfc',

  word: $ => $._ident,

  extras: $ => [/\s+/, /--.*\n/, /\{-(?:.|\n|\r|\u2028|\u2029)*-\}/],

  rules: {
    source_file: $ => repeat($._rule),

    _rule: $ => seq(choice(
      $.production,
      $.entry_points,
      $.list_macro,
      $.coercions_macro,
      $.rules_macro,
      $.comment_macro,
      $.layout_macro,
      $.token_macro
    ), ';'),

    production: $ => seq(
      optional('internal'),
      $.label,
      '.',
      $.category,
      $.producer,
      repeat(choice($.category, $.terminal))
    ),

    producer: $ => '::=',

    entry_points: $ => seq(
      'entrypoints', repeat(seq($.category, ',')), $.category
    ),
    
    list_macro: $ => seq(
      choice('terminator', 'separator'),
      optional('nonempty'),
      $.category,
      $.terminal
    ),

    coercions_macro: $ => seq(
      'coercions', $.category, $.prec_lvl
    ),

    prec_lvl: $ => /[0-9]+/,
    
    rules_macro: $ => seq(
      'rules', 
      $.category, 
      $.producer, 
      repeat(seq(repeat(choice($.category, $.terminal)), $.choice_sep)), 
      repeat(choice($.category, $.terminal))),

    choice_sep: $ => '|',

    comment_macro: $ => seq('comment', $.terminal, optional($.terminal)),

    token_macro: $ => seq(optional($.pos), 'token', $._ident, $._regex),

    layout_macro: $ => seq('layout', choice($.toplevel, seq(optional($.stop), repeat1($.terminal)))),

    toplevel: $ => 'toplevel',

    pos: $ => 'position',

    stop: $ => 'stop',

    category: $ => choice(
      $._ident,
      seq('[', $.category, ']')
    ),

    label: $ => choice(
      $._ident,
      '[]',
      '(:)',
      '(:[])',
      '_'
    ),

    _regex: $ => choice(seq($._regex, $.choice_sep, $._regex_diff), $._regex_diff),

    _regex_diff: $ => choice(seq($._regex_diff, '-', $._regex_seq), $._regex_seq),

    _regex_seq: $ => choice(seq($._regex_seq, $._regex_atomic), $._regex_atomic),

    _regex_atomic: $ => choice(
      $.char_type,
      $.character,
      seq($._regex_atomic, $.star),
      seq($._regex_atomic, $.plus),
      seq($._regex_atomic, $.optional),
      seq('[', $.terminal, ']'),
      seq('{', $.terminal, '}'),
      seq('(', $._regex, ')')
    ),

    char_type: $ => choice(
      'char', 'lower', 'upper', 'letter', 'digit', 'eps', 
    ),

    star: $ => '*',

    plus: $ => '+',

    optional: $ => '?',

    character: $ => /\'\\?.\'/,
    
    terminal: $ => seq('\"', repeat(/./),'\"'),

    _ident: $ => /[a-zA-Z]\w*/,

  },
});
