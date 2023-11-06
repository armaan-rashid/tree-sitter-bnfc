#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 162
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 68
#define ALIAS_COUNT 0
#define TOKEN_COUNT 44
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  sym__ident = 1,
  anon_sym_SEMI = 2,
  anon_sym_internal = 3,
  anon_sym_DOT = 4,
  sym_producer = 5,
  anon_sym_entrypoints = 6,
  anon_sym_COMMA = 7,
  anon_sym_terminator = 8,
  anon_sym_separator = 9,
  anon_sym_nonempty = 10,
  anon_sym_coercions = 11,
  sym_prec_lvl = 12,
  anon_sym_rules = 13,
  sym_choice_sep = 14,
  anon_sym_comment = 15,
  anon_sym_token = 16,
  anon_sym_layout = 17,
  sym_toplevel = 18,
  sym_pos = 19,
  sym_stop = 20,
  anon_sym_LBRACK = 21,
  anon_sym_RBRACK = 22,
  anon_sym_LBRACK_RBRACK = 23,
  anon_sym_LPAREN_COLON_RPAREN = 24,
  anon_sym_LPAREN_COLON_LBRACK_RBRACK_RPAREN = 25,
  anon_sym__ = 26,
  anon_sym_DASH = 27,
  anon_sym_LBRACE = 28,
  anon_sym_RBRACE = 29,
  anon_sym_LPAREN = 30,
  anon_sym_RPAREN = 31,
  anon_sym_char = 32,
  anon_sym_lower = 33,
  anon_sym_upper = 34,
  anon_sym_letter = 35,
  anon_sym_digit = 36,
  anon_sym_eps = 37,
  sym_star = 38,
  sym_plus = 39,
  sym_optional = 40,
  sym_character = 41,
  anon_sym_DQUOTE = 42,
  aux_sym_terminal_token1 = 43,
  sym_source_file = 44,
  sym__rule = 45,
  sym_production = 46,
  sym_entry_points = 47,
  sym_list_macro = 48,
  sym_coercions_macro = 49,
  sym_rules_macro = 50,
  sym_comment_macro = 51,
  sym_token_macro = 52,
  sym_layout_macro = 53,
  sym_category = 54,
  sym_label = 55,
  sym__regex = 56,
  sym__regex_diff = 57,
  sym__regex_seq = 58,
  sym__regex_atomic = 59,
  sym_char_type = 60,
  sym_terminal = 61,
  aux_sym_source_file_repeat1 = 62,
  aux_sym_production_repeat1 = 63,
  aux_sym_entry_points_repeat1 = 64,
  aux_sym_rules_macro_repeat1 = 65,
  aux_sym_layout_macro_repeat1 = 66,
  aux_sym_terminal_repeat1 = 67,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__ident] = "_ident",
  [anon_sym_SEMI] = ";",
  [anon_sym_internal] = "internal",
  [anon_sym_DOT] = ".",
  [sym_producer] = "producer",
  [anon_sym_entrypoints] = "entrypoints",
  [anon_sym_COMMA] = ",",
  [anon_sym_terminator] = "terminator",
  [anon_sym_separator] = "separator",
  [anon_sym_nonempty] = "nonempty",
  [anon_sym_coercions] = "coercions",
  [sym_prec_lvl] = "prec_lvl",
  [anon_sym_rules] = "rules",
  [sym_choice_sep] = "choice_sep",
  [anon_sym_comment] = "comment",
  [anon_sym_token] = "token",
  [anon_sym_layout] = "layout",
  [sym_toplevel] = "toplevel",
  [sym_pos] = "pos",
  [sym_stop] = "stop",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACK_RBRACK] = "[]",
  [anon_sym_LPAREN_COLON_RPAREN] = "(:)",
  [anon_sym_LPAREN_COLON_LBRACK_RBRACK_RPAREN] = "(:[])",
  [anon_sym__] = "_",
  [anon_sym_DASH] = "-",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_char] = "char",
  [anon_sym_lower] = "lower",
  [anon_sym_upper] = "upper",
  [anon_sym_letter] = "letter",
  [anon_sym_digit] = "digit",
  [anon_sym_eps] = "eps",
  [sym_star] = "star",
  [sym_plus] = "plus",
  [sym_optional] = "optional",
  [sym_character] = "character",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_terminal_token1] = "terminal_token1",
  [sym_source_file] = "source_file",
  [sym__rule] = "_rule",
  [sym_production] = "production",
  [sym_entry_points] = "entry_points",
  [sym_list_macro] = "list_macro",
  [sym_coercions_macro] = "coercions_macro",
  [sym_rules_macro] = "rules_macro",
  [sym_comment_macro] = "comment_macro",
  [sym_token_macro] = "token_macro",
  [sym_layout_macro] = "layout_macro",
  [sym_category] = "category",
  [sym_label] = "label",
  [sym__regex] = "_regex",
  [sym__regex_diff] = "_regex_diff",
  [sym__regex_seq] = "_regex_seq",
  [sym__regex_atomic] = "_regex_atomic",
  [sym_char_type] = "char_type",
  [sym_terminal] = "terminal",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_production_repeat1] = "production_repeat1",
  [aux_sym_entry_points_repeat1] = "entry_points_repeat1",
  [aux_sym_rules_macro_repeat1] = "rules_macro_repeat1",
  [aux_sym_layout_macro_repeat1] = "layout_macro_repeat1",
  [aux_sym_terminal_repeat1] = "terminal_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__ident] = sym__ident,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_internal] = anon_sym_internal,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_producer] = sym_producer,
  [anon_sym_entrypoints] = anon_sym_entrypoints,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_terminator] = anon_sym_terminator,
  [anon_sym_separator] = anon_sym_separator,
  [anon_sym_nonempty] = anon_sym_nonempty,
  [anon_sym_coercions] = anon_sym_coercions,
  [sym_prec_lvl] = sym_prec_lvl,
  [anon_sym_rules] = anon_sym_rules,
  [sym_choice_sep] = sym_choice_sep,
  [anon_sym_comment] = anon_sym_comment,
  [anon_sym_token] = anon_sym_token,
  [anon_sym_layout] = anon_sym_layout,
  [sym_toplevel] = sym_toplevel,
  [sym_pos] = sym_pos,
  [sym_stop] = sym_stop,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACK_RBRACK] = anon_sym_LBRACK_RBRACK,
  [anon_sym_LPAREN_COLON_RPAREN] = anon_sym_LPAREN_COLON_RPAREN,
  [anon_sym_LPAREN_COLON_LBRACK_RBRACK_RPAREN] = anon_sym_LPAREN_COLON_LBRACK_RBRACK_RPAREN,
  [anon_sym__] = anon_sym__,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_char] = anon_sym_char,
  [anon_sym_lower] = anon_sym_lower,
  [anon_sym_upper] = anon_sym_upper,
  [anon_sym_letter] = anon_sym_letter,
  [anon_sym_digit] = anon_sym_digit,
  [anon_sym_eps] = anon_sym_eps,
  [sym_star] = sym_star,
  [sym_plus] = sym_plus,
  [sym_optional] = sym_optional,
  [sym_character] = sym_character,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_terminal_token1] = aux_sym_terminal_token1,
  [sym_source_file] = sym_source_file,
  [sym__rule] = sym__rule,
  [sym_production] = sym_production,
  [sym_entry_points] = sym_entry_points,
  [sym_list_macro] = sym_list_macro,
  [sym_coercions_macro] = sym_coercions_macro,
  [sym_rules_macro] = sym_rules_macro,
  [sym_comment_macro] = sym_comment_macro,
  [sym_token_macro] = sym_token_macro,
  [sym_layout_macro] = sym_layout_macro,
  [sym_category] = sym_category,
  [sym_label] = sym_label,
  [sym__regex] = sym__regex,
  [sym__regex_diff] = sym__regex_diff,
  [sym__regex_seq] = sym__regex_seq,
  [sym__regex_atomic] = sym__regex_atomic,
  [sym_char_type] = sym_char_type,
  [sym_terminal] = sym_terminal,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_production_repeat1] = aux_sym_production_repeat1,
  [aux_sym_entry_points_repeat1] = aux_sym_entry_points_repeat1,
  [aux_sym_rules_macro_repeat1] = aux_sym_rules_macro_repeat1,
  [aux_sym_layout_macro_repeat1] = aux_sym_layout_macro_repeat1,
  [aux_sym_terminal_repeat1] = aux_sym_terminal_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__ident] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_internal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_producer] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_entrypoints] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_terminator] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_separator] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nonempty] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_coercions] = {
    .visible = true,
    .named = false,
  },
  [sym_prec_lvl] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_rules] = {
    .visible = true,
    .named = false,
  },
  [sym_choice_sep] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_comment] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_token] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_layout] = {
    .visible = true,
    .named = false,
  },
  [sym_toplevel] = {
    .visible = true,
    .named = true,
  },
  [sym_pos] = {
    .visible = true,
    .named = true,
  },
  [sym_stop] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN_COLON_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN_COLON_LBRACK_RBRACK_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_char] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lower] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_upper] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_letter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_digit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_eps] = {
    .visible = true,
    .named = false,
  },
  [sym_star] = {
    .visible = true,
    .named = true,
  },
  [sym_plus] = {
    .visible = true,
    .named = true,
  },
  [sym_optional] = {
    .visible = true,
    .named = true,
  },
  [sym_character] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_terminal_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__rule] = {
    .visible = false,
    .named = true,
  },
  [sym_production] = {
    .visible = true,
    .named = true,
  },
  [sym_entry_points] = {
    .visible = true,
    .named = true,
  },
  [sym_list_macro] = {
    .visible = true,
    .named = true,
  },
  [sym_coercions_macro] = {
    .visible = true,
    .named = true,
  },
  [sym_rules_macro] = {
    .visible = true,
    .named = true,
  },
  [sym_comment_macro] = {
    .visible = true,
    .named = true,
  },
  [sym_token_macro] = {
    .visible = true,
    .named = true,
  },
  [sym_layout_macro] = {
    .visible = true,
    .named = true,
  },
  [sym_category] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym__regex] = {
    .visible = false,
    .named = true,
  },
  [sym__regex_diff] = {
    .visible = false,
    .named = true,
  },
  [sym__regex_seq] = {
    .visible = false,
    .named = true,
  },
  [sym__regex_atomic] = {
    .visible = false,
    .named = true,
  },
  [sym_char_type] = {
    .visible = true,
    .named = true,
  },
  [sym_terminal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_production_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_entry_points_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_rules_macro_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_layout_macro_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_terminal_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 6,
  [10] = 10,
  [11] = 10,
  [12] = 8,
  [13] = 4,
  [14] = 5,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 16,
  [20] = 15,
  [21] = 17,
  [22] = 22,
  [23] = 23,
  [24] = 23,
  [25] = 25,
  [26] = 25,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 32,
  [34] = 32,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 42,
  [48] = 42,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 41,
  [53] = 44,
  [54] = 43,
  [55] = 55,
  [56] = 44,
  [57] = 57,
  [58] = 41,
  [59] = 43,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 64,
  [69] = 64,
  [70] = 64,
  [71] = 64,
  [72] = 65,
  [73] = 64,
  [74] = 74,
  [75] = 64,
  [76] = 64,
  [77] = 77,
  [78] = 78,
  [79] = 77,
  [80] = 80,
  [81] = 77,
  [82] = 78,
  [83] = 83,
  [84] = 65,
  [85] = 65,
  [86] = 77,
  [87] = 65,
  [88] = 77,
  [89] = 67,
  [90] = 90,
  [91] = 91,
  [92] = 65,
  [93] = 77,
  [94] = 64,
  [95] = 65,
  [96] = 77,
  [97] = 97,
  [98] = 98,
  [99] = 43,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 102,
  [105] = 105,
  [106] = 106,
  [107] = 42,
  [108] = 97,
  [109] = 44,
  [110] = 110,
  [111] = 105,
  [112] = 41,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 43,
  [117] = 44,
  [118] = 44,
  [119] = 119,
  [120] = 120,
  [121] = 43,
  [122] = 41,
  [123] = 44,
  [124] = 42,
  [125] = 43,
  [126] = 41,
  [127] = 44,
  [128] = 42,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 43,
  [134] = 134,
  [135] = 129,
  [136] = 136,
  [137] = 137,
  [138] = 129,
  [139] = 139,
  [140] = 42,
  [141] = 129,
  [142] = 44,
  [143] = 41,
  [144] = 129,
  [145] = 43,
  [146] = 146,
  [147] = 129,
  [148] = 148,
  [149] = 129,
  [150] = 129,
  [151] = 151,
  [152] = 132,
  [153] = 131,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 129,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(259);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '"') ADVANCE(284);
      if (lookahead == '\'') ADVANCE(289);
      if (lookahead == '(') ADVANCE(277);
      if (lookahead == ')') ADVANCE(278);
      if (lookahead == '*') ADVANCE(279);
      if (lookahead == '+') ADVANCE(280);
      if (lookahead == ',') ADVANCE(263);
      if (lookahead == '-') ADVANCE(273);
      if (lookahead == '.') ADVANCE(261);
      if (lookahead == ':') ADVANCE(288);
      if (lookahead == ';') ADVANCE(260);
      if (lookahead == '?') ADVANCE(281);
      if (lookahead == '[') ADVANCE(267);
      if (lookahead == ']') ADVANCE(268);
      if (lookahead == '_') ADVANCE(272);
      if (lookahead == '{') ADVANCE(274);
      if (lookahead == '|') ADVANCE(265);
      if (lookahead == '}') ADVANCE(275);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(264);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      if (lookahead != 0) ADVANCE(285);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(159)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead == '(') ADVANCE(4);
      if (lookahead == '-') SKIP(7)
      if (lookahead == '[') ADVANCE(5);
      if (lookahead == '_') ADVANCE(272);
      if (lookahead == '{') SKIP(8)
      if (lookahead != 0 &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(159)
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '-' &&
          lookahead != '[') SKIP(8)
      if (lookahead == ')') ADVANCE(270);
      if (lookahead == '-') SKIP(7)
      if (lookahead == '[') ADVANCE(6);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(159)
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '-') SKIP(8)
      if (lookahead == ')') ADVANCE(271);
      if (lookahead == '-') SKIP(7)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(159)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != ':') SKIP(8)
      if (lookahead == '-') SKIP(7)
      if (lookahead == ':') ADVANCE(2);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(159)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != ']') SKIP(8)
      if (lookahead == '-') SKIP(7)
      if (lookahead == ']') ADVANCE(269);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(159)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != ']') SKIP(8)
      if (lookahead == '-') SKIP(7)
      if (lookahead == ']') ADVANCE(3);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(159)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '}') SKIP(8)
      if (lookahead == '-') SKIP(7)
      if (lookahead == '}') SKIP(1)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(159)
      if (lookahead != 0 &&
          lookahead != '-') SKIP(8)
      if (lookahead == '-') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(97)
      if (lookahead != 0) SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(85)
      if (lookahead != 0) SKIP(10)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(160)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead == '"') ADVANCE(284);
      if (lookahead == '-') SKIP(12)
      if (lookahead == ';') ADVANCE(260);
      if (lookahead == '[') ADVANCE(266);
      if (lookahead == '{') SKIP(13)
      if (lookahead == '|') ADVANCE(265);
      if (lookahead != 0 &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(160)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '}') SKIP(13)
      if (lookahead == '-') SKIP(12)
      if (lookahead == '}') SKIP(11)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(160)
      if (lookahead != 0 &&
          lookahead != '-') SKIP(13)
      if (lookahead == '-') SKIP(12)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(86)
      if (lookahead != 0) SKIP(14)
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(161)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (lookahead == '"') ADVANCE(284);
      if (lookahead == '-') SKIP(16)
      if (lookahead == '[') ADVANCE(266);
      if (lookahead == '{') SKIP(17)
      if (lookahead == '|') ADVANCE(265);
      if (lookahead != 0 &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) SKIP(17)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(161)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '}') SKIP(17)
      if (lookahead == '-') SKIP(16)
      if (lookahead == '}') SKIP(15)
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(161)
      if (lookahead != 0 &&
          lookahead != '-') SKIP(17)
      if (lookahead == '-') SKIP(16)
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(87)
      if (lookahead != 0) SKIP(18)
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(162)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (lookahead == '"') ADVANCE(284);
      if (lookahead == '-') SKIP(20)
      if (lookahead == ';') ADVANCE(260);
      if (lookahead == '[') ADVANCE(266);
      if (lookahead == '{') SKIP(21)
      if (lookahead != 0 &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) SKIP(21)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(162)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '}') SKIP(21)
      if (lookahead == '-') SKIP(20)
      if (lookahead == '}') SKIP(19)
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(162)
      if (lookahead != 0 &&
          lookahead != '-') SKIP(21)
      if (lookahead == '-') SKIP(20)
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(88)
      if (lookahead != 0) SKIP(22)
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(163)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (lookahead == '"') ADVANCE(284);
      if (lookahead == '-') SKIP(24)
      if (lookahead == '{') SKIP(25)
      if (lookahead != 0 &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) SKIP(25)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 24:
      if (lookahead == '\n') SKIP(163)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '}') SKIP(25)
      if (lookahead == '-') SKIP(24)
      if (lookahead == '}') SKIP(23)
      END_STATE();
    case 25:
      if (lookahead == '\n') SKIP(163)
      if (lookahead != 0 &&
          lookahead != '-') SKIP(25)
      if (lookahead == '-') SKIP(24)
      END_STATE();
    case 26:
      if (lookahead == '\n') SKIP(129)
      if (lookahead != 0) SKIP(26)
      END_STATE();
    case 27:
      if (lookahead == '\n') SKIP(164)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (lookahead == '-') SKIP(28)
      if (lookahead == '[') ADVANCE(266);
      if (lookahead == '{') SKIP(29)
      if (lookahead != 0 &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) SKIP(29)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 28:
      if (lookahead == '\n') SKIP(164)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '}') SKIP(29)
      if (lookahead == '-') SKIP(28)
      if (lookahead == '}') SKIP(27)
      END_STATE();
    case 29:
      if (lookahead == '\n') SKIP(164)
      if (lookahead != 0 &&
          lookahead != '-') SKIP(29)
      if (lookahead == '-') SKIP(28)
      END_STATE();
    case 30:
      if (lookahead == '\n') SKIP(89)
      if (lookahead != 0) SKIP(30)
      END_STATE();
    case 31:
      if (lookahead == '\n') SKIP(165)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (lookahead == '"') ADVANCE(284);
      if (lookahead == '-') SKIP(32)
      if (lookahead == ';') ADVANCE(260);
      if (lookahead == '{') SKIP(33)
      if (lookahead != 0) SKIP(33)
      END_STATE();
    case 32:
      if (lookahead == '\n') SKIP(165)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '}') SKIP(33)
      if (lookahead == '-') SKIP(32)
      if (lookahead == '}') SKIP(31)
      END_STATE();
    case 33:
      if (lookahead == '\n') SKIP(165)
      if (lookahead != 0 &&
          lookahead != '-') SKIP(33)
      if (lookahead == '-') SKIP(32)
      END_STATE();
    case 34:
      if (lookahead == '\n') SKIP(34)
      if (lookahead == '"') ADVANCE(284);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '{') ADVANCE(285);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(287);
      if (lookahead != 0) ADVANCE(285);
      END_STATE();
    case 35:
      if (lookahead == '\n') SKIP(90)
      if (lookahead != 0) SKIP(35)
      END_STATE();
    case 36:
      if (lookahead == '\n') SKIP(168)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (lookahead == '"') ADVANCE(284);
      if (lookahead == '-') SKIP(37)
      if (lookahead == '{') SKIP(38)
      if (lookahead != 0) SKIP(38)
      END_STATE();
    case 37:
      if (lookahead == '\n') SKIP(168)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '}') SKIP(38)
      if (lookahead == '-') SKIP(37)
      if (lookahead == '}') SKIP(36)
      END_STATE();
    case 38:
      if (lookahead == '\n') SKIP(168)
      if (lookahead != 0 &&
          lookahead != '-') SKIP(38)
      if (lookahead == '-') SKIP(37)
      END_STATE();
    case 39:
      if (lookahead == '\n') SKIP(102)
      if (lookahead != 0) SKIP(39)
      END_STATE();
    case 40:
      if (lookahead == '\n') SKIP(169)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40)
      if (lookahead == ',') ADVANCE(263);
      if (lookahead == '-') SKIP(41)
      if (lookahead == ';') ADVANCE(260);
      if (lookahead == '{') SKIP(42)
      if (lookahead != 0) SKIP(42)
      END_STATE();
    case 41:
      if (lookahead == '\n') SKIP(169)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '}') SKIP(42)
      if (lookahead == '-') SKIP(41)
      if (lookahead == '}') SKIP(40)
      END_STATE();
    case 42:
      if (lookahead == '\n') SKIP(169)
      if (lookahead != 0 &&
          lookahead != '-') SKIP(42)
      if (lookahead == '-') SKIP(41)
      END_STATE();
    case 43:
      if (lookahead == '\n') SKIP(99)
      if (lookahead != 0) SKIP(43)
      END_STATE();
    case 44:
      if (lookahead == '\n') SKIP(170)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(44)
      if (lookahead == ')') ADVANCE(278);
      if (lookahead == '-') SKIP(45)
      if (lookahead == '{') SKIP(46)
      if (lookahead == '|') ADVANCE(265);
      if (lookahead != 0) SKIP(46)
      END_STATE();
    case 45:
      if (lookahead == '\n') SKIP(170)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '}') SKIP(46)
      if (lookahead == '-') SKIP(45)
      if (lookahead == '}') SKIP(44)
      END_STATE();
    case 46:
      if (lookahead == '\n') SKIP(170)
      if (lookahead != 0 &&
          lookahead != '-') SKIP(46)
      if (lookahead == '-') SKIP(45)
      END_STATE();
    case 47:
      if (lookahead == '\n') SKIP(135)
      if (lookahead != 0) SKIP(47)
      END_STATE();
    case 48:
      if (lookahead == '\n') SKIP(171)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      if (lookahead == '-') SKIP(49)
      if (lookahead == ';') ADVANCE(260);
      if (lookahead == '{') SKIP(50)
      if (lookahead == '|') ADVANCE(265);
      if (lookahead != 0) SKIP(50)
      END_STATE();
    case 49:
      if (lookahead == '\n') SKIP(171)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '}') SKIP(50)
      if (lookahead == '-') SKIP(49)
      if (lookahead == '}') SKIP(48)
      END_STATE();
    case 50:
      if (lookahead == '\n') SKIP(171)
      if (lookahead != 0 &&
          lookahead != '-') SKIP(50)
      if (lookahead == '-') SKIP(49)
      END_STATE();
    case 51:
      if (lookahead == '\n') SKIP(137)
      if (lookahead != 0) SKIP(51)
      END_STATE();
    case 52:
      if (lookahead == '\n') SKIP(172)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(52)
      if (lookahead == '-') SKIP(53)
      if (lookahead == '.') ADVANCE(261);
      if (lookahead == '{') SKIP(54)
      if (lookahead != 0) SKIP(54)
      END_STATE();
    case 53:
      if (lookahead == '\n') SKIP(172)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '}') SKIP(54)
      if (lookahead == '-') SKIP(53)
      if (lookahead == '}') SKIP(52)
      END_STATE();
    case 54:
      if (lookahead == '\n') SKIP(172)
      if (lookahead != 0 &&
          lookahead != '-') SKIP(54)
      if (lookahead == '-') SKIP(53)
      END_STATE();
    case 55:
      if (lookahead == '\n') SKIP(103)
      if (lookahead != 0) SKIP(55)
      END_STATE();
    case 56:
      if (lookahead == '\n') SKIP(173)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(56)
      if (lookahead == ',') ADVANCE(263);
      if (lookahead == '-') SKIP(57)
      if (lookahead == '{') SKIP(58)
      if (lookahead != 0) SKIP(58)
      END_STATE();
    case 57:
      if (lookahead == '\n') SKIP(173)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '}') SKIP(58)
      if (lookahead == '-') SKIP(57)
      if (lookahead == '}') SKIP(56)
      END_STATE();
    case 58:
      if (lookahead == '\n') SKIP(173)
      if (lookahead != 0 &&
          lookahead != '-') SKIP(58)
      if (lookahead == '-') SKIP(57)
      END_STATE();
    case 59:
      if (lookahead == '\n') SKIP(140)
      if (lookahead != 0) SKIP(59)
      END_STATE();
    case 60:
      if (lookahead == '\n') SKIP(174)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(60)
      if (lookahead == '-') SKIP(61)
      if (lookahead == '{') SKIP(62)
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead)) SKIP(62)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(264);
      END_STATE();
    case 61:
      if (lookahead == '\n') SKIP(174)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '}') SKIP(62)
      if (lookahead == '-') SKIP(61)
      if (lookahead == '}') SKIP(60)
      END_STATE();
    case 62:
      if (lookahead == '\n') SKIP(174)
      if (lookahead != 0 &&
          lookahead != '-') SKIP(62)
      if (lookahead == '-') SKIP(61)
      END_STATE();
    case 63:
      if (lookahead == '\n') SKIP(142)
      if (lookahead != 0) SKIP(63)
      END_STATE();
    case 64:
      if (lookahead == '\n') SKIP(175)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(64)
      if (lookahead == '-') SKIP(65)
      if (lookahead == '{') SKIP(66)
      if (lookahead != 0 &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) SKIP(66)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 65:
      if (lookahead == '\n') SKIP(175)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '}') SKIP(66)
      if (lookahead == '-') SKIP(65)
      if (lookahead == '}') SKIP(64)
      END_STATE();
    case 66:
      if (lookahead == '\n') SKIP(175)
      if (lookahead != 0 &&
          lookahead != '-') SKIP(66)
      if (lookahead == '-') SKIP(65)
      END_STATE();
    case 67:
      if (lookahead == '\n') SKIP(144)
      if (lookahead != 0) SKIP(67)
      END_STATE();
    case 68:
      if (lookahead == '\n') SKIP(176)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(68)
      if (lookahead == '-') SKIP(71)
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == '{') SKIP(72)
      if (lookahead != 0) SKIP(72)
      END_STATE();
    case 69:
      if (lookahead == '\n') SKIP(176)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != ':') SKIP(72)
      if (lookahead == '-') SKIP(71)
      if (lookahead == ':') ADVANCE(70);
      END_STATE();
    case 70:
      if (lookahead == '\n') SKIP(176)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '=') SKIP(72)
      if (lookahead == '-') SKIP(71)
      if (lookahead == '=') ADVANCE(262);
      END_STATE();
    case 71:
      if (lookahead == '\n') SKIP(176)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '}') SKIP(72)
      if (lookahead == '-') SKIP(71)
      if (lookahead == '}') SKIP(68)
      END_STATE();
    case 72:
      if (lookahead == '\n') SKIP(176)
      if (lookahead != 0 &&
          lookahead != '-') SKIP(72)
      if (lookahead == '-') SKIP(71)
      END_STATE();
    case 73:
      if (lookahead == '\n') SKIP(146)
      if (lookahead != 0) SKIP(73)
      END_STATE();
    case 74:
      if (lookahead == '\n') SKIP(177)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(74)
      if (lookahead == '-') SKIP(75)
      if (lookahead == ']') ADVANCE(268);
      if (lookahead == '{') SKIP(76)
      if (lookahead != 0) SKIP(76)
      END_STATE();
    case 75:
      if (lookahead == '\n') SKIP(177)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '}') SKIP(76)
      if (lookahead == '-') SKIP(75)
      if (lookahead == '}') SKIP(74)
      END_STATE();
    case 76:
      if (lookahead == '\n') SKIP(177)
      if (lookahead != 0 &&
          lookahead != '-') SKIP(76)
      if (lookahead == '-') SKIP(75)
      END_STATE();
    case 77:
      if (lookahead == '\n') SKIP(148)
      if (lookahead != 0) SKIP(77)
      END_STATE();
    case 78:
      if (lookahead == '\n') SKIP(178)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(78)
      if (lookahead == '-') SKIP(79)
      if (lookahead == '{') SKIP(80)
      if (lookahead == '}') ADVANCE(275);
      if (lookahead != 0) SKIP(80)
      END_STATE();
    case 79:
      if (lookahead == '\n') SKIP(178)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '}') SKIP(80)
      if (lookahead == '-') SKIP(79)
      if (lookahead == '}') SKIP(78)
      END_STATE();
    case 80:
      if (lookahead == '\n') SKIP(178)
      if (lookahead != 0 &&
          lookahead != '-') SKIP(80)
      if (lookahead == '-') SKIP(79)
      END_STATE();
    case 81:
      if (lookahead == '\n') SKIP(150)
      if (lookahead != 0) SKIP(81)
      END_STATE();
    case 82:
      if (lookahead == '\n') SKIP(179)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(82)
      if (lookahead == '-') SKIP(83)
      if (lookahead == ';') ADVANCE(260);
      if (lookahead == '{') SKIP(84)
      if (lookahead != 0) SKIP(84)
      END_STATE();
    case 83:
      if (lookahead == '\n') SKIP(179)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '}') SKIP(84)
      if (lookahead == '-') SKIP(83)
      if (lookahead == '}') SKIP(82)
      END_STATE();
    case 84:
      if (lookahead == '\n') SKIP(179)
      if (lookahead != 0 &&
          lookahead != '-') SKIP(84)
      if (lookahead == '-') SKIP(83)
      END_STATE();
    case 85:
      if (lookahead == '"') ADVANCE(284);
      if (lookahead == '-') SKIP(106)
      if (lookahead == ';') ADVANCE(260);
      if (lookahead == '[') ADVANCE(266);
      if (lookahead == '{') SKIP(124)
      if (lookahead == '|') ADVANCE(265);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(85)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 86:
      if (lookahead == '"') ADVANCE(284);
      if (lookahead == '-') SKIP(107)
      if (lookahead == '[') ADVANCE(266);
      if (lookahead == '{') SKIP(125)
      if (lookahead == '|') ADVANCE(265);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(86)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 87:
      if (lookahead == '"') ADVANCE(284);
      if (lookahead == '-') SKIP(108)
      if (lookahead == ';') ADVANCE(260);
      if (lookahead == '[') ADVANCE(266);
      if (lookahead == '{') SKIP(126)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(87)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 88:
      if (lookahead == '"') ADVANCE(284);
      if (lookahead == '-') SKIP(109)
      if (lookahead == '{') SKIP(127)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(88)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 89:
      if (lookahead == '"') ADVANCE(284);
      if (lookahead == '-') SKIP(111)
      if (lookahead == ';') ADVANCE(260);
      if (lookahead == '{') SKIP(130)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(89)
      END_STATE();
    case 90:
      if (lookahead == '"') ADVANCE(284);
      if (lookahead == '-') SKIP(112)
      if (lookahead == '{') SKIP(133)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(90)
      END_STATE();
    case 91:
      if (lookahead == '\'') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 92:
      if (lookahead == '\'') ADVANCE(282);
      END_STATE();
    case 93:
      if (lookahead == '\'') ADVANCE(156);
      if (lookahead == '(') ADVANCE(276);
      if (lookahead == ')') ADVANCE(278);
      if (lookahead == '*') ADVANCE(279);
      if (lookahead == '+') ADVANCE(280);
      if (lookahead == '-') ADVANCE(273);
      if (lookahead == '?') ADVANCE(281);
      if (lookahead == '[') ADVANCE(266);
      if (lookahead == '{') ADVANCE(274);
      if (lookahead == '|') ADVANCE(265);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(93)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 94:
      if (lookahead == '\'') ADVANCE(156);
      if (lookahead == '(') ADVANCE(276);
      if (lookahead == ')') ADVANCE(278);
      if (lookahead == '-') ADVANCE(273);
      if (lookahead == '[') ADVANCE(266);
      if (lookahead == '{') ADVANCE(274);
      if (lookahead == '|') ADVANCE(265);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(94)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 95:
      if (lookahead == '\'') ADVANCE(156);
      if (lookahead == '(') ADVANCE(276);
      if (lookahead == '*') ADVANCE(279);
      if (lookahead == '+') ADVANCE(280);
      if (lookahead == '-') ADVANCE(273);
      if (lookahead == ';') ADVANCE(260);
      if (lookahead == '?') ADVANCE(281);
      if (lookahead == '[') ADVANCE(266);
      if (lookahead == '{') ADVANCE(274);
      if (lookahead == '|') ADVANCE(265);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(95)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 96:
      if (lookahead == '\'') ADVANCE(156);
      if (lookahead == '(') ADVANCE(276);
      if (lookahead == '-') ADVANCE(273);
      if (lookahead == ';') ADVANCE(260);
      if (lookahead == '[') ADVANCE(266);
      if (lookahead == '{') ADVANCE(274);
      if (lookahead == '|') ADVANCE(265);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(96)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 97:
      if (lookahead == '\'') ADVANCE(156);
      if (lookahead == '(') ADVANCE(276);
      if (lookahead == '-') SKIP(105)
      if (lookahead == '[') ADVANCE(266);
      if (lookahead == '{') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(97)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 98:
      if (lookahead == ')') ADVANCE(278);
      if (lookahead == '-') ADVANCE(273);
      if (lookahead == '{') SKIP(132)
      if (lookahead == '|') ADVANCE(265);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(98)
      END_STATE();
    case 99:
      if (lookahead == ')') ADVANCE(278);
      if (lookahead == '-') SKIP(114)
      if (lookahead == '{') SKIP(136)
      if (lookahead == '|') ADVANCE(265);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(99)
      END_STATE();
    case 100:
      if (lookahead == ')') ADVANCE(270);
      if (lookahead == '[') ADVANCE(158);
      END_STATE();
    case 101:
      if (lookahead == ')') ADVANCE(271);
      END_STATE();
    case 102:
      if (lookahead == ',') ADVANCE(263);
      if (lookahead == '-') SKIP(113)
      if (lookahead == ';') ADVANCE(260);
      if (lookahead == '{') SKIP(134)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(102)
      END_STATE();
    case 103:
      if (lookahead == ',') ADVANCE(263);
      if (lookahead == '-') SKIP(117)
      if (lookahead == '{') SKIP(141)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(103)
      END_STATE();
    case 104:
      if (lookahead == '-') ADVANCE(273);
      if (lookahead == ';') ADVANCE(260);
      if (lookahead == '{') SKIP(131)
      if (lookahead == '|') ADVANCE(265);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(104)
      END_STATE();
    case 105:
      if (lookahead == '-') SKIP(9)
      END_STATE();
    case 106:
      if (lookahead == '-') SKIP(10)
      END_STATE();
    case 107:
      if (lookahead == '-') SKIP(14)
      END_STATE();
    case 108:
      if (lookahead == '-') SKIP(18)
      END_STATE();
    case 109:
      if (lookahead == '-') SKIP(22)
      END_STATE();
    case 110:
      if (lookahead == '-') SKIP(26)
      END_STATE();
    case 111:
      if (lookahead == '-') SKIP(30)
      END_STATE();
    case 112:
      if (lookahead == '-') SKIP(35)
      END_STATE();
    case 113:
      if (lookahead == '-') SKIP(39)
      END_STATE();
    case 114:
      if (lookahead == '-') SKIP(43)
      END_STATE();
    case 115:
      if (lookahead == '-') SKIP(47)
      END_STATE();
    case 116:
      if (lookahead == '-') SKIP(51)
      END_STATE();
    case 117:
      if (lookahead == '-') SKIP(55)
      END_STATE();
    case 118:
      if (lookahead == '-') SKIP(59)
      END_STATE();
    case 119:
      if (lookahead == '-') SKIP(63)
      END_STATE();
    case 120:
      if (lookahead == '-') SKIP(67)
      END_STATE();
    case 121:
      if (lookahead == '-') SKIP(73)
      END_STATE();
    case 122:
      if (lookahead == '-') SKIP(77)
      END_STATE();
    case 123:
      if (lookahead == '-') SKIP(81)
      END_STATE();
    case 124:
      if (lookahead == '-') SKIP(228)
      END_STATE();
    case 125:
      if (lookahead == '-') SKIP(229)
      END_STATE();
    case 126:
      if (lookahead == '-') SKIP(230)
      END_STATE();
    case 127:
      if (lookahead == '-') SKIP(231)
      END_STATE();
    case 128:
      if (lookahead == '-') SKIP(232)
      END_STATE();
    case 129:
      if (lookahead == '-') SKIP(110)
      if (lookahead == '[') ADVANCE(266);
      if (lookahead == '{') SKIP(128)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(129)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 130:
      if (lookahead == '-') SKIP(233)
      END_STATE();
    case 131:
      if (lookahead == '-') SKIP(234)
      END_STATE();
    case 132:
      if (lookahead == '-') SKIP(235)
      END_STATE();
    case 133:
      if (lookahead == '-') SKIP(236)
      END_STATE();
    case 134:
      if (lookahead == '-') SKIP(237)
      END_STATE();
    case 135:
      if (lookahead == '-') SKIP(115)
      if (lookahead == ';') ADVANCE(260);
      if (lookahead == '{') SKIP(138)
      if (lookahead == '|') ADVANCE(265);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(135)
      END_STATE();
    case 136:
      if (lookahead == '-') SKIP(238)
      END_STATE();
    case 137:
      if (lookahead == '-') SKIP(116)
      if (lookahead == '.') ADVANCE(261);
      if (lookahead == '{') SKIP(139)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(137)
      END_STATE();
    case 138:
      if (lookahead == '-') SKIP(239)
      END_STATE();
    case 139:
      if (lookahead == '-') SKIP(240)
      END_STATE();
    case 140:
      if (lookahead == '-') SKIP(118)
      if (lookahead == '{') SKIP(143)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(140)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(264);
      END_STATE();
    case 141:
      if (lookahead == '-') SKIP(241)
      END_STATE();
    case 142:
      if (lookahead == '-') SKIP(119)
      if (lookahead == '{') SKIP(145)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(142)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 143:
      if (lookahead == '-') SKIP(242)
      END_STATE();
    case 144:
      if (lookahead == '-') SKIP(120)
      if (lookahead == ':') ADVANCE(154);
      if (lookahead == '{') SKIP(147)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(144)
      END_STATE();
    case 145:
      if (lookahead == '-') SKIP(243)
      END_STATE();
    case 146:
      if (lookahead == '-') SKIP(121)
      if (lookahead == ']') ADVANCE(268);
      if (lookahead == '{') SKIP(149)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(146)
      END_STATE();
    case 147:
      if (lookahead == '-') SKIP(244)
      END_STATE();
    case 148:
      if (lookahead == '-') SKIP(122)
      if (lookahead == '{') SKIP(151)
      if (lookahead == '}') ADVANCE(275);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(148)
      END_STATE();
    case 149:
      if (lookahead == '-') SKIP(245)
      END_STATE();
    case 150:
      if (lookahead == '-') SKIP(123)
      if (lookahead == ';') ADVANCE(260);
      if (lookahead == '{') SKIP(152)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(150)
      END_STATE();
    case 151:
      if (lookahead == '-') SKIP(246)
      END_STATE();
    case 152:
      if (lookahead == '-') SKIP(247)
      END_STATE();
    case 153:
      if (lookahead == ':') ADVANCE(100);
      END_STATE();
    case 154:
      if (lookahead == ':') ADVANCE(155);
      END_STATE();
    case 155:
      if (lookahead == '=') ADVANCE(262);
      END_STATE();
    case 156:
      if (lookahead == '\\') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 157:
      if (lookahead == ']') ADVANCE(269);
      END_STATE();
    case 158:
      if (lookahead == ']') ADVANCE(101);
      END_STATE();
    case 159:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(159)
      if (lookahead == '(') ADVANCE(182);
      if (lookahead == '-') SKIP(188)
      if (lookahead == '[') ADVANCE(185);
      if (lookahead == '_') ADVANCE(272);
      if (lookahead == '{') SKIP(227)
      if (lookahead != 0 &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) SKIP(227)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 160:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(160)
      if (lookahead == '"') ADVANCE(284);
      if (lookahead == '-') SKIP(189)
      if (lookahead == ';') ADVANCE(260);
      if (lookahead == '[') ADVANCE(266);
      if (lookahead == '{') SKIP(228)
      if (lookahead == '|') ADVANCE(265);
      if (lookahead != 0 &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) SKIP(228)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 161:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(161)
      if (lookahead == '"') ADVANCE(284);
      if (lookahead == '-') SKIP(191)
      if (lookahead == '[') ADVANCE(266);
      if (lookahead == '{') SKIP(229)
      if (lookahead == '|') ADVANCE(265);
      if (lookahead != 0 &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) SKIP(229)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 162:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(162)
      if (lookahead == '"') ADVANCE(284);
      if (lookahead == '-') SKIP(193)
      if (lookahead == ';') ADVANCE(260);
      if (lookahead == '[') ADVANCE(266);
      if (lookahead == '{') SKIP(230)
      if (lookahead != 0 &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) SKIP(230)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 163:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(163)
      if (lookahead == '"') ADVANCE(284);
      if (lookahead == '-') SKIP(195)
      if (lookahead == '{') SKIP(231)
      if (lookahead != 0 &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) SKIP(231)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 164:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(164)
      if (lookahead == '-') SKIP(197)
      if (lookahead == '[') ADVANCE(266);
      if (lookahead == '{') SKIP(232)
      if (lookahead != 0 &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) SKIP(232)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 165:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(165)
      if (lookahead == '"') ADVANCE(284);
      if (lookahead == '-') SKIP(199)
      if (lookahead == ';') ADVANCE(260);
      if (lookahead == '{') SKIP(233)
      if (lookahead != 0) SKIP(233)
      END_STATE();
    case 166:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(166)
      if (lookahead == '-') ADVANCE(273);
      if (lookahead == ';') ADVANCE(260);
      if (lookahead == '{') SKIP(234)
      if (lookahead == '|') ADVANCE(265);
      if (lookahead != 0) SKIP(234)
      END_STATE();
    case 167:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(167)
      if (lookahead == ')') ADVANCE(278);
      if (lookahead == '-') ADVANCE(273);
      if (lookahead == '{') SKIP(235)
      if (lookahead == '|') ADVANCE(265);
      if (lookahead != 0) SKIP(235)
      END_STATE();
    case 168:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(168)
      if (lookahead == '"') ADVANCE(284);
      if (lookahead == '-') SKIP(203)
      if (lookahead == '{') SKIP(236)
      if (lookahead != 0) SKIP(236)
      END_STATE();
    case 169:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(169)
      if (lookahead == ',') ADVANCE(263);
      if (lookahead == '-') SKIP(205)
      if (lookahead == ';') ADVANCE(260);
      if (lookahead == '{') SKIP(237)
      if (lookahead != 0) SKIP(237)
      END_STATE();
    case 170:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(170)
      if (lookahead == ')') ADVANCE(278);
      if (lookahead == '-') SKIP(207)
      if (lookahead == '{') SKIP(238)
      if (lookahead == '|') ADVANCE(265);
      if (lookahead != 0) SKIP(238)
      END_STATE();
    case 171:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(171)
      if (lookahead == '-') SKIP(209)
      if (lookahead == ';') ADVANCE(260);
      if (lookahead == '{') SKIP(239)
      if (lookahead == '|') ADVANCE(265);
      if (lookahead != 0) SKIP(239)
      END_STATE();
    case 172:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(172)
      if (lookahead == '-') SKIP(211)
      if (lookahead == '.') ADVANCE(261);
      if (lookahead == '{') SKIP(240)
      if (lookahead != 0) SKIP(240)
      END_STATE();
    case 173:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(173)
      if (lookahead == ',') ADVANCE(263);
      if (lookahead == '-') SKIP(213)
      if (lookahead == '{') SKIP(241)
      if (lookahead != 0) SKIP(241)
      END_STATE();
    case 174:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(174)
      if (lookahead == '-') SKIP(215)
      if (lookahead == '{') SKIP(242)
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead)) SKIP(242)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(264);
      END_STATE();
    case 175:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(175)
      if (lookahead == '-') SKIP(217)
      if (lookahead == '{') SKIP(243)
      if (lookahead != 0 &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) SKIP(243)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 176:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(176)
      if (lookahead == '-') SKIP(219)
      if (lookahead == ':') ADVANCE(183);
      if (lookahead == '{') SKIP(244)
      if (lookahead != 0) SKIP(244)
      END_STATE();
    case 177:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(177)
      if (lookahead == '-') SKIP(221)
      if (lookahead == ']') ADVANCE(268);
      if (lookahead == '{') SKIP(245)
      if (lookahead != 0) SKIP(245)
      END_STATE();
    case 178:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(178)
      if (lookahead == '-') SKIP(223)
      if (lookahead == '{') SKIP(246)
      if (lookahead == '}') ADVANCE(275);
      if (lookahead != 0) SKIP(246)
      END_STATE();
    case 179:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(179)
      if (lookahead == '-') SKIP(225)
      if (lookahead == ';') ADVANCE(260);
      if (lookahead == '{') SKIP(247)
      if (lookahead != 0) SKIP(247)
      END_STATE();
    case 180:
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '-' &&
          lookahead != '[') SKIP(227)
      if (lookahead == ')') ADVANCE(270);
      if (lookahead == '-') SKIP(187)
      if (lookahead == '[') ADVANCE(186);
      END_STATE();
    case 181:
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '-') SKIP(227)
      if (lookahead == ')') ADVANCE(271);
      if (lookahead == '-') SKIP(187)
      END_STATE();
    case 182:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != ':') SKIP(227)
      if (lookahead == '-') SKIP(187)
      if (lookahead == ':') ADVANCE(180);
      END_STATE();
    case 183:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != ':') SKIP(244)
      if (lookahead == '-') SKIP(220)
      if (lookahead == ':') ADVANCE(184);
      END_STATE();
    case 184:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '=') SKIP(244)
      if (lookahead == '-') SKIP(220)
      if (lookahead == '=') ADVANCE(262);
      END_STATE();
    case 185:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != ']') SKIP(227)
      if (lookahead == '-') SKIP(187)
      if (lookahead == ']') ADVANCE(269);
      END_STATE();
    case 186:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != ']') SKIP(227)
      if (lookahead == '-') SKIP(187)
      if (lookahead == ']') ADVANCE(181);
      END_STATE();
    case 187:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '}') SKIP(227)
      if (lookahead == '-') SKIP(187)
      if (lookahead == '}') SKIP(159)
      END_STATE();
    case 188:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '}') SKIP(227)
      if (lookahead == '-') SKIP(7)
      if (lookahead == '}') SKIP(159)
      END_STATE();
    case 189:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '}') SKIP(228)
      if (lookahead == '-') SKIP(12)
      if (lookahead == '}') SKIP(160)
      END_STATE();
    case 190:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '}') SKIP(228)
      if (lookahead == '-') SKIP(190)
      if (lookahead == '}') SKIP(160)
      END_STATE();
    case 191:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '}') SKIP(229)
      if (lookahead == '-') SKIP(16)
      if (lookahead == '}') SKIP(161)
      END_STATE();
    case 192:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '}') SKIP(229)
      if (lookahead == '-') SKIP(192)
      if (lookahead == '}') SKIP(161)
      END_STATE();
    case 193:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '}') SKIP(230)
      if (lookahead == '-') SKIP(20)
      if (lookahead == '}') SKIP(162)
      END_STATE();
    case 194:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '}') SKIP(230)
      if (lookahead == '-') SKIP(194)
      if (lookahead == '}') SKIP(162)
      END_STATE();
    case 195:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '}') SKIP(231)
      if (lookahead == '-') SKIP(24)
      if (lookahead == '}') SKIP(163)
      END_STATE();
    case 196:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '}') SKIP(231)
      if (lookahead == '-') SKIP(196)
      if (lookahead == '}') SKIP(163)
      END_STATE();
    case 197:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '}') SKIP(232)
      if (lookahead == '-') SKIP(28)
      if (lookahead == '}') SKIP(164)
      END_STATE();
    case 198:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '}') SKIP(232)
      if (lookahead == '-') SKIP(198)
      if (lookahead == '}') SKIP(164)
      END_STATE();
    case 199:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '}') SKIP(233)
      if (lookahead == '-') SKIP(32)
      if (lookahead == '}') SKIP(165)
      END_STATE();
    case 200:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '}') SKIP(233)
      if (lookahead == '-') SKIP(200)
      if (lookahead == '}') SKIP(165)
      END_STATE();
    case 201:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '}') SKIP(234)
      if (lookahead == '-') SKIP(201)
      if (lookahead == '}') SKIP(166)
      END_STATE();
    case 202:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '}') SKIP(235)
      if (lookahead == '-') SKIP(202)
      if (lookahead == '}') SKIP(167)
      END_STATE();
    case 203:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '}') SKIP(236)
      if (lookahead == '-') SKIP(37)
      if (lookahead == '}') SKIP(168)
      END_STATE();
    case 204:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '}') SKIP(236)
      if (lookahead == '-') SKIP(204)
      if (lookahead == '}') SKIP(168)
      END_STATE();
    case 205:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '}') SKIP(237)
      if (lookahead == '-') SKIP(41)
      if (lookahead == '}') SKIP(169)
      END_STATE();
    case 206:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '}') SKIP(237)
      if (lookahead == '-') SKIP(206)
      if (lookahead == '}') SKIP(169)
      END_STATE();
    case 207:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '}') SKIP(238)
      if (lookahead == '-') SKIP(45)
      if (lookahead == '}') SKIP(170)
      END_STATE();
    case 208:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '}') SKIP(238)
      if (lookahead == '-') SKIP(208)
      if (lookahead == '}') SKIP(170)
      END_STATE();
    case 209:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '}') SKIP(239)
      if (lookahead == '-') SKIP(49)
      if (lookahead == '}') SKIP(171)
      END_STATE();
    case 210:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '}') SKIP(239)
      if (lookahead == '-') SKIP(210)
      if (lookahead == '}') SKIP(171)
      END_STATE();
    case 211:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '}') SKIP(240)
      if (lookahead == '-') SKIP(53)
      if (lookahead == '}') SKIP(172)
      END_STATE();
    case 212:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '}') SKIP(240)
      if (lookahead == '-') SKIP(212)
      if (lookahead == '}') SKIP(172)
      END_STATE();
    case 213:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '}') SKIP(241)
      if (lookahead == '-') SKIP(57)
      if (lookahead == '}') SKIP(173)
      END_STATE();
    case 214:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '}') SKIP(241)
      if (lookahead == '-') SKIP(214)
      if (lookahead == '}') SKIP(173)
      END_STATE();
    case 215:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '}') SKIP(242)
      if (lookahead == '-') SKIP(61)
      if (lookahead == '}') SKIP(174)
      END_STATE();
    case 216:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '}') SKIP(242)
      if (lookahead == '-') SKIP(216)
      if (lookahead == '}') SKIP(174)
      END_STATE();
    case 217:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '}') SKIP(243)
      if (lookahead == '-') SKIP(65)
      if (lookahead == '}') SKIP(175)
      END_STATE();
    case 218:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '}') SKIP(243)
      if (lookahead == '-') SKIP(218)
      if (lookahead == '}') SKIP(175)
      END_STATE();
    case 219:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '}') SKIP(244)
      if (lookahead == '-') SKIP(71)
      if (lookahead == '}') SKIP(176)
      END_STATE();
    case 220:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '}') SKIP(244)
      if (lookahead == '-') SKIP(220)
      if (lookahead == '}') SKIP(176)
      END_STATE();
    case 221:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '}') SKIP(245)
      if (lookahead == '-') SKIP(75)
      if (lookahead == '}') SKIP(177)
      END_STATE();
    case 222:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '}') SKIP(245)
      if (lookahead == '-') SKIP(222)
      if (lookahead == '}') SKIP(177)
      END_STATE();
    case 223:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '}') SKIP(246)
      if (lookahead == '-') SKIP(79)
      if (lookahead == '}') SKIP(178)
      END_STATE();
    case 224:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '}') SKIP(246)
      if (lookahead == '-') SKIP(224)
      if (lookahead == '}') SKIP(178)
      END_STATE();
    case 225:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '}') SKIP(247)
      if (lookahead == '-') SKIP(83)
      if (lookahead == '}') SKIP(179)
      END_STATE();
    case 226:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '}') SKIP(247)
      if (lookahead == '-') SKIP(226)
      if (lookahead == '}') SKIP(179)
      END_STATE();
    case 227:
      if (lookahead != 0 &&
          lookahead != '-') SKIP(227)
      if (lookahead == '-') SKIP(187)
      END_STATE();
    case 228:
      if (lookahead != 0 &&
          lookahead != '-') SKIP(228)
      if (lookahead == '-') SKIP(190)
      END_STATE();
    case 229:
      if (lookahead != 0 &&
          lookahead != '-') SKIP(229)
      if (lookahead == '-') SKIP(192)
      END_STATE();
    case 230:
      if (lookahead != 0 &&
          lookahead != '-') SKIP(230)
      if (lookahead == '-') SKIP(194)
      END_STATE();
    case 231:
      if (lookahead != 0 &&
          lookahead != '-') SKIP(231)
      if (lookahead == '-') SKIP(196)
      END_STATE();
    case 232:
      if (lookahead != 0 &&
          lookahead != '-') SKIP(232)
      if (lookahead == '-') SKIP(198)
      END_STATE();
    case 233:
      if (lookahead != 0 &&
          lookahead != '-') SKIP(233)
      if (lookahead == '-') SKIP(200)
      END_STATE();
    case 234:
      if (lookahead != 0 &&
          lookahead != '-') SKIP(234)
      if (lookahead == '-') SKIP(201)
      END_STATE();
    case 235:
      if (lookahead != 0 &&
          lookahead != '-') SKIP(235)
      if (lookahead == '-') SKIP(202)
      END_STATE();
    case 236:
      if (lookahead != 0 &&
          lookahead != '-') SKIP(236)
      if (lookahead == '-') SKIP(204)
      END_STATE();
    case 237:
      if (lookahead != 0 &&
          lookahead != '-') SKIP(237)
      if (lookahead == '-') SKIP(206)
      END_STATE();
    case 238:
      if (lookahead != 0 &&
          lookahead != '-') SKIP(238)
      if (lookahead == '-') SKIP(208)
      END_STATE();
    case 239:
      if (lookahead != 0 &&
          lookahead != '-') SKIP(239)
      if (lookahead == '-') SKIP(210)
      END_STATE();
    case 240:
      if (lookahead != 0 &&
          lookahead != '-') SKIP(240)
      if (lookahead == '-') SKIP(212)
      END_STATE();
    case 241:
      if (lookahead != 0 &&
          lookahead != '-') SKIP(241)
      if (lookahead == '-') SKIP(214)
      END_STATE();
    case 242:
      if (lookahead != 0 &&
          lookahead != '-') SKIP(242)
      if (lookahead == '-') SKIP(216)
      END_STATE();
    case 243:
      if (lookahead != 0 &&
          lookahead != '-') SKIP(243)
      if (lookahead == '-') SKIP(218)
      END_STATE();
    case 244:
      if (lookahead != 0 &&
          lookahead != '-') SKIP(244)
      if (lookahead == '-') SKIP(220)
      END_STATE();
    case 245:
      if (lookahead != 0 &&
          lookahead != '-') SKIP(245)
      if (lookahead == '-') SKIP(222)
      END_STATE();
    case 246:
      if (lookahead != 0 &&
          lookahead != '-') SKIP(246)
      if (lookahead == '-') SKIP(224)
      END_STATE();
    case 247:
      if (lookahead != 0 &&
          lookahead != '-') SKIP(247)
      if (lookahead == '-') SKIP(226)
      END_STATE();
    case 248:
      if (eof) ADVANCE(259);
      if (lookahead == '\n') SKIP(252)
      if (lookahead != 0) SKIP(248)
      END_STATE();
    case 249:
      if (eof) ADVANCE(259);
      if (lookahead == '\n') SKIP(255)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(249)
      if (lookahead == '(') ADVANCE(4);
      if (lookahead == '-') SKIP(250)
      if (lookahead == '[') ADVANCE(5);
      if (lookahead == '_') ADVANCE(272);
      if (lookahead == '{') SKIP(251)
      if (lookahead != 0 &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) SKIP(251)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 250:
      if (eof) ADVANCE(259);
      if (lookahead == '\n') SKIP(255)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '}') SKIP(251)
      if (lookahead == '-') SKIP(250)
      if (lookahead == '}') SKIP(249)
      END_STATE();
    case 251:
      if (eof) ADVANCE(259);
      if (lookahead == '\n') SKIP(255)
      if (lookahead != 0 &&
          lookahead != '-') SKIP(251)
      if (lookahead == '-') SKIP(250)
      END_STATE();
    case 252:
      if (eof) ADVANCE(259);
      if (lookahead == '(') ADVANCE(153);
      if (lookahead == '-') SKIP(253)
      if (lookahead == '[') ADVANCE(157);
      if (lookahead == '_') ADVANCE(272);
      if (lookahead == '{') SKIP(254)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(252)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 253:
      if (eof) ADVANCE(259);
      if (lookahead == '-') SKIP(248)
      END_STATE();
    case 254:
      if (eof) ADVANCE(259);
      if (lookahead == '-') SKIP(258)
      END_STATE();
    case 255:
      if (eof) ADVANCE(259);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(255)
      if (lookahead == '(') ADVANCE(182);
      if (lookahead == '-') SKIP(257)
      if (lookahead == '[') ADVANCE(185);
      if (lookahead == '_') ADVANCE(272);
      if (lookahead == '{') SKIP(258)
      if (lookahead != 0 &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) SKIP(258)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 256:
      if (eof) ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '}') SKIP(258)
      if (lookahead == '-') SKIP(256)
      if (lookahead == '}') SKIP(255)
      END_STATE();
    case 257:
      if (eof) ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '}') SKIP(258)
      if (lookahead == '-') SKIP(250)
      if (lookahead == '}') SKIP(255)
      END_STATE();
    case 258:
      if (eof) ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '-') SKIP(258)
      if (lookahead == '-') SKIP(256)
      END_STATE();
    case 259:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_producer);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_prec_lvl);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(264);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_choice_sep);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ']') ADVANCE(269);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_LPAREN_COLON_RPAREN);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_LPAREN_COLON_LBRACK_RBRACK_RPAREN);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ':') ADVANCE(100);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_star);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_plus);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_optional);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_character);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == '\'') ADVANCE(282);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_terminal_token1);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_terminal_token1);
      if (lookahead == '"') ADVANCE(284);
      if (lookahead == '\'') ADVANCE(289);
      if (lookahead == '(') ADVANCE(277);
      if (lookahead == ')') ADVANCE(278);
      if (lookahead == '*') ADVANCE(279);
      if (lookahead == '+') ADVANCE(280);
      if (lookahead == ',') ADVANCE(263);
      if (lookahead == '-') ADVANCE(273);
      if (lookahead == '.') ADVANCE(261);
      if (lookahead == ':') ADVANCE(288);
      if (lookahead == ';') ADVANCE(260);
      if (lookahead == '?') ADVANCE(281);
      if (lookahead == '[') ADVANCE(267);
      if (lookahead == ']') ADVANCE(268);
      if (lookahead == '_') ADVANCE(272);
      if (lookahead == '{') ADVANCE(274);
      if (lookahead == '|') ADVANCE(265);
      if (lookahead == '}') ADVANCE(275);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(264);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(285);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_terminal_token1);
      if (lookahead == '"') ADVANCE(284);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '{') ADVANCE(285);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(285);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_terminal_token1);
      if (lookahead == ':') ADVANCE(155);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_terminal_token1);
      if (lookahead == '\\') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_terminal_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym__ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == '-') SKIP(1)
      if (lookahead == 'c') ADVANCE(2);
      if (lookahead == 'd') ADVANCE(3);
      if (lookahead == 'e') ADVANCE(4);
      if (lookahead == 'i') ADVANCE(5);
      if (lookahead == 'l') ADVANCE(6);
      if (lookahead == 'n') ADVANCE(7);
      if (lookahead == 'p') ADVANCE(8);
      if (lookahead == 'r') ADVANCE(9);
      if (lookahead == 's') ADVANCE(10);
      if (lookahead == 't') ADVANCE(11);
      if (lookahead == 'u') ADVANCE(12);
      if (lookahead == '{') SKIP(13)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '-') SKIP(14)
      END_STATE();
    case 2:
      if (lookahead == 'h') ADVANCE(15);
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 3:
      if (lookahead == 'i') ADVANCE(17);
      END_STATE();
    case 4:
      if (lookahead == 'n') ADVANCE(18);
      if (lookahead == 'p') ADVANCE(19);
      END_STATE();
    case 5:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(21);
      if (lookahead == 'e') ADVANCE(22);
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 7:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 8:
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 9:
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(27);
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(29);
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 12:
      if (lookahead == 'p') ADVANCE(31);
      END_STATE();
    case 13:
      if (lookahead == '-') SKIP(32)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(0)
      if (lookahead != 0) SKIP(14)
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(34);
      if (lookahead == 'm') ADVANCE(35);
      END_STATE();
    case 17:
      if (lookahead == 'g') ADVANCE(36);
      END_STATE();
    case 18:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 19:
      if (lookahead == 's') ADVANCE(38);
      END_STATE();
    case 20:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 21:
      if (lookahead == 'y') ADVANCE(40);
      END_STATE();
    case 22:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 23:
      if (lookahead == 'w') ADVANCE(42);
      END_STATE();
    case 24:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 25:
      if (lookahead == 's') ADVANCE(44);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 27:
      if (lookahead == 'p') ADVANCE(46);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 29:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 30:
      if (lookahead == 'k') ADVANCE(49);
      if (lookahead == 'p') ADVANCE(50);
      END_STATE();
    case 31:
      if (lookahead == 'p') ADVANCE(51);
      END_STATE();
    case 32:
      if (lookahead != 0 &&
          lookahead != '-') SKIP(32)
      if (lookahead == '-') SKIP(52)
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 35:
      if (lookahead == 'm') ADVANCE(55);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 37:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_eps);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 40:
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 47:
      if (lookahead == 'p') ADVANCE(66);
      END_STATE();
    case 48:
      if (lookahead == 'm') ADVANCE(67);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 52:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '}') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == '}') SKIP(71)
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(72);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 57:
      if (lookahead == 'y') ADVANCE(75);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 59:
      if (lookahead == 'u') ADVANCE(77);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 62:
      if (lookahead == 'm') ADVANCE(80);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 64:
      if (lookahead == 's') ADVANCE(82);
      END_STATE();
    case 65:
      if (lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_stop);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(84);
      END_STATE();
    case 68:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 70:
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 71:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(71)
      if (lookahead == '-') SKIP(88)
      if (lookahead == 'c') ADVANCE(89);
      if (lookahead == 'd') ADVANCE(90);
      if (lookahead == 'e') ADVANCE(91);
      if (lookahead == 'i') ADVANCE(92);
      if (lookahead == 'l') ADVANCE(93);
      if (lookahead == 'n') ADVANCE(94);
      if (lookahead == 'p') ADVANCE(95);
      if (lookahead == 'r') ADVANCE(96);
      if (lookahead == 's') ADVANCE(97);
      if (lookahead == 't') ADVANCE(98);
      if (lookahead == 'u') ADVANCE(99);
      if (lookahead == '{') SKIP(100)
      if (lookahead != 0) SKIP(32)
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(101);
      END_STATE();
    case 73:
      if (lookahead == 'n') ADVANCE(102);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_digit);
      END_STATE();
    case 75:
      if (lookahead == 'p') ADVANCE(103);
      END_STATE();
    case 76:
      if (lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 77:
      if (lookahead == 't') ADVANCE(105);
      END_STATE();
    case 78:
      if (lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_lower);
      END_STATE();
    case 80:
      if (lookahead == 'p') ADVANCE(107);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_rules);
      END_STATE();
    case 83:
      if (lookahead == 'a') ADVANCE(109);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(110);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_token);
      END_STATE();
    case 86:
      if (lookahead == 'v') ADVANCE(111);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_upper);
      END_STATE();
    case 88:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '}') SKIP(32)
      if (lookahead == '-') SKIP(112)
      if (lookahead == '}') SKIP(71)
      END_STATE();
    case 89:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'h' &&
          lookahead != 'o') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 'h') ADVANCE(113);
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 90:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'i') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 91:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'n' &&
          lookahead != 'p') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 'n') ADVANCE(116);
      if (lookahead == 'p') ADVANCE(117);
      END_STATE();
    case 92:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'n') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 93:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'a' &&
          lookahead != 'e' &&
          lookahead != 'o') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 'a') ADVANCE(119);
      if (lookahead == 'e') ADVANCE(120);
      if (lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 94:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'o') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 'o') ADVANCE(122);
      END_STATE();
    case 95:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'o') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 'o') ADVANCE(123);
      END_STATE();
    case 96:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'u') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 'u') ADVANCE(124);
      END_STATE();
    case 97:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'e' &&
          lookahead != 't') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 'e') ADVANCE(125);
      if (lookahead == 't') ADVANCE(126);
      END_STATE();
    case 98:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'e' &&
          lookahead != 'o') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 'e') ADVANCE(127);
      if (lookahead == 'o') ADVANCE(128);
      END_STATE();
    case 99:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'p') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 'p') ADVANCE(129);
      END_STATE();
    case 100:
      if (lookahead != 0 &&
          lookahead != '-') SKIP(32)
      if (lookahead == '-') SKIP(52)
      END_STATE();
    case 101:
      if (lookahead == 'o') ADVANCE(130);
      END_STATE();
    case 102:
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 103:
      if (lookahead == 'o') ADVANCE(132);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(133);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_layout);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_letter);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(134);
      END_STATE();
    case 108:
      if (lookahead == 'o') ADVANCE(135);
      END_STATE();
    case 109:
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(137);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 112:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '}') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == '}') SKIP(140)
      END_STATE();
    case 113:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'a') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 'a') ADVANCE(141);
      END_STATE();
    case 114:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'e' &&
          lookahead != 'm') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 'e') ADVANCE(142);
      if (lookahead == 'm') ADVANCE(143);
      END_STATE();
    case 115:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'g') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 'g') ADVANCE(144);
      END_STATE();
    case 116:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 't') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 't') ADVANCE(145);
      END_STATE();
    case 117:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 's') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 's') ADVANCE(146);
      END_STATE();
    case 118:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 't') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 't') ADVANCE(147);
      END_STATE();
    case 119:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'y') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 'y') ADVANCE(148);
      END_STATE();
    case 120:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 't') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 121:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'w') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 'w') ADVANCE(150);
      END_STATE();
    case 122:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'n') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 'n') ADVANCE(151);
      END_STATE();
    case 123:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 's') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 's') ADVANCE(152);
      END_STATE();
    case 124:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'l') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 'l') ADVANCE(153);
      END_STATE();
    case 125:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'p') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 'p') ADVANCE(154);
      END_STATE();
    case 126:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'o') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 'o') ADVANCE(155);
      END_STATE();
    case 127:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'r') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 'r') ADVANCE(156);
      END_STATE();
    case 128:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'k' &&
          lookahead != 'p') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 'k') ADVANCE(157);
      if (lookahead == 'p') ADVANCE(158);
      END_STATE();
    case 129:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'p') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 'p') ADVANCE(159);
      END_STATE();
    case 130:
      if (lookahead == 'n') ADVANCE(160);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_comment);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(161);
      END_STATE();
    case 133:
      if (lookahead == 'l') ADVANCE(162);
      END_STATE();
    case 134:
      if (lookahead == 'y') ADVANCE(163);
      END_STATE();
    case 135:
      if (lookahead == 'n') ADVANCE(164);
      END_STATE();
    case 136:
      if (lookahead == 'o') ADVANCE(165);
      END_STATE();
    case 137:
      if (lookahead == 't') ADVANCE(166);
      END_STATE();
    case 138:
      if (lookahead == 'l') ADVANCE(167);
      END_STATE();
    case 139:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-') SKIP(139)
      if (lookahead == '-') SKIP(112)
      END_STATE();
    case 140:
      if (lookahead == '\n') SKIP(71)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(140)
      if (lookahead == '-') SKIP(168)
      if (lookahead == 'c') ADVANCE(169);
      if (lookahead == 'd') ADVANCE(170);
      if (lookahead == 'e') ADVANCE(171);
      if (lookahead == 'i') ADVANCE(172);
      if (lookahead == 'l') ADVANCE(173);
      if (lookahead == 'n') ADVANCE(174);
      if (lookahead == 'p') ADVANCE(175);
      if (lookahead == 'r') ADVANCE(176);
      if (lookahead == 's') ADVANCE(177);
      if (lookahead == 't') ADVANCE(178);
      if (lookahead == 'u') ADVANCE(179);
      if (lookahead == '{') SKIP(180)
      if (lookahead != 0) SKIP(139)
      END_STATE();
    case 141:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'r') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 'r') ADVANCE(181);
      END_STATE();
    case 142:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'r') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 'r') ADVANCE(182);
      END_STATE();
    case 143:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'm') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 'm') ADVANCE(183);
      END_STATE();
    case 144:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'i') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 'i') ADVANCE(184);
      END_STATE();
    case 145:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'r') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 'r') ADVANCE(185);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_eps);
      END_STATE();
    case 147:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'e') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 148:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'o') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 'o') ADVANCE(187);
      END_STATE();
    case 149:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 't') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 't') ADVANCE(188);
      END_STATE();
    case 150:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'e') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 151:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'e') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 152:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'i') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 'i') ADVANCE(191);
      END_STATE();
    case 153:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'e') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 154:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'a') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 'a') ADVANCE(193);
      END_STATE();
    case 155:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'p') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 'p') ADVANCE(194);
      END_STATE();
    case 156:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'm') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 'm') ADVANCE(195);
      END_STATE();
    case 157:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'e') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 158:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'l') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 'l') ADVANCE(197);
      END_STATE();
    case 159:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'e') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 160:
      if (lookahead == 's') ADVANCE(199);
      END_STATE();
    case 161:
      if (lookahead == 'n') ADVANCE(200);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_internal);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_nonempty);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_pos);
      END_STATE();
    case 165:
      if (lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 166:
      if (lookahead == 'o') ADVANCE(202);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_toplevel);
      END_STATE();
    case 168:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '}') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == '}') SKIP(140)
      END_STATE();
    case 169:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'h' &&
          lookahead != 'o') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 'h') ADVANCE(203);
      if (lookahead == 'o') ADVANCE(204);
      END_STATE();
    case 170:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'i') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 'i') ADVANCE(205);
      END_STATE();
    case 171:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'n' &&
          lookahead != 'p') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 'n') ADVANCE(206);
      if (lookahead == 'p') ADVANCE(207);
      END_STATE();
    case 172:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'n') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 'n') ADVANCE(208);
      END_STATE();
    case 173:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'a' &&
          lookahead != 'e' &&
          lookahead != 'o') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 'a') ADVANCE(209);
      if (lookahead == 'e') ADVANCE(210);
      if (lookahead == 'o') ADVANCE(211);
      END_STATE();
    case 174:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'o') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 'o') ADVANCE(212);
      END_STATE();
    case 175:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'o') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 'o') ADVANCE(213);
      END_STATE();
    case 176:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'u') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 'u') ADVANCE(214);
      END_STATE();
    case 177:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'e' &&
          lookahead != 't') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 'e') ADVANCE(215);
      if (lookahead == 't') ADVANCE(216);
      END_STATE();
    case 178:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'e' &&
          lookahead != 'o') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 'e') ADVANCE(217);
      if (lookahead == 'o') ADVANCE(218);
      END_STATE();
    case 179:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'p') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 'p') ADVANCE(219);
      END_STATE();
    case 180:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-') SKIP(139)
      if (lookahead == '-') SKIP(112)
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 182:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'c') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 'c') ADVANCE(220);
      END_STATE();
    case 183:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'e') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 184:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 't') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 't') ADVANCE(222);
      END_STATE();
    case 185:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'y') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 'y') ADVANCE(223);
      END_STATE();
    case 186:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'r') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 'r') ADVANCE(224);
      END_STATE();
    case 187:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'u') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 'u') ADVANCE(225);
      END_STATE();
    case 188:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'e') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 'e') ADVANCE(226);
      END_STATE();
    case 189:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'r') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 'r') ADVANCE(227);
      END_STATE();
    case 190:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'm') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 'm') ADVANCE(228);
      END_STATE();
    case 191:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 't') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 't') ADVANCE(229);
      END_STATE();
    case 192:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 's') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 's') ADVANCE(230);
      END_STATE();
    case 193:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'r') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 'r') ADVANCE(231);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_stop);
      END_STATE();
    case 195:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'i') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 'i') ADVANCE(232);
      END_STATE();
    case 196:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'n') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 'n') ADVANCE(233);
      END_STATE();
    case 197:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'e') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 198:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'r') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 'r') ADVANCE(235);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_coercions);
      END_STATE();
    case 200:
      if (lookahead == 't') ADVANCE(236);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_separator);
      END_STATE();
    case 202:
      if (lookahead == 'r') ADVANCE(237);
      END_STATE();
    case 203:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'a') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 'a') ADVANCE(238);
      END_STATE();
    case 204:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'e' &&
          lookahead != 'm') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 'e') ADVANCE(239);
      if (lookahead == 'm') ADVANCE(240);
      END_STATE();
    case 205:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'g') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 'g') ADVANCE(241);
      END_STATE();
    case 206:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 't') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 't') ADVANCE(242);
      END_STATE();
    case 207:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 's') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 's') ADVANCE(243);
      END_STATE();
    case 208:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 't') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 't') ADVANCE(244);
      END_STATE();
    case 209:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'y') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 'y') ADVANCE(245);
      END_STATE();
    case 210:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 't') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 't') ADVANCE(246);
      END_STATE();
    case 211:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'w') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 'w') ADVANCE(247);
      END_STATE();
    case 212:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'n') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 'n') ADVANCE(248);
      END_STATE();
    case 213:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 's') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 's') ADVANCE(249);
      END_STATE();
    case 214:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'l') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 'l') ADVANCE(250);
      END_STATE();
    case 215:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'p') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 'p') ADVANCE(251);
      END_STATE();
    case 216:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'o') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 'o') ADVANCE(252);
      END_STATE();
    case 217:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'r') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 'r') ADVANCE(253);
      END_STATE();
    case 218:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'k' &&
          lookahead != 'p') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 'k') ADVANCE(254);
      if (lookahead == 'p') ADVANCE(255);
      END_STATE();
    case 219:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'p') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 'p') ADVANCE(256);
      END_STATE();
    case 220:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'i') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 'i') ADVANCE(257);
      END_STATE();
    case 221:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'n') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 'n') ADVANCE(258);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_digit);
      END_STATE();
    case 223:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'p') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 'p') ADVANCE(259);
      END_STATE();
    case 224:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'n') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 'n') ADVANCE(260);
      END_STATE();
    case 225:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 't') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 't') ADVANCE(261);
      END_STATE();
    case 226:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'r') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 'r') ADVANCE(262);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_lower);
      END_STATE();
    case 228:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'p') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 'p') ADVANCE(263);
      END_STATE();
    case 229:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'i') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 'i') ADVANCE(264);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_rules);
      END_STATE();
    case 231:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'a') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 'a') ADVANCE(265);
      END_STATE();
    case 232:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'n') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 'n') ADVANCE(266);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_token);
      END_STATE();
    case 234:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'v') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 'v') ADVANCE(267);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_upper);
      END_STATE();
    case 236:
      if (lookahead == 's') ADVANCE(268);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_terminator);
      END_STATE();
    case 238:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'r') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 'r') ADVANCE(269);
      END_STATE();
    case 239:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'r') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 'r') ADVANCE(270);
      END_STATE();
    case 240:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'm') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 'm') ADVANCE(271);
      END_STATE();
    case 241:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'i') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 'i') ADVANCE(272);
      END_STATE();
    case 242:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'r') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 'r') ADVANCE(273);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_eps);
      END_STATE();
    case 244:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'e') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 'e') ADVANCE(274);
      END_STATE();
    case 245:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'o') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 'o') ADVANCE(275);
      END_STATE();
    case 246:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 't') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 't') ADVANCE(276);
      END_STATE();
    case 247:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'e') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 'e') ADVANCE(277);
      END_STATE();
    case 248:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'e') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 'e') ADVANCE(278);
      END_STATE();
    case 249:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'i') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 'i') ADVANCE(279);
      END_STATE();
    case 250:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'e') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 'e') ADVANCE(280);
      END_STATE();
    case 251:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'a') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 'a') ADVANCE(281);
      END_STATE();
    case 252:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'p') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 'p') ADVANCE(282);
      END_STATE();
    case 253:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'm') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 'm') ADVANCE(283);
      END_STATE();
    case 254:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'e') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 'e') ADVANCE(284);
      END_STATE();
    case 255:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'l') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 'l') ADVANCE(285);
      END_STATE();
    case 256:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'e') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 'e') ADVANCE(286);
      END_STATE();
    case 257:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'o') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 'o') ADVANCE(287);
      END_STATE();
    case 258:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 't') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 't') ADVANCE(288);
      END_STATE();
    case 259:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'o') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 'o') ADVANCE(289);
      END_STATE();
    case 260:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'a') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 'a') ADVANCE(290);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_layout);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_letter);
      END_STATE();
    case 263:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 't') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 't') ADVANCE(291);
      END_STATE();
    case 264:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'o') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 'o') ADVANCE(292);
      END_STATE();
    case 265:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 't') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 't') ADVANCE(293);
      END_STATE();
    case 266:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'a') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 'a') ADVANCE(294);
      END_STATE();
    case 267:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'e') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 'e') ADVANCE(295);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_entrypoints);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 270:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'c') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 'c') ADVANCE(296);
      END_STATE();
    case 271:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'e') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 'e') ADVANCE(297);
      END_STATE();
    case 272:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 't') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 't') ADVANCE(298);
      END_STATE();
    case 273:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'y') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 'y') ADVANCE(299);
      END_STATE();
    case 274:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'r') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 'r') ADVANCE(300);
      END_STATE();
    case 275:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'u') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 'u') ADVANCE(301);
      END_STATE();
    case 276:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'e') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 'e') ADVANCE(302);
      END_STATE();
    case 277:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'r') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 'r') ADVANCE(303);
      END_STATE();
    case 278:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'm') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 'm') ADVANCE(304);
      END_STATE();
    case 279:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 't') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 't') ADVANCE(305);
      END_STATE();
    case 280:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 's') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 's') ADVANCE(306);
      END_STATE();
    case 281:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'r') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 'r') ADVANCE(307);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_stop);
      END_STATE();
    case 283:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'i') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 'i') ADVANCE(308);
      END_STATE();
    case 284:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'n') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 'n') ADVANCE(309);
      END_STATE();
    case 285:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'e') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 'e') ADVANCE(310);
      END_STATE();
    case 286:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'r') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 'r') ADVANCE(311);
      END_STATE();
    case 287:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'n') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 'n') ADVANCE(312);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_comment);
      END_STATE();
    case 289:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'i') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 'i') ADVANCE(313);
      END_STATE();
    case 290:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'l') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 'l') ADVANCE(314);
      END_STATE();
    case 291:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'y') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 'y') ADVANCE(315);
      END_STATE();
    case 292:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'n') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 'n') ADVANCE(316);
      END_STATE();
    case 293:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'o') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 'o') ADVANCE(317);
      END_STATE();
    case 294:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 't') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 't') ADVANCE(318);
      END_STATE();
    case 295:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'l') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 'l') ADVANCE(319);
      END_STATE();
    case 296:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'i') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 'i') ADVANCE(320);
      END_STATE();
    case 297:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'n') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 'n') ADVANCE(321);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_digit);
      END_STATE();
    case 299:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'p') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 'p') ADVANCE(322);
      END_STATE();
    case 300:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'n') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 'n') ADVANCE(323);
      END_STATE();
    case 301:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 't') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 't') ADVANCE(324);
      END_STATE();
    case 302:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'r') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 'r') ADVANCE(325);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_lower);
      END_STATE();
    case 304:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'p') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 'p') ADVANCE(326);
      END_STATE();
    case 305:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'i') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 'i') ADVANCE(327);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_rules);
      END_STATE();
    case 307:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'a') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 'a') ADVANCE(328);
      END_STATE();
    case 308:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'n') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 'n') ADVANCE(329);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_token);
      END_STATE();
    case 310:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'v') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 'v') ADVANCE(330);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_upper);
      END_STATE();
    case 312:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 's') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 's') ADVANCE(331);
      END_STATE();
    case 313:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'n') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 'n') ADVANCE(332);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_internal);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_nonempty);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_pos);
      END_STATE();
    case 317:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'r') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 'r') ADVANCE(333);
      END_STATE();
    case 318:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'o') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 'o') ADVANCE(334);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_toplevel);
      END_STATE();
    case 320:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'o') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 'o') ADVANCE(335);
      END_STATE();
    case 321:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 't') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 't') ADVANCE(336);
      END_STATE();
    case 322:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'o') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 'o') ADVANCE(337);
      END_STATE();
    case 323:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'a') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 'a') ADVANCE(338);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_layout);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_letter);
      END_STATE();
    case 326:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 't') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 't') ADVANCE(339);
      END_STATE();
    case 327:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'o') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 'o') ADVANCE(340);
      END_STATE();
    case 328:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 't') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 't') ADVANCE(341);
      END_STATE();
    case 329:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'a') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 'a') ADVANCE(342);
      END_STATE();
    case 330:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'e') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 'e') ADVANCE(343);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_coercions);
      END_STATE();
    case 332:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 't') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 't') ADVANCE(344);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_separator);
      END_STATE();
    case 334:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'r') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 'r') ADVANCE(345);
      END_STATE();
    case 335:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'n') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 'n') ADVANCE(346);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_comment);
      END_STATE();
    case 337:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'i') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 'i') ADVANCE(347);
      END_STATE();
    case 338:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'l') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 'l') ADVANCE(348);
      END_STATE();
    case 339:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'y') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 'y') ADVANCE(349);
      END_STATE();
    case 340:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'n') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 'n') ADVANCE(350);
      END_STATE();
    case 341:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'o') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 'o') ADVANCE(351);
      END_STATE();
    case 342:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 't') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 't') ADVANCE(352);
      END_STATE();
    case 343:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'l') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 'l') ADVANCE(353);
      END_STATE();
    case 344:
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 's') SKIP(32)
      if (lookahead == '-') SKIP(52)
      if (lookahead == 's') ADVANCE(354);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_terminator);
      END_STATE();
    case 346:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 's') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 's') ADVANCE(355);
      END_STATE();
    case 347:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'n') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 'n') ADVANCE(356);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_internal);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_nonempty);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_pos);
      END_STATE();
    case 351:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'r') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 'r') ADVANCE(357);
      END_STATE();
    case 352:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'o') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 'o') ADVANCE(358);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_toplevel);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_entrypoints);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_coercions);
      END_STATE();
    case 356:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 't') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 't') ADVANCE(359);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_separator);
      END_STATE();
    case 358:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 'r') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 'r') ADVANCE(360);
      END_STATE();
    case 359:
      if (lookahead == '\n') SKIP(71)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != 's') SKIP(139)
      if (lookahead == '-') SKIP(112)
      if (lookahead == 's') ADVANCE(361);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_terminator);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_entrypoints);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 252},
  [2] = {.lex_state = 252},
  [3] = {.lex_state = 252},
  [4] = {.lex_state = 95},
  [5] = {.lex_state = 95},
  [6] = {.lex_state = 95},
  [7] = {.lex_state = 252},
  [8] = {.lex_state = 95},
  [9] = {.lex_state = 93},
  [10] = {.lex_state = 93},
  [11] = {.lex_state = 95},
  [12] = {.lex_state = 93},
  [13] = {.lex_state = 93},
  [14] = {.lex_state = 93},
  [15] = {.lex_state = 94},
  [16] = {.lex_state = 97},
  [17] = {.lex_state = 94},
  [18] = {.lex_state = 97},
  [19] = {.lex_state = 97},
  [20] = {.lex_state = 96},
  [21] = {.lex_state = 96},
  [22] = {.lex_state = 97},
  [23] = {.lex_state = 97},
  [24] = {.lex_state = 97},
  [25] = {.lex_state = 97},
  [26] = {.lex_state = 97},
  [27] = {.lex_state = 85},
  [28] = {.lex_state = 85},
  [29] = {.lex_state = 85},
  [30] = {.lex_state = 85},
  [31] = {.lex_state = 85},
  [32] = {.lex_state = 85},
  [33] = {.lex_state = 86},
  [34] = {.lex_state = 87},
  [35] = {.lex_state = 87},
  [36] = {.lex_state = 87},
  [37] = {.lex_state = 87},
  [38] = {.lex_state = 87},
  [39] = {.lex_state = 86},
  [40] = {.lex_state = 252},
  [41] = {.lex_state = 85},
  [42] = {.lex_state = 85},
  [43] = {.lex_state = 85},
  [44] = {.lex_state = 85},
  [45] = {.lex_state = 88},
  [46] = {.lex_state = 85},
  [47] = {.lex_state = 87},
  [48] = {.lex_state = 86},
  [49] = {.lex_state = 129},
  [50] = {.lex_state = 129},
  [51] = {.lex_state = 89},
  [52] = {.lex_state = 87},
  [53] = {.lex_state = 86},
  [54] = {.lex_state = 86},
  [55] = {.lex_state = 129},
  [56] = {.lex_state = 87},
  [57] = {.lex_state = 129},
  [58] = {.lex_state = 86},
  [59] = {.lex_state = 87},
  [60] = {.lex_state = 89},
  [61] = {.lex_state = 89},
  [62] = {.lex_state = 129},
  [63] = {.lex_state = 129},
  [64] = {.lex_state = 129},
  [65] = {.lex_state = 34},
  [66] = {.lex_state = 129},
  [67] = {.lex_state = 104},
  [68] = {.lex_state = 129},
  [69] = {.lex_state = 129},
  [70] = {.lex_state = 129},
  [71] = {.lex_state = 129},
  [72] = {.lex_state = 34},
  [73] = {.lex_state = 129},
  [74] = {.lex_state = 34},
  [75] = {.lex_state = 129},
  [76] = {.lex_state = 129},
  [77] = {.lex_state = 34},
  [78] = {.lex_state = 98},
  [79] = {.lex_state = 34},
  [80] = {.lex_state = 90},
  [81] = {.lex_state = 34},
  [82] = {.lex_state = 104},
  [83] = {.lex_state = 89},
  [84] = {.lex_state = 34},
  [85] = {.lex_state = 34},
  [86] = {.lex_state = 34},
  [87] = {.lex_state = 34},
  [88] = {.lex_state = 34},
  [89] = {.lex_state = 98},
  [90] = {.lex_state = 129},
  [91] = {.lex_state = 129},
  [92] = {.lex_state = 34},
  [93] = {.lex_state = 34},
  [94] = {.lex_state = 129},
  [95] = {.lex_state = 34},
  [96] = {.lex_state = 34},
  [97] = {.lex_state = 90},
  [98] = {.lex_state = 102},
  [99] = {.lex_state = 102},
  [100] = {.lex_state = 90},
  [101] = {.lex_state = 129},
  [102] = {.lex_state = 99},
  [103] = {.lex_state = 135},
  [104] = {.lex_state = 99},
  [105] = {.lex_state = 90},
  [106] = {.lex_state = 90},
  [107] = {.lex_state = 89},
  [108] = {.lex_state = 90},
  [109] = {.lex_state = 102},
  [110] = {.lex_state = 135},
  [111] = {.lex_state = 90},
  [112] = {.lex_state = 89},
  [113] = {.lex_state = 90},
  [114] = {.lex_state = 102},
  [115] = {.lex_state = 137},
  [116] = {.lex_state = 103},
  [117] = {.lex_state = 140},
  [118] = {.lex_state = 103},
  [119] = {.lex_state = 142},
  [120] = {.lex_state = 142},
  [121] = {.lex_state = 144},
  [122] = {.lex_state = 146},
  [123] = {.lex_state = 144},
  [124] = {.lex_state = 146},
  [125] = {.lex_state = 146},
  [126] = {.lex_state = 148},
  [127] = {.lex_state = 146},
  [128] = {.lex_state = 148},
  [129] = {.lex_state = 146},
  [130] = {.lex_state = 142},
  [131] = {.lex_state = 146},
  [132] = {.lex_state = 148},
  [133] = {.lex_state = 140},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 146},
  [136] = {.lex_state = 150},
  [137] = {.lex_state = 137},
  [138] = {.lex_state = 146},
  [139] = {.lex_state = 137},
  [140] = {.lex_state = 150},
  [141] = {.lex_state = 146},
  [142] = {.lex_state = 90},
  [143] = {.lex_state = 150},
  [144] = {.lex_state = 146},
  [145] = {.lex_state = 90},
  [146] = {.lex_state = 140},
  [147] = {.lex_state = 146},
  [148] = {.lex_state = 144},
  [149] = {.lex_state = 146},
  [150] = {.lex_state = 146},
  [151] = {.lex_state = 150},
  [152] = {.lex_state = 148},
  [153] = {.lex_state = 146},
  [154] = {.lex_state = 150},
  [155] = {.lex_state = 103},
  [156] = {.lex_state = 144},
  [157] = {.lex_state = 144},
  [158] = {.lex_state = 150},
  [159] = {.lex_state = 150},
  [160] = {.lex_state = 150},
  [161] = {.lex_state = 146},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__ident] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_internal] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_producer] = ACTIONS(1),
    [anon_sym_entrypoints] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_terminator] = ACTIONS(1),
    [anon_sym_separator] = ACTIONS(1),
    [anon_sym_nonempty] = ACTIONS(1),
    [anon_sym_coercions] = ACTIONS(1),
    [sym_prec_lvl] = ACTIONS(1),
    [anon_sym_rules] = ACTIONS(1),
    [sym_choice_sep] = ACTIONS(1),
    [anon_sym_comment] = ACTIONS(1),
    [anon_sym_token] = ACTIONS(1),
    [anon_sym_layout] = ACTIONS(1),
    [sym_toplevel] = ACTIONS(1),
    [sym_pos] = ACTIONS(1),
    [sym_stop] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(1),
    [anon_sym_LPAREN_COLON_RPAREN] = ACTIONS(1),
    [anon_sym_LPAREN_COLON_LBRACK_RBRACK_RPAREN] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_char] = ACTIONS(1),
    [anon_sym_lower] = ACTIONS(1),
    [anon_sym_upper] = ACTIONS(1),
    [anon_sym_letter] = ACTIONS(1),
    [anon_sym_digit] = ACTIONS(1),
    [anon_sym_eps] = ACTIONS(1),
    [sym_star] = ACTIONS(1),
    [sym_plus] = ACTIONS(1),
    [sym_optional] = ACTIONS(1),
    [sym_character] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_terminal_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(134),
    [sym__rule] = STATE(2),
    [sym_production] = STATE(136),
    [sym_entry_points] = STATE(136),
    [sym_list_macro] = STATE(136),
    [sym_coercions_macro] = STATE(136),
    [sym_rules_macro] = STATE(136),
    [sym_comment_macro] = STATE(136),
    [sym_token_macro] = STATE(136),
    [sym_layout_macro] = STATE(136),
    [sym_label] = STATE(137),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__ident] = ACTIONS(5),
    [anon_sym_internal] = ACTIONS(7),
    [anon_sym_entrypoints] = ACTIONS(9),
    [anon_sym_terminator] = ACTIONS(11),
    [anon_sym_separator] = ACTIONS(11),
    [anon_sym_coercions] = ACTIONS(13),
    [anon_sym_rules] = ACTIONS(15),
    [anon_sym_comment] = ACTIONS(17),
    [anon_sym_token] = ACTIONS(19),
    [anon_sym_layout] = ACTIONS(21),
    [sym_pos] = ACTIONS(23),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(5),
    [anon_sym_LPAREN_COLON_RPAREN] = ACTIONS(5),
    [anon_sym_LPAREN_COLON_LBRACK_RBRACK_RPAREN] = ACTIONS(5),
    [anon_sym__] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(7), 1,
      anon_sym_internal,
    ACTIONS(9), 1,
      anon_sym_entrypoints,
    ACTIONS(13), 1,
      anon_sym_coercions,
    ACTIONS(15), 1,
      anon_sym_rules,
    ACTIONS(17), 1,
      anon_sym_comment,
    ACTIONS(19), 1,
      anon_sym_token,
    ACTIONS(21), 1,
      anon_sym_layout,
    ACTIONS(23), 1,
      sym_pos,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    STATE(137), 1,
      sym_label,
    ACTIONS(11), 2,
      anon_sym_terminator,
      anon_sym_separator,
    STATE(3), 2,
      sym__rule,
      aux_sym_source_file_repeat1,
    ACTIONS(5), 5,
      anon_sym_LBRACK_RBRACK,
      anon_sym_LPAREN_COLON_RPAREN,
      anon_sym_LPAREN_COLON_LBRACK_RBRACK_RPAREN,
      anon_sym__,
      sym__ident,
    STATE(136), 8,
      sym_production,
      sym_entry_points,
      sym_list_macro,
      sym_coercions_macro,
      sym_rules_macro,
      sym_comment_macro,
      sym_token_macro,
      sym_layout_macro,
  [56] = 14,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(32), 1,
      anon_sym_internal,
    ACTIONS(35), 1,
      anon_sym_entrypoints,
    ACTIONS(41), 1,
      anon_sym_coercions,
    ACTIONS(44), 1,
      anon_sym_rules,
    ACTIONS(47), 1,
      anon_sym_comment,
    ACTIONS(50), 1,
      anon_sym_token,
    ACTIONS(53), 1,
      anon_sym_layout,
    ACTIONS(56), 1,
      sym_pos,
    STATE(137), 1,
      sym_label,
    ACTIONS(38), 2,
      anon_sym_terminator,
      anon_sym_separator,
    STATE(3), 2,
      sym__rule,
      aux_sym_source_file_repeat1,
    ACTIONS(29), 5,
      anon_sym_LBRACK_RBRACK,
      anon_sym_LPAREN_COLON_RPAREN,
      anon_sym_LPAREN_COLON_LBRACK_RBRACK_RPAREN,
      anon_sym__,
      sym__ident,
    STATE(136), 8,
      sym_production,
      sym_entry_points,
      sym_list_macro,
      sym_coercions_macro,
      sym_rules_macro,
      sym_comment_macro,
      sym_token_macro,
      sym_layout_macro,
  [112] = 2,
    ACTIONS(61), 3,
      sym_star,
      sym_plus,
      sym_optional,
    ACTIONS(59), 13,
      anon_sym_SEMI,
      sym_choice_sep,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_char,
      anon_sym_lower,
      anon_sym_upper,
      anon_sym_letter,
      anon_sym_digit,
      anon_sym_eps,
      sym_character,
  [133] = 1,
    ACTIONS(63), 16,
      anon_sym_SEMI,
      sym_choice_sep,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_char,
      anon_sym_lower,
      anon_sym_upper,
      anon_sym_letter,
      anon_sym_digit,
      anon_sym_eps,
      sym_star,
      sym_plus,
      sym_optional,
      sym_character,
  [152] = 1,
    ACTIONS(65), 16,
      anon_sym_SEMI,
      sym_choice_sep,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_char,
      anon_sym_lower,
      anon_sym_upper,
      anon_sym_letter,
      anon_sym_digit,
      anon_sym_eps,
      sym_star,
      sym_plus,
      sym_optional,
      sym_character,
  [171] = 2,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    ACTIONS(69), 15,
      anon_sym_internal,
      anon_sym_entrypoints,
      anon_sym_terminator,
      anon_sym_separator,
      anon_sym_coercions,
      anon_sym_rules,
      anon_sym_comment,
      anon_sym_token,
      anon_sym_layout,
      sym_pos,
      anon_sym_LBRACK_RBRACK,
      anon_sym_LPAREN_COLON_RPAREN,
      anon_sym_LPAREN_COLON_LBRACK_RBRACK_RPAREN,
      anon_sym__,
      sym__ident,
  [192] = 1,
    ACTIONS(71), 16,
      anon_sym_SEMI,
      sym_choice_sep,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_char,
      anon_sym_lower,
      anon_sym_upper,
      anon_sym_letter,
      anon_sym_digit,
      anon_sym_eps,
      sym_star,
      sym_plus,
      sym_optional,
      sym_character,
  [211] = 1,
    ACTIONS(65), 16,
      sym_choice_sep,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_char,
      anon_sym_lower,
      anon_sym_upper,
      anon_sym_letter,
      anon_sym_digit,
      anon_sym_eps,
      sym_star,
      sym_plus,
      sym_optional,
      sym_character,
  [230] = 2,
    ACTIONS(75), 3,
      sym_star,
      sym_plus,
      sym_optional,
    ACTIONS(73), 13,
      sym_choice_sep,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_char,
      anon_sym_lower,
      anon_sym_upper,
      anon_sym_letter,
      anon_sym_digit,
      anon_sym_eps,
      sym_character,
  [251] = 2,
    ACTIONS(61), 3,
      sym_star,
      sym_plus,
      sym_optional,
    ACTIONS(73), 13,
      anon_sym_SEMI,
      sym_choice_sep,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_char,
      anon_sym_lower,
      anon_sym_upper,
      anon_sym_letter,
      anon_sym_digit,
      anon_sym_eps,
      sym_character,
  [272] = 1,
    ACTIONS(71), 16,
      sym_choice_sep,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_char,
      anon_sym_lower,
      anon_sym_upper,
      anon_sym_letter,
      anon_sym_digit,
      anon_sym_eps,
      sym_star,
      sym_plus,
      sym_optional,
      sym_character,
  [291] = 2,
    ACTIONS(75), 3,
      sym_star,
      sym_plus,
      sym_optional,
    ACTIONS(59), 13,
      sym_choice_sep,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_char,
      anon_sym_lower,
      anon_sym_upper,
      anon_sym_letter,
      anon_sym_digit,
      anon_sym_eps,
      sym_character,
  [312] = 1,
    ACTIONS(63), 16,
      sym_choice_sep,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_char,
      anon_sym_lower,
      anon_sym_upper,
      anon_sym_letter,
      anon_sym_digit,
      anon_sym_eps,
      sym_star,
      sym_plus,
      sym_optional,
      sym_character,
  [331] = 7,
    ACTIONS(79), 1,
      anon_sym_LBRACK,
    ACTIONS(81), 1,
      anon_sym_LBRACE,
    ACTIONS(83), 1,
      anon_sym_LPAREN,
    ACTIONS(87), 1,
      sym_character,
    STATE(10), 2,
      sym__regex_atomic,
      sym_char_type,
    ACTIONS(77), 3,
      sym_choice_sep,
      anon_sym_DASH,
      anon_sym_RPAREN,
    ACTIONS(85), 6,
      anon_sym_char,
      anon_sym_lower,
      anon_sym_upper,
      anon_sym_letter,
      anon_sym_digit,
      anon_sym_eps,
  [361] = 9,
    ACTIONS(79), 1,
      anon_sym_LBRACK,
    ACTIONS(81), 1,
      anon_sym_LBRACE,
    ACTIONS(83), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      sym_character,
    STATE(17), 1,
      sym__regex_seq,
    STATE(89), 1,
      sym__regex_diff,
    STATE(104), 1,
      sym__regex,
    STATE(13), 2,
      sym__regex_atomic,
      sym_char_type,
    ACTIONS(85), 6,
      anon_sym_char,
      anon_sym_lower,
      anon_sym_upper,
      anon_sym_letter,
      anon_sym_digit,
      anon_sym_eps,
  [395] = 7,
    ACTIONS(79), 1,
      anon_sym_LBRACK,
    ACTIONS(81), 1,
      anon_sym_LBRACE,
    ACTIONS(83), 1,
      anon_sym_LPAREN,
    ACTIONS(87), 1,
      sym_character,
    STATE(10), 2,
      sym__regex_atomic,
      sym_char_type,
    ACTIONS(91), 3,
      sym_choice_sep,
      anon_sym_DASH,
      anon_sym_RPAREN,
    ACTIONS(85), 6,
      anon_sym_char,
      anon_sym_lower,
      anon_sym_upper,
      anon_sym_letter,
      anon_sym_digit,
      anon_sym_eps,
  [425] = 9,
    ACTIONS(93), 1,
      anon_sym_LBRACK,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      sym_character,
    STATE(21), 1,
      sym__regex_seq,
    STATE(67), 1,
      sym__regex_diff,
    STATE(103), 1,
      sym__regex,
    STATE(4), 2,
      sym__regex_atomic,
      sym_char_type,
    ACTIONS(99), 6,
      anon_sym_char,
      anon_sym_lower,
      anon_sym_upper,
      anon_sym_letter,
      anon_sym_digit,
      anon_sym_eps,
  [459] = 9,
    ACTIONS(79), 1,
      anon_sym_LBRACK,
    ACTIONS(81), 1,
      anon_sym_LBRACE,
    ACTIONS(83), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      sym_character,
    STATE(17), 1,
      sym__regex_seq,
    STATE(89), 1,
      sym__regex_diff,
    STATE(102), 1,
      sym__regex,
    STATE(13), 2,
      sym__regex_atomic,
      sym_char_type,
    ACTIONS(85), 6,
      anon_sym_char,
      anon_sym_lower,
      anon_sym_upper,
      anon_sym_letter,
      anon_sym_digit,
      anon_sym_eps,
  [493] = 7,
    ACTIONS(93), 1,
      anon_sym_LBRACK,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      sym_character,
    STATE(11), 2,
      sym__regex_atomic,
      sym_char_type,
    ACTIONS(77), 3,
      anon_sym_SEMI,
      sym_choice_sep,
      anon_sym_DASH,
    ACTIONS(99), 6,
      anon_sym_char,
      anon_sym_lower,
      anon_sym_upper,
      anon_sym_letter,
      anon_sym_digit,
      anon_sym_eps,
  [523] = 7,
    ACTIONS(93), 1,
      anon_sym_LBRACK,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      sym_character,
    STATE(11), 2,
      sym__regex_atomic,
      sym_char_type,
    ACTIONS(91), 3,
      anon_sym_SEMI,
      sym_choice_sep,
      anon_sym_DASH,
    ACTIONS(99), 6,
      anon_sym_char,
      anon_sym_lower,
      anon_sym_upper,
      anon_sym_letter,
      anon_sym_digit,
      anon_sym_eps,
  [553] = 9,
    ACTIONS(93), 1,
      anon_sym_LBRACK,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      sym_character,
    STATE(21), 1,
      sym__regex_seq,
    STATE(67), 1,
      sym__regex_diff,
    STATE(110), 1,
      sym__regex,
    STATE(4), 2,
      sym__regex_atomic,
      sym_char_type,
    ACTIONS(99), 6,
      anon_sym_char,
      anon_sym_lower,
      anon_sym_upper,
      anon_sym_letter,
      anon_sym_digit,
      anon_sym_eps,
  [587] = 8,
    ACTIONS(79), 1,
      anon_sym_LBRACK,
    ACTIONS(81), 1,
      anon_sym_LBRACE,
    ACTIONS(83), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      sym_character,
    STATE(17), 1,
      sym__regex_seq,
    STATE(78), 1,
      sym__regex_diff,
    STATE(13), 2,
      sym__regex_atomic,
      sym_char_type,
    ACTIONS(85), 6,
      anon_sym_char,
      anon_sym_lower,
      anon_sym_upper,
      anon_sym_letter,
      anon_sym_digit,
      anon_sym_eps,
  [618] = 8,
    ACTIONS(93), 1,
      anon_sym_LBRACK,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      sym_character,
    STATE(21), 1,
      sym__regex_seq,
    STATE(82), 1,
      sym__regex_diff,
    STATE(4), 2,
      sym__regex_atomic,
      sym_char_type,
    ACTIONS(99), 6,
      anon_sym_char,
      anon_sym_lower,
      anon_sym_upper,
      anon_sym_letter,
      anon_sym_digit,
      anon_sym_eps,
  [649] = 7,
    ACTIONS(93), 1,
      anon_sym_LBRACK,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      sym_character,
    STATE(20), 1,
      sym__regex_seq,
    STATE(4), 2,
      sym__regex_atomic,
      sym_char_type,
    ACTIONS(99), 6,
      anon_sym_char,
      anon_sym_lower,
      anon_sym_upper,
      anon_sym_letter,
      anon_sym_digit,
      anon_sym_eps,
  [677] = 7,
    ACTIONS(79), 1,
      anon_sym_LBRACK,
    ACTIONS(81), 1,
      anon_sym_LBRACE,
    ACTIONS(83), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      sym_character,
    STATE(15), 1,
      sym__regex_seq,
    STATE(13), 2,
      sym__regex_atomic,
      sym_char_type,
    ACTIONS(85), 6,
      anon_sym_char,
      anon_sym_lower,
      anon_sym_upper,
      anon_sym_letter,
      anon_sym_digit,
      anon_sym_eps,
  [705] = 7,
    ACTIONS(105), 1,
      sym__ident,
    ACTIONS(107), 1,
      anon_sym_SEMI,
    ACTIONS(109), 1,
      sym_choice_sep,
    ACTIONS(111), 1,
      anon_sym_LBRACK,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    STATE(29), 1,
      aux_sym_rules_macro_repeat1,
    STATE(30), 3,
      sym_category,
      sym_terminal,
      aux_sym_production_repeat1,
  [729] = 7,
    ACTIONS(115), 1,
      sym__ident,
    ACTIONS(118), 1,
      anon_sym_SEMI,
    ACTIONS(120), 1,
      sym_choice_sep,
    ACTIONS(123), 1,
      anon_sym_LBRACK,
    ACTIONS(126), 1,
      anon_sym_DQUOTE,
    STATE(28), 1,
      aux_sym_rules_macro_repeat1,
    STATE(39), 3,
      sym_category,
      sym_terminal,
      aux_sym_production_repeat1,
  [753] = 7,
    ACTIONS(105), 1,
      sym__ident,
    ACTIONS(111), 1,
      anon_sym_LBRACK,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    ACTIONS(129), 1,
      anon_sym_SEMI,
    ACTIONS(131), 1,
      sym_choice_sep,
    STATE(28), 1,
      aux_sym_rules_macro_repeat1,
    STATE(31), 3,
      sym_category,
      sym_terminal,
      aux_sym_production_repeat1,
  [777] = 6,
    ACTIONS(105), 1,
      sym__ident,
    ACTIONS(111), 1,
      anon_sym_LBRACK,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    ACTIONS(129), 1,
      anon_sym_SEMI,
    ACTIONS(133), 1,
      sym_choice_sep,
    STATE(32), 3,
      sym_category,
      sym_terminal,
      aux_sym_production_repeat1,
  [798] = 6,
    ACTIONS(105), 1,
      sym__ident,
    ACTIONS(111), 1,
      anon_sym_LBRACK,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 1,
      sym_choice_sep,
    ACTIONS(135), 1,
      anon_sym_SEMI,
    STATE(32), 3,
      sym_category,
      sym_terminal,
      aux_sym_production_repeat1,
  [819] = 5,
    ACTIONS(137), 1,
      sym__ident,
    ACTIONS(142), 1,
      anon_sym_LBRACK,
    ACTIONS(145), 1,
      anon_sym_DQUOTE,
    ACTIONS(140), 2,
      anon_sym_SEMI,
      sym_choice_sep,
    STATE(32), 3,
      sym_category,
      sym_terminal,
      aux_sym_production_repeat1,
  [838] = 5,
    ACTIONS(140), 1,
      sym_choice_sep,
    ACTIONS(148), 1,
      sym__ident,
    ACTIONS(151), 1,
      anon_sym_LBRACK,
    ACTIONS(154), 1,
      anon_sym_DQUOTE,
    STATE(33), 3,
      sym_category,
      sym_terminal,
      aux_sym_production_repeat1,
  [856] = 5,
    ACTIONS(140), 1,
      anon_sym_SEMI,
    ACTIONS(157), 1,
      sym__ident,
    ACTIONS(160), 1,
      anon_sym_LBRACK,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    STATE(34), 3,
      sym_category,
      sym_terminal,
      aux_sym_production_repeat1,
  [874] = 5,
    ACTIONS(166), 1,
      sym__ident,
    ACTIONS(168), 1,
      anon_sym_SEMI,
    ACTIONS(170), 1,
      anon_sym_LBRACK,
    ACTIONS(172), 1,
      anon_sym_DQUOTE,
    STATE(36), 3,
      sym_category,
      sym_terminal,
      aux_sym_production_repeat1,
  [892] = 5,
    ACTIONS(166), 1,
      sym__ident,
    ACTIONS(170), 1,
      anon_sym_LBRACK,
    ACTIONS(172), 1,
      anon_sym_DQUOTE,
    ACTIONS(174), 1,
      anon_sym_SEMI,
    STATE(34), 3,
      sym_category,
      sym_terminal,
      aux_sym_production_repeat1,
  [910] = 5,
    ACTIONS(166), 1,
      sym__ident,
    ACTIONS(170), 1,
      anon_sym_LBRACK,
    ACTIONS(172), 1,
      anon_sym_DQUOTE,
    ACTIONS(174), 1,
      anon_sym_SEMI,
    STATE(38), 3,
      sym_category,
      sym_terminal,
      aux_sym_production_repeat1,
  [928] = 5,
    ACTIONS(166), 1,
      sym__ident,
    ACTIONS(170), 1,
      anon_sym_LBRACK,
    ACTIONS(172), 1,
      anon_sym_DQUOTE,
    ACTIONS(176), 1,
      anon_sym_SEMI,
    STATE(34), 3,
      sym_category,
      sym_terminal,
      aux_sym_production_repeat1,
  [946] = 5,
    ACTIONS(133), 1,
      sym_choice_sep,
    ACTIONS(178), 1,
      sym__ident,
    ACTIONS(180), 1,
      anon_sym_LBRACK,
    ACTIONS(182), 1,
      anon_sym_DQUOTE,
    STATE(33), 3,
      sym_category,
      sym_terminal,
      aux_sym_production_repeat1,
  [964] = 2,
    STATE(139), 1,
      sym_label,
    ACTIONS(5), 5,
      anon_sym_LBRACK_RBRACK,
      anon_sym_LPAREN_COLON_RPAREN,
      anon_sym_LPAREN_COLON_LBRACK_RBRACK_RPAREN,
      anon_sym__,
      sym__ident,
  [975] = 1,
    ACTIONS(184), 5,
      anon_sym_SEMI,
      sym_choice_sep,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym__ident,
  [983] = 1,
    ACTIONS(186), 5,
      anon_sym_SEMI,
      sym_choice_sep,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym__ident,
  [991] = 1,
    ACTIONS(188), 5,
      anon_sym_SEMI,
      sym_choice_sep,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym__ident,
  [999] = 1,
    ACTIONS(190), 5,
      anon_sym_SEMI,
      sym_choice_sep,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym__ident,
  [1007] = 4,
    ACTIONS(192), 1,
      sym_toplevel,
    ACTIONS(194), 1,
      sym_stop,
    ACTIONS(196), 1,
      anon_sym_DQUOTE,
    STATE(51), 2,
      sym_terminal,
      aux_sym_layout_macro_repeat1,
  [1021] = 1,
    ACTIONS(118), 5,
      anon_sym_SEMI,
      sym_choice_sep,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym__ident,
  [1029] = 1,
    ACTIONS(186), 4,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym__ident,
  [1036] = 1,
    ACTIONS(186), 4,
      sym_choice_sep,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym__ident,
  [1043] = 4,
    ACTIONS(198), 1,
      sym__ident,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    STATE(55), 1,
      aux_sym_entry_points_repeat1,
    STATE(114), 1,
      sym_category,
  [1056] = 4,
    ACTIONS(198), 1,
      sym__ident,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    STATE(49), 1,
      aux_sym_entry_points_repeat1,
    STATE(98), 1,
      sym_category,
  [1069] = 3,
    ACTIONS(196), 1,
      anon_sym_DQUOTE,
    ACTIONS(202), 1,
      anon_sym_SEMI,
    STATE(60), 2,
      sym_terminal,
      aux_sym_layout_macro_repeat1,
  [1080] = 1,
    ACTIONS(184), 4,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym__ident,
  [1087] = 1,
    ACTIONS(190), 4,
      sym_choice_sep,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym__ident,
  [1094] = 1,
    ACTIONS(188), 4,
      sym_choice_sep,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym__ident,
  [1101] = 4,
    ACTIONS(204), 1,
      sym__ident,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    STATE(55), 1,
      aux_sym_entry_points_repeat1,
    STATE(155), 1,
      sym_category,
  [1114] = 1,
    ACTIONS(190), 4,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym__ident,
  [1121] = 4,
    ACTIONS(210), 1,
      sym__ident,
    ACTIONS(212), 1,
      anon_sym_nonempty,
    ACTIONS(214), 1,
      anon_sym_LBRACK,
    STATE(100), 1,
      sym_category,
  [1134] = 1,
    ACTIONS(184), 4,
      sym_choice_sep,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym__ident,
  [1141] = 1,
    ACTIONS(188), 4,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym__ident,
  [1148] = 3,
    ACTIONS(216), 1,
      anon_sym_SEMI,
    ACTIONS(218), 1,
      anon_sym_DQUOTE,
    STATE(60), 2,
      sym_terminal,
      aux_sym_layout_macro_repeat1,
  [1159] = 3,
    ACTIONS(196), 1,
      anon_sym_DQUOTE,
    ACTIONS(221), 1,
      anon_sym_SEMI,
    STATE(60), 2,
      sym_terminal,
      aux_sym_layout_macro_repeat1,
  [1170] = 3,
    ACTIONS(223), 1,
      sym__ident,
    ACTIONS(225), 1,
      anon_sym_LBRACK,
    STATE(148), 1,
      sym_category,
  [1180] = 3,
    ACTIONS(223), 1,
      sym__ident,
    ACTIONS(225), 1,
      anon_sym_LBRACK,
    STATE(156), 1,
      sym_category,
  [1190] = 3,
    ACTIONS(227), 1,
      sym__ident,
    ACTIONS(229), 1,
      anon_sym_LBRACK,
    STATE(141), 1,
      sym_category,
  [1200] = 3,
    ACTIONS(231), 1,
      anon_sym_DQUOTE,
    ACTIONS(233), 1,
      aux_sym_terminal_token1,
    STATE(77), 1,
      aux_sym_terminal_repeat1,
  [1210] = 3,
    ACTIONS(235), 1,
      sym__ident,
    ACTIONS(237), 1,
      anon_sym_LBRACK,
    STATE(146), 1,
      sym_category,
  [1220] = 2,
    ACTIONS(241), 1,
      anon_sym_DASH,
    ACTIONS(239), 2,
      anon_sym_SEMI,
      sym_choice_sep,
  [1228] = 3,
    ACTIONS(227), 1,
      sym__ident,
    ACTIONS(229), 1,
      anon_sym_LBRACK,
    STATE(138), 1,
      sym_category,
  [1238] = 3,
    ACTIONS(227), 1,
      sym__ident,
    ACTIONS(229), 1,
      anon_sym_LBRACK,
    STATE(135), 1,
      sym_category,
  [1248] = 3,
    ACTIONS(227), 1,
      sym__ident,
    ACTIONS(229), 1,
      anon_sym_LBRACK,
    STATE(150), 1,
      sym_category,
  [1258] = 3,
    ACTIONS(227), 1,
      sym__ident,
    ACTIONS(229), 1,
      anon_sym_LBRACK,
    STATE(144), 1,
      sym_category,
  [1268] = 3,
    ACTIONS(243), 1,
      anon_sym_DQUOTE,
    ACTIONS(245), 1,
      aux_sym_terminal_token1,
    STATE(96), 1,
      aux_sym_terminal_repeat1,
  [1278] = 3,
    ACTIONS(227), 1,
      sym__ident,
    ACTIONS(229), 1,
      anon_sym_LBRACK,
    STATE(147), 1,
      sym_category,
  [1288] = 3,
    ACTIONS(247), 1,
      anon_sym_DQUOTE,
    ACTIONS(249), 1,
      aux_sym_terminal_token1,
    STATE(74), 1,
      aux_sym_terminal_repeat1,
  [1298] = 3,
    ACTIONS(227), 1,
      sym__ident,
    ACTIONS(229), 1,
      anon_sym_LBRACK,
    STATE(149), 1,
      sym_category,
  [1308] = 3,
    ACTIONS(227), 1,
      sym__ident,
    ACTIONS(229), 1,
      anon_sym_LBRACK,
    STATE(129), 1,
      sym_category,
  [1318] = 3,
    ACTIONS(252), 1,
      anon_sym_DQUOTE,
    ACTIONS(254), 1,
      aux_sym_terminal_token1,
    STATE(74), 1,
      aux_sym_terminal_repeat1,
  [1328] = 2,
    ACTIONS(258), 1,
      anon_sym_DASH,
    ACTIONS(256), 2,
      sym_choice_sep,
      anon_sym_RPAREN,
  [1336] = 3,
    ACTIONS(254), 1,
      aux_sym_terminal_token1,
    ACTIONS(260), 1,
      anon_sym_DQUOTE,
    STATE(74), 1,
      aux_sym_terminal_repeat1,
  [1346] = 2,
    ACTIONS(262), 1,
      anon_sym_DQUOTE,
    STATE(61), 2,
      sym_terminal,
      aux_sym_layout_macro_repeat1,
  [1354] = 3,
    ACTIONS(254), 1,
      aux_sym_terminal_token1,
    ACTIONS(264), 1,
      anon_sym_DQUOTE,
    STATE(74), 1,
      aux_sym_terminal_repeat1,
  [1364] = 2,
    ACTIONS(241), 1,
      anon_sym_DASH,
    ACTIONS(256), 2,
      anon_sym_SEMI,
      sym_choice_sep,
  [1372] = 3,
    ACTIONS(266), 1,
      anon_sym_SEMI,
    ACTIONS(268), 1,
      anon_sym_DQUOTE,
    STATE(158), 1,
      sym_terminal,
  [1382] = 3,
    ACTIONS(270), 1,
      anon_sym_DQUOTE,
    ACTIONS(272), 1,
      aux_sym_terminal_token1,
    STATE(79), 1,
      aux_sym_terminal_repeat1,
  [1392] = 3,
    ACTIONS(274), 1,
      anon_sym_DQUOTE,
    ACTIONS(276), 1,
      aux_sym_terminal_token1,
    STATE(81), 1,
      aux_sym_terminal_repeat1,
  [1402] = 3,
    ACTIONS(254), 1,
      aux_sym_terminal_token1,
    ACTIONS(278), 1,
      anon_sym_DQUOTE,
    STATE(74), 1,
      aux_sym_terminal_repeat1,
  [1412] = 3,
    ACTIONS(280), 1,
      anon_sym_DQUOTE,
    ACTIONS(282), 1,
      aux_sym_terminal_token1,
    STATE(86), 1,
      aux_sym_terminal_repeat1,
  [1422] = 3,
    ACTIONS(254), 1,
      aux_sym_terminal_token1,
    ACTIONS(284), 1,
      anon_sym_DQUOTE,
    STATE(74), 1,
      aux_sym_terminal_repeat1,
  [1432] = 2,
    ACTIONS(258), 1,
      anon_sym_DASH,
    ACTIONS(239), 2,
      sym_choice_sep,
      anon_sym_RPAREN,
  [1440] = 3,
    ACTIONS(210), 1,
      sym__ident,
    ACTIONS(214), 1,
      anon_sym_LBRACK,
    STATE(113), 1,
      sym_category,
  [1450] = 3,
    ACTIONS(223), 1,
      sym__ident,
    ACTIONS(225), 1,
      anon_sym_LBRACK,
    STATE(157), 1,
      sym_category,
  [1460] = 3,
    ACTIONS(286), 1,
      anon_sym_DQUOTE,
    ACTIONS(288), 1,
      aux_sym_terminal_token1,
    STATE(88), 1,
      aux_sym_terminal_repeat1,
  [1470] = 3,
    ACTIONS(254), 1,
      aux_sym_terminal_token1,
    ACTIONS(290), 1,
      anon_sym_DQUOTE,
    STATE(74), 1,
      aux_sym_terminal_repeat1,
  [1480] = 3,
    ACTIONS(227), 1,
      sym__ident,
    ACTIONS(229), 1,
      anon_sym_LBRACK,
    STATE(161), 1,
      sym_category,
  [1490] = 3,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      aux_sym_terminal_token1,
    STATE(93), 1,
      aux_sym_terminal_repeat1,
  [1500] = 3,
    ACTIONS(254), 1,
      aux_sym_terminal_token1,
    ACTIONS(296), 1,
      anon_sym_DQUOTE,
    STATE(74), 1,
      aux_sym_terminal_repeat1,
  [1510] = 2,
    ACTIONS(298), 1,
      anon_sym_DQUOTE,
    STATE(152), 1,
      sym_terminal,
  [1517] = 2,
    ACTIONS(300), 1,
      anon_sym_SEMI,
    ACTIONS(302), 1,
      anon_sym_COMMA,
  [1524] = 1,
    ACTIONS(188), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [1529] = 2,
    ACTIONS(304), 1,
      anon_sym_DQUOTE,
    STATE(160), 1,
      sym_terminal,
  [1536] = 1,
    ACTIONS(306), 2,
      anon_sym_LBRACK,
      sym__ident,
  [1541] = 2,
    ACTIONS(308), 1,
      sym_choice_sep,
    ACTIONS(310), 1,
      anon_sym_RPAREN,
  [1548] = 2,
    ACTIONS(312), 1,
      anon_sym_SEMI,
    ACTIONS(314), 1,
      sym_choice_sep,
  [1555] = 2,
    ACTIONS(308), 1,
      sym_choice_sep,
    ACTIONS(316), 1,
      anon_sym_RPAREN,
  [1562] = 2,
    ACTIONS(318), 1,
      anon_sym_DQUOTE,
    STATE(131), 1,
      sym_terminal,
  [1569] = 2,
    ACTIONS(262), 1,
      anon_sym_DQUOTE,
    STATE(83), 1,
      sym_terminal,
  [1576] = 1,
    ACTIONS(186), 2,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
  [1581] = 2,
    ACTIONS(298), 1,
      anon_sym_DQUOTE,
    STATE(132), 1,
      sym_terminal,
  [1588] = 1,
    ACTIONS(190), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [1593] = 2,
    ACTIONS(314), 1,
      sym_choice_sep,
    ACTIONS(320), 1,
      anon_sym_SEMI,
  [1600] = 2,
    ACTIONS(318), 1,
      anon_sym_DQUOTE,
    STATE(153), 1,
      sym_terminal,
  [1607] = 1,
    ACTIONS(184), 2,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
  [1612] = 2,
    ACTIONS(304), 1,
      anon_sym_DQUOTE,
    STATE(154), 1,
      sym_terminal,
  [1619] = 2,
    ACTIONS(302), 1,
      anon_sym_COMMA,
    ACTIONS(322), 1,
      anon_sym_SEMI,
  [1626] = 1,
    ACTIONS(324), 1,
      anon_sym_DOT,
  [1630] = 1,
    ACTIONS(326), 1,
      anon_sym_COMMA,
  [1634] = 1,
    ACTIONS(328), 1,
      sym_prec_lvl,
  [1638] = 1,
    ACTIONS(328), 1,
      anon_sym_COMMA,
  [1642] = 1,
    ACTIONS(330), 1,
      anon_sym_token,
  [1646] = 1,
    ACTIONS(332), 1,
      sym__ident,
  [1650] = 1,
    ACTIONS(326), 1,
      sym_producer,
  [1654] = 1,
    ACTIONS(334), 1,
      anon_sym_RBRACK,
  [1658] = 1,
    ACTIONS(328), 1,
      sym_producer,
  [1662] = 1,
    ACTIONS(336), 1,
      anon_sym_RBRACK,
  [1666] = 1,
    ACTIONS(326), 1,
      anon_sym_RBRACK,
  [1670] = 1,
    ACTIONS(334), 1,
      anon_sym_RBRACE,
  [1674] = 1,
    ACTIONS(328), 1,
      anon_sym_RBRACK,
  [1678] = 1,
    ACTIONS(336), 1,
      anon_sym_RBRACE,
  [1682] = 1,
    ACTIONS(338), 1,
      anon_sym_RBRACK,
  [1686] = 1,
    ACTIONS(340), 1,
      sym__ident,
  [1690] = 1,
    ACTIONS(342), 1,
      anon_sym_RBRACK,
  [1694] = 1,
    ACTIONS(342), 1,
      anon_sym_RBRACE,
  [1698] = 1,
    ACTIONS(326), 1,
      sym_prec_lvl,
  [1702] = 1,
    ACTIONS(344), 1,
      ts_builtin_sym_end,
  [1706] = 1,
    ACTIONS(346), 1,
      anon_sym_RBRACK,
  [1710] = 1,
    ACTIONS(348), 1,
      anon_sym_SEMI,
  [1714] = 1,
    ACTIONS(350), 1,
      anon_sym_DOT,
  [1718] = 1,
    ACTIONS(352), 1,
      anon_sym_RBRACK,
  [1722] = 1,
    ACTIONS(354), 1,
      anon_sym_DOT,
  [1726] = 1,
    ACTIONS(336), 1,
      anon_sym_SEMI,
  [1730] = 1,
    ACTIONS(356), 1,
      anon_sym_RBRACK,
  [1734] = 1,
    ACTIONS(328), 1,
      anon_sym_DQUOTE,
  [1738] = 1,
    ACTIONS(334), 1,
      anon_sym_SEMI,
  [1742] = 1,
    ACTIONS(358), 1,
      anon_sym_RBRACK,
  [1746] = 1,
    ACTIONS(326), 1,
      anon_sym_DQUOTE,
  [1750] = 1,
    ACTIONS(360), 1,
      sym_prec_lvl,
  [1754] = 1,
    ACTIONS(362), 1,
      anon_sym_RBRACK,
  [1758] = 1,
    ACTIONS(364), 1,
      sym_producer,
  [1762] = 1,
    ACTIONS(366), 1,
      anon_sym_RBRACK,
  [1766] = 1,
    ACTIONS(368), 1,
      anon_sym_RBRACK,
  [1770] = 1,
    ACTIONS(370), 1,
      anon_sym_SEMI,
  [1774] = 1,
    ACTIONS(372), 1,
      anon_sym_RBRACE,
  [1778] = 1,
    ACTIONS(372), 1,
      anon_sym_RBRACK,
  [1782] = 1,
    ACTIONS(374), 1,
      anon_sym_SEMI,
  [1786] = 1,
    ACTIONS(376), 1,
      anon_sym_COMMA,
  [1790] = 1,
    ACTIONS(378), 1,
      sym_producer,
  [1794] = 1,
    ACTIONS(380), 1,
      sym_producer,
  [1798] = 1,
    ACTIONS(382), 1,
      anon_sym_SEMI,
  [1802] = 1,
    ACTIONS(384), 1,
      anon_sym_SEMI,
  [1806] = 1,
    ACTIONS(386), 1,
      anon_sym_SEMI,
  [1810] = 1,
    ACTIONS(388), 1,
      anon_sym_RBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 56,
  [SMALL_STATE(4)] = 112,
  [SMALL_STATE(5)] = 133,
  [SMALL_STATE(6)] = 152,
  [SMALL_STATE(7)] = 171,
  [SMALL_STATE(8)] = 192,
  [SMALL_STATE(9)] = 211,
  [SMALL_STATE(10)] = 230,
  [SMALL_STATE(11)] = 251,
  [SMALL_STATE(12)] = 272,
  [SMALL_STATE(13)] = 291,
  [SMALL_STATE(14)] = 312,
  [SMALL_STATE(15)] = 331,
  [SMALL_STATE(16)] = 361,
  [SMALL_STATE(17)] = 395,
  [SMALL_STATE(18)] = 425,
  [SMALL_STATE(19)] = 459,
  [SMALL_STATE(20)] = 493,
  [SMALL_STATE(21)] = 523,
  [SMALL_STATE(22)] = 553,
  [SMALL_STATE(23)] = 587,
  [SMALL_STATE(24)] = 618,
  [SMALL_STATE(25)] = 649,
  [SMALL_STATE(26)] = 677,
  [SMALL_STATE(27)] = 705,
  [SMALL_STATE(28)] = 729,
  [SMALL_STATE(29)] = 753,
  [SMALL_STATE(30)] = 777,
  [SMALL_STATE(31)] = 798,
  [SMALL_STATE(32)] = 819,
  [SMALL_STATE(33)] = 838,
  [SMALL_STATE(34)] = 856,
  [SMALL_STATE(35)] = 874,
  [SMALL_STATE(36)] = 892,
  [SMALL_STATE(37)] = 910,
  [SMALL_STATE(38)] = 928,
  [SMALL_STATE(39)] = 946,
  [SMALL_STATE(40)] = 964,
  [SMALL_STATE(41)] = 975,
  [SMALL_STATE(42)] = 983,
  [SMALL_STATE(43)] = 991,
  [SMALL_STATE(44)] = 999,
  [SMALL_STATE(45)] = 1007,
  [SMALL_STATE(46)] = 1021,
  [SMALL_STATE(47)] = 1029,
  [SMALL_STATE(48)] = 1036,
  [SMALL_STATE(49)] = 1043,
  [SMALL_STATE(50)] = 1056,
  [SMALL_STATE(51)] = 1069,
  [SMALL_STATE(52)] = 1080,
  [SMALL_STATE(53)] = 1087,
  [SMALL_STATE(54)] = 1094,
  [SMALL_STATE(55)] = 1101,
  [SMALL_STATE(56)] = 1114,
  [SMALL_STATE(57)] = 1121,
  [SMALL_STATE(58)] = 1134,
  [SMALL_STATE(59)] = 1141,
  [SMALL_STATE(60)] = 1148,
  [SMALL_STATE(61)] = 1159,
  [SMALL_STATE(62)] = 1170,
  [SMALL_STATE(63)] = 1180,
  [SMALL_STATE(64)] = 1190,
  [SMALL_STATE(65)] = 1200,
  [SMALL_STATE(66)] = 1210,
  [SMALL_STATE(67)] = 1220,
  [SMALL_STATE(68)] = 1228,
  [SMALL_STATE(69)] = 1238,
  [SMALL_STATE(70)] = 1248,
  [SMALL_STATE(71)] = 1258,
  [SMALL_STATE(72)] = 1268,
  [SMALL_STATE(73)] = 1278,
  [SMALL_STATE(74)] = 1288,
  [SMALL_STATE(75)] = 1298,
  [SMALL_STATE(76)] = 1308,
  [SMALL_STATE(77)] = 1318,
  [SMALL_STATE(78)] = 1328,
  [SMALL_STATE(79)] = 1336,
  [SMALL_STATE(80)] = 1346,
  [SMALL_STATE(81)] = 1354,
  [SMALL_STATE(82)] = 1364,
  [SMALL_STATE(83)] = 1372,
  [SMALL_STATE(84)] = 1382,
  [SMALL_STATE(85)] = 1392,
  [SMALL_STATE(86)] = 1402,
  [SMALL_STATE(87)] = 1412,
  [SMALL_STATE(88)] = 1422,
  [SMALL_STATE(89)] = 1432,
  [SMALL_STATE(90)] = 1440,
  [SMALL_STATE(91)] = 1450,
  [SMALL_STATE(92)] = 1460,
  [SMALL_STATE(93)] = 1470,
  [SMALL_STATE(94)] = 1480,
  [SMALL_STATE(95)] = 1490,
  [SMALL_STATE(96)] = 1500,
  [SMALL_STATE(97)] = 1510,
  [SMALL_STATE(98)] = 1517,
  [SMALL_STATE(99)] = 1524,
  [SMALL_STATE(100)] = 1529,
  [SMALL_STATE(101)] = 1536,
  [SMALL_STATE(102)] = 1541,
  [SMALL_STATE(103)] = 1548,
  [SMALL_STATE(104)] = 1555,
  [SMALL_STATE(105)] = 1562,
  [SMALL_STATE(106)] = 1569,
  [SMALL_STATE(107)] = 1576,
  [SMALL_STATE(108)] = 1581,
  [SMALL_STATE(109)] = 1588,
  [SMALL_STATE(110)] = 1593,
  [SMALL_STATE(111)] = 1600,
  [SMALL_STATE(112)] = 1607,
  [SMALL_STATE(113)] = 1612,
  [SMALL_STATE(114)] = 1619,
  [SMALL_STATE(115)] = 1626,
  [SMALL_STATE(116)] = 1630,
  [SMALL_STATE(117)] = 1634,
  [SMALL_STATE(118)] = 1638,
  [SMALL_STATE(119)] = 1642,
  [SMALL_STATE(120)] = 1646,
  [SMALL_STATE(121)] = 1650,
  [SMALL_STATE(122)] = 1654,
  [SMALL_STATE(123)] = 1658,
  [SMALL_STATE(124)] = 1662,
  [SMALL_STATE(125)] = 1666,
  [SMALL_STATE(126)] = 1670,
  [SMALL_STATE(127)] = 1674,
  [SMALL_STATE(128)] = 1678,
  [SMALL_STATE(129)] = 1682,
  [SMALL_STATE(130)] = 1686,
  [SMALL_STATE(131)] = 1690,
  [SMALL_STATE(132)] = 1694,
  [SMALL_STATE(133)] = 1698,
  [SMALL_STATE(134)] = 1702,
  [SMALL_STATE(135)] = 1706,
  [SMALL_STATE(136)] = 1710,
  [SMALL_STATE(137)] = 1714,
  [SMALL_STATE(138)] = 1718,
  [SMALL_STATE(139)] = 1722,
  [SMALL_STATE(140)] = 1726,
  [SMALL_STATE(141)] = 1730,
  [SMALL_STATE(142)] = 1734,
  [SMALL_STATE(143)] = 1738,
  [SMALL_STATE(144)] = 1742,
  [SMALL_STATE(145)] = 1746,
  [SMALL_STATE(146)] = 1750,
  [SMALL_STATE(147)] = 1754,
  [SMALL_STATE(148)] = 1758,
  [SMALL_STATE(149)] = 1762,
  [SMALL_STATE(150)] = 1766,
  [SMALL_STATE(151)] = 1770,
  [SMALL_STATE(152)] = 1774,
  [SMALL_STATE(153)] = 1778,
  [SMALL_STATE(154)] = 1782,
  [SMALL_STATE(155)] = 1786,
  [SMALL_STATE(156)] = 1790,
  [SMALL_STATE(157)] = 1794,
  [SMALL_STATE(158)] = 1798,
  [SMALL_STATE(159)] = 1802,
  [SMALL_STATE(160)] = 1806,
  [SMALL_STATE(161)] = 1810,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(115),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(40),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(50),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(57),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(66),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(62),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(106),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(120),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(45),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(119),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__regex_seq, 1),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__regex_atomic, 2),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_type, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rule, 2),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__rule, 2),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__regex_atomic, 3),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__regex_seq, 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__regex_diff, 3),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__regex_diff, 1),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rules_macro, 3),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rules_macro_repeat1, 2), SHIFT_REPEAT(54),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_rules_macro_repeat1, 2),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rules_macro_repeat1, 2), SHIFT_REPEAT(28),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rules_macro_repeat1, 2), SHIFT_REPEAT(70),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rules_macro_repeat1, 2), SHIFT_REPEAT(85),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rules_macro, 4),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rules_macro, 5),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_production_repeat1, 2), SHIFT_REPEAT(43),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_production_repeat1, 2),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_production_repeat1, 2), SHIFT_REPEAT(73),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_production_repeat1, 2), SHIFT_REPEAT(72),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_production_repeat1, 2), SHIFT_REPEAT(54),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_production_repeat1, 2), SHIFT_REPEAT(70),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_production_repeat1, 2), SHIFT_REPEAT(85),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_production_repeat1, 2), SHIFT_REPEAT(59),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_production_repeat1, 2), SHIFT_REPEAT(75),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_production_repeat1, 2), SHIFT_REPEAT(87),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 4),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 5),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 6),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_terminal, 2),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_terminal, 3),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_category, 1),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_category, 3),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_layout_macro, 2),
  [204] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_entry_points_repeat1, 2), SHIFT_REPEAT(116),
  [207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_entry_points_repeat1, 2), SHIFT_REPEAT(71),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_layout_macro_repeat1, 2),
  [218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_layout_macro_repeat1, 2), SHIFT_REPEAT(84),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_layout_macro, 3),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__regex, 1),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_terminal_repeat1, 2),
  [249] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_terminal_repeat1, 2), SHIFT_REPEAT(74),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__regex, 3),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment_macro, 2),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry_points, 2),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_entry_points_repeat1, 2),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_token_macro, 4),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_token_macro, 3),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry_points, 3),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_category, 1),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_category, 3),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_terminal, 2),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_terminal, 3),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [344] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_layout_macro, 2),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_macro, 4),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_macro, 3),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_coercions_macro, 3),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_macro, 3),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_bnfc(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym__ident,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
