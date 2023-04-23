#include QMK_KEYBOARD_H
#include "keymap_french.h"

// |                  Layer definition                               <<<
// =====================================================================
enum ferris_layers {
    _QWT_L, // QWERTY Lafayette
    _QAC_L, // QWERTY Lafayette accents and diacritics
    _NUM_L, // Numbers
    _ALT_L, // Alt-Gr
    _ERG_L, // ERGO-L
    _EAC_L, // ERGO-L accents and diacritics
};

enum ferris_keycode {
    QWT_L,
    QAC_L,
    NUM_L,
    ALT_L,
    ERG_L,
    EAC_L,
};
// >>>

// |                  Unicode                                        <<<
// =====================================================================
enum unicode_names {
  U_AE, // æ
  U_S_AE, // Æ
  U_E_ACUTE, // é
  U_S_E_ACUTE, // É
  U_E_GRAVE, // è
  U_S_E_GRAVE, // È
  U_E_CIRCUM, // ê
  U_S_E_CIRCUM, // Ê
  U_L_QOT_FR, // «
  U_L_QOT_DE, // “
  U_R_QOT_FR, // »
  U_R_QOT_DE, // ”
  U_U_GRAVE, // ù
  U_S_U_GRAVE, // Ù
  U_I_CIRCUM, // î
  U_S_I_CIRCUM, // Î
  U_OE, // œ
  U_S_OE, // Œ
  U_O_CIRCUM, // ô
  U_S_O_CIRCUM, // Ô
  U_A_GRAVE, // à
  U_S_A_GRAVE, // À
  U_SS, // ß
  U_S_SS, // ẞ
  U_DIFF, // ≠
  U_PLMN, // ±
  U_NOT, // ¬
  U_R_EXCL, // ¡
  U_EM_DASH, // —
  U_EN_DASH, // –
  U_DEG, // °
  U_U_CIRCUM, //û
  U_S_U_CIRCUM, // Û
  U_PILCROW, // ¶
  U_SECTION, // §
  U_B_TIC, // `
  U_A_CIRCUM, // â
  U_S_A_CIRCUM, // À
  U_CURENCY, // ¤ Currency Sign (U+00A4)
  U_CCED, // ç
  U_S_CCED, // Ç
  U_POUND, // £
  U_CENT, // ¢
  U_YEN, // ¥
  U_NTIL, // ñ
  U_S_NTIL, // Ñ
  U_MICRO, // µ
  U_MASCU, // º
  U_MIDDLE, // ·
  U_BULLET, // •
  U_ELLIPS, // …
  U_DIVIDE, // ÷
  U_R_QMARK, // ¿
  U_APOS_FR, // ’
  U_EURO, // €
  U_PERMIL, // ‰
};

const uint32_t unicode_map[] PROGMEM = {
  [U_AE]         = 0x00e6, // æ
  [U_S_AE]       = 0x00c6, // Æ
  [U_E_ACUTE]    = 0x00e9, // é
  [U_S_E_ACUTE]  = 0x00c9, // É
  [U_E_GRAVE]    = 0x00e8, // è
  [U_S_E_GRAVE]  = 0x00c8, // È
  [U_E_CIRCUM]   = 0x00ea, // ê
  [U_S_E_CIRCUM] = 0x00ca, // Ê
  [U_L_QOT_FR]  = 0x00ab, // «
  [U_L_QOT_DE]  = 0x201c, // “
  [U_R_QOT_FR]  = 0x00bb, // »
  [U_R_QOT_DE]  = 0x201d, // ”
  [U_U_GRAVE]    = 0x00f9, // ù
  [U_S_U_GRAVE]  = 0x00d9, // Ù
  [U_I_CIRCUM]   = 0x00ee, // î
  [U_S_I_CIRCUM] = 0x00ce, // Î
  [U_OE]         = 0x0153, // œ
  [U_S_OE]       = 0x0152, // Œ
  [U_O_CIRCUM]   = 0x00f4, // ô
  [U_S_O_CIRCUM] = 0x00d4, // Ô
  [U_A_GRAVE]    = 0x00e0, // à
  [U_S_A_GRAVE]  = 0x00c0, // À
  [U_SS]         = 0x00df, // ß
  [U_S_SS]       = 0x1e9e, // ẞ
  [U_DIFF]       = 0x2260, // ≠
  [U_PLMN]       = 0x00b1, // ±
  [U_NOT]        = 0x00ac, // ¬
  [U_R_EXCL]     = 0x00a1, // ¡
  [U_EM_DASH]    = 0x2014, // —
  [U_EN_DASH]    = 0x2013, // –
  [U_DEG]        = 0x00b0, // °
  [U_U_CIRCUM]   = 0x00fb, //û
  [U_S_U_CIRCUM] = 0x00db, // Û
  [U_PILCROW]    = 0x00b6, // ¶
  [U_SECTION]    = 0x00a7, // §
  [U_B_TIC]      = 0x0060, // `
  [U_A_CIRCUM]   = 0x00e2, // â
  [U_S_A_CIRCUM] = 0x00c2, // À
  [U_CURENCY]    = 0x00a4, // ¤
  [U_CCED]       = 0x00e7, // ç
  [U_S_CCED]     = 0x00c7, // Ç
  [U_POUND]      = 0x00a3, // £
  [U_CENT]       = 0x00a2, // ¢
  [U_YEN]        = 0x00a5, // ¥
  [U_NTIL]       = 0x00f1, // ñ
  [U_S_NTIL]     = 0x00d1, // Ñ
  [U_MICRO]      = 0x00b5, // µ
  [U_MASCU]      = 0x00ba, // º
  [U_MIDDLE]     = 0x00b7, // ·
  [U_BULLET]     = 0x2022, // •
  [U_ELLIPS]     = 0x2026, // …
  [U_DIVIDE]     = 0x00f7, // ÷
  [U_R_QMARK]    = 0x00bf, // ¿
  [U_APOS_FR]    = 0x2019, // ’
  [U_EURO]       = 0x20ac, // €
  [U_PERMIL]     = 0x2030, // ‰
};
// >>>

// |                  Custom key definition                          <<<
// =====================================================================

// Unicode Lafayette
#define UL_AE XP(U_AE, U_S_AE)
#define UL_E_ACUTE XP(U_E_ACUTE, U_S_E_ACUTE)
#define UL_E_GRAVE XP(U_E_GRAVE, U_S_E_GRAVE)
#define UL_E_CIRCUM XP(U_E_CIRCUM, U_S_E_CIRCUM)
#define UL_L_QOT XP(U_L_QOT_FR, U_L_QOT_DE)
#define UL_R_QUOT XP(U_R_QOT_FR, U_R_QOT_DE)
#define UL_U_GRAVE XP(U_U_GRAVE, U_S_U_GRAVE)
#define UL_I_CIRCUM XP(U_I_CIRCUM, U_S_I_CIRCUM)
#define UL_OE XP(U_OE, U_S_OE)
#define UL_O_CIRCUM XP(U_O_CIRCUM, U_S_O_CIRCUM)
#define UL_A_GRAVE XP(U_A_GRAVE, U_S_A_GRAVE)
#define UL_SS XP(U_SS, U_S_SS)
#define UL_DIFF XP(U_DIFF, U_PLMN)
#define UL_NOT XP(U_NOT, U_R_EXCL)
#define UL_DASH XP(U_EM_DASH, U_EN_DASH)
#define UL_DEG X(U_DEG)
#define UL_U_CIRCUM XP(U_U_CIRCUM, U_S_U_CIRCUM)
#define UL_PILCROW X(U_PILCROW)
#define UL_SECTION X(U_SECTION)
#define UL_B_TIC X(U_B_TIC)
#define UL_A_CIRCUM XP(U_A_CIRCUM, U_S_A_CIRCUM)
#define UL_CURENCY X(U_CURENCY)
#define UL_C_CED XP(U_CCED, U_S_CCED)
#define UL_POUND XP(U_POUND, U_CENT)
#define UL_YEN X(U_YEN)
#define UL_N_TILD XP(U_NTIL, U_S_NTIL)
#define UL_MICRO XP(U_MICRO, U_MASCU)
#define UL_DOT XP(U_MIDDLE, U_BULLET)
#define UL_ELLIPS X(U_ELLIPS)
#define UL_DIVIDE XP(U_DIVIDE, U_R_QMARK)
#define UL_APOS_FR X(U_APOS_FR)
#define UL_EURO XP(U_EURO, U_PERMIL)

// Redefine Lafayette keys
const key_override_t comm_key_override =
    ko_make_basic(MOD_MASK_SHIFT, KC_COMM, KC_SCLN); // Shift , is ;
const key_override_t dot_key_override =
    ko_make_basic(MOD_MASK_SHIFT, KC_DOT, KC_COLN);  // Shift . is :
const key_override_t mins_key_override =
    ko_make_basic(MOD_MASK_SHIFT, FR_MINS, KC_QUES);  // Shift - is ?
const key_override_t qwertyl_key_override =
    ko_make_basic(MOD_MASK_SHIFT, OSL(_QAC_L), FR_DIAE);  // Shift DeadKey is ¨
const key_override_t ergol_key_override =
    ko_make_basic(MOD_MASK_SHIFT, OSL(_EAC_L), FR_DIAE);  // Shift DeadKey is ¨

const key_override_t** key_overrides = (const key_override_t*[]){
    &dot_key_override,
    &comm_key_override,
    &mins_key_override,
    NULL
};
// >>>

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* |                  QWERTY Lafayette                               <<<
     * =====================================================================
     *  ┏━━━━━┯━━━━━┯━━━━━┯━━━━━┯━━━━━┓ ┏━━━━━┯━━━━━┯━━━━━┯━━━━━┯━━━━━┓
     *  ┃ Q   │ W   │ E   │ R   │ T   ┃ ┃ Y   │ U   │ I   │ O   │ P   ┃
     *  ┃ q   │ w   │ e   │ r   │ t   ┃ ┃ y   │ u   │ i   │ o   │ p   ┃
     *  ┠─────┼─────┼─────┼─────┼─────┨ ┠─────┼─────┼─────┼─────┼─────┨
     *  ┃ A   │ S   │ D   │ F   │ G   ┃ ┃ H   │ J   │ K   │ L   │ ¨   ┃
     *  ┃ a   │ s   │ d   │ f   │ g   ┃ ┃ h   │ j   │ k   │ l   │ ★   ┃
     *  ┠─────┼─────┼─────┼─────┼─────┨ ┠─────┼─────┼─────┼─────┼─────┨
     *  ┃ Z   │ X   │ C   │ V   │ B   ┃ ┃ N   │ M   │ ;   │ :   │ ?   ┃
     *  ┃ z   │ x   │ c   │ v   │ b   ┃ ┃ n   │ m   │ ,   │ .   │ /   ┃
     *  ┗━━━━━┷━━━━━┷━━━━━╅─────┼─────┨ ┠─────┼─────╆━━━━━┷━━━━━┷━━━━━┛
     *                    ┃ ⇧   │ 2️⃣   ┃ ┃ 3️⃣   │ ↵   ┃
     *                    ┃     │ ␣   ┃ ┃ ⌫   │     ┃
     *                    ┗━━━━━┷━━━━━┛ ┗━━━━━┷━━━━━┛
     */
	[_QWT_L] = LAYOUT_split_3x5_2(
        KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,
        KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,

        KC_A,    KC_S,    KC_D,    KC_F,    KC_G,
        KC_H,    KC_J,    KC_K,    KC_L,    KC_F1,

        KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,
        KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,

                              KC_LSFT, LT(2,KC_SPC),
                              LT(3,KC_BSPC), KC_ENT
    ),
    // >>>

    /* |                  QWERTY Lafayette Accents                       <<<
     * =====================================================================
     *  ┏━━━━━┯━━━━━┯━━━━━┯━━━━━┯━━━━━┓ ┏━━━━━┯━━━━━┯━━━━━┯━━━━━┯━━━━━┓
     *  ┃ Æ   │ É   │ È   │ Ê   │ “   ┃ ┃ ”   │ Ù   │ Î   │ Œ   │ Ô   ┃
     *  ┃ æ   │ é   │ è   │ ê   │ «   ┃ ┃ »   │ ù   │ î   │ œ   │ ô   ┃
     *  ┠─────┼─────┼─────┼─────┼─────┨ ┠─────┼─────┼─────┼─────┼─────┨
     *  ┃ À   │ ẞ   │ ±   │ ¡   │ –   ┃ ┃ °   │ Û   │ ¶   │ §   │ `   ┃
     *  ┃ à   │ ß   │ ≠   │ ¬   │ —   ┃ ┃     │ û   │     │     │     ┃
     *  ┠─────┼─────┼─────┼─────┼─────┨ ┠─────┼─────┼─────┼─────┼─────┨
     *  ┃ Â   │ ¤   │ Ç   │ ¢   │ ¥   ┃ ┃ Ñ   │ º   │ •   │ …   │ ¿   ┃
     *  ┃ â   │     │ ç   │ £   │     ┃ ┃ ñ   │ µ   │ ·   │     │ ÷   ┃
     *  ┗━━━━━┷━━━━━┷━━━━━╅─────┼─────┨ ┠─────┼─────╆━━━━━┷━━━━━┷━━━━━┛
     *                    ┃     │ ’   ┃ ┃ ‰   │     ┃
     *                    ┃     │     ┃ ┃ €   │     ┃
     *                    ┗━━━━━┷━━━━━┛ ┗━━━━━┷━━━━━┛
     */
	[_QAC_L] = LAYOUT_split_3x5_2(
        UL_AE, UL_E_ACUTE, UL_E_GRAVE, UL_E_CIRCUM, UL_L_QOT,
        UL_R_QUOT, UL_U_GRAVE, UL_I_CIRCUM, UL_OE, UL_O_CIRCUM,

        UL_A_GRAVE, UL_SS, UL_DIFF, UL_NOT, UL_DASH,
        UL_DEG, UL_U_CIRCUM, UL_PILCROW, UL_SECTION, UL_B_TIC,

        UL_A_CIRCUM, UL_CURENCY, UL_C_CED, UL_POUND, UL_YEN,
        UL_N_TILD, UL_MICRO, UL_DOT, UL_ELLIPS, UL_DIVIDE,

                                   KC_TRNS, UL_APOS_FR,
                                   UL_EURO, KC_TRNS
    ),
    // >>>

    /* |                  Numeric and some mods                          <<<
     * =====================================================================
     *  ┏━━━━━┯━━━━━┯━━━━━┯━━━━━┯━━━━━┓ ┏━━━━━┯━━━━━┯━━━━━┯━━━━━┯━━━━━┓
     *  ┃UNDO │ CUT │COPY │PASTE│ ESC ┃ ┃ DEL │ HOME│ END │ INS │REDO ┃
     *  ┃     │     │     │     │     ┃ ┃     │     │     │     │     ┃
     *  ┠─────┼─────┼─────┼─────┼─────┨ ┠─────┼─────┼─────┼─────┼─────┨
     *  ┃ 1   │ 2   │ 3   │ 4   │ 5   ┃ ┃ 6   │ 7   │ 8   │ 9   │ 0   ┃
     *  ┃     │     │     │     │     ┃ ┃     │     │     │     │     ┃
     *  ┠─────┼─────┼─────┼─────┼─────┨ ┠─────┼─────┼─────┼─────┼─────┨
     *  ┃ !   │ @   │ #   │ $   │ %   ┃ ┃ ^   │ &   │ *   │ (   │ )   ┃
     *  ┃     │     │     │     │     ┃ ┃     │     │     │     │     ┃
     *  ┗━━━━━┷━━━━━┷━━━━━╅─────┼─────┨ ┠─────┼─────╆━━━━━┷━━━━━┷━━━━━┛
     *                    ┃ ⇧   │     ┃ ┃ ❖   │ ⎇   ┃
     *                    ┃     │     ┃ ┃     │     ┃
     *                    ┗━━━━━┷━━━━━┛ ┗━━━━━┷━━━━━┛
     */
	[_NUM_L] = LAYOUT_split_3x5_2(
        KC_UNDO, KC_CUT,  KC_COPY, KC_PSTE, KC_ESC,
        KC_DEL,  KC_HOME, KC_END,  KC_INS,  KC_AGIN,

        KC_P1,   KC_P2,   KC_P3,   KC_P4,   KC_P5,
        KC_P6,   KC_P7,   KC_P8,   KC_P9,   KC_P0,

        KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,
        KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,

                                   KC_LSFT, KC_TRNS,
                                   KC_LGUI, KC_LALT
    ),
    // >>>

    /* |                  Alt-Gr Lafayette                               <<<
     * =====================================================================
     *  ┏━━━━━┯━━━━━┯━━━━━┯━━━━━┯━━━━━┓ ┏━━━━━┯━━━━━┯━━━━━┯━━━━━┯━━━━━┓
     *  ┃ 4️⃣   │ [   │ ]   │ $   │ %   ┃ ┃ ^   │ &   │ *   │ '   │ 0️⃣   ┃
     *  ┃     │     │     │     │     ┃ ┃     │     │     │     │     ┃
     *  ┠─────┼─────┼─────┼─────┼─────┨ ┠─────┼─────┼─────┼─────┼─────┨
     *  ┃ {   │ (   │ )   │ }   │ =   ┃ ┃ +   │ -   │ <   │ >   │ "   ┃
     *  ┃     │     │     │     │     ┃ ┃     │     │     │     │     ┃
     *  ┠─────┼─────┼─────┼─────┼─────┨ ┠─────┼─────┼─────┼─────┼─────┨
     *  ┃ ~   │ `   │ |   │ _   │ /   ┃ ┃ \   │ @   │ #   │ !   │ ?   ┃
     *  ┃     │     │     │     │     ┃ ┃     │     │     │     │     ┃
     *  ┗━━━━━┷━━━━━┷━━━━━╅─────┼─────┨ ┠─────┼─────╆━━━━━┷━━━━━┷━━━━━┛
     *                    ┃LOCK │TERM ┃ ┃     │SIGQT┃
     *                    ┃     │     ┃ ┃     │     ┃
     *                    ┗━━━━━┷━━━━━┛ ┗━━━━━┷━━━━━┛
     */
    [_ALT_L] = LAYOUT_split_3x5_2(
     TO(_ERG_L), KC_LBRC, KC_RBRC, KC_DLR,  KC_PERC,
        KC_CIRC, KC_AMPR, KC_ASTR, KC_QUOT, TO(_QWT_L),

        KC_LCBR, KC_LPRN, KC_RPRN, KC_RCBR, KC_EQL,
        KC_PPLS, KC_PMNS, KC_LT,   KC_GT,   KC_DQUO,

        KC_TILD, KC_GRV,  KC_PIPE, KC_UNDS, KC_SLSH,
        KC_BSLS, KC_AT,   KC_HASH, KC_EXLM, KC_QUES,

                                   KC_F10,  KC_F9,
                                   KC_TRNS, KC_F8
    ),
    // >>>

    /* |                  ERGO-L                                         <<<
     * =====================================================================
     *  ┏━━━━━┯━━━━━┯━━━━━┯━━━━━┯━━━━━┓ ┏━━━━━┯━━━━━┯━━━━━┯━━━━━┯━━━━━┓
     *  ┃ Q   │ G   │ O   │ W   │ K   ┃ ┃ B   │ M   │ ¨   │ L   │ F   ┃
     *  ┃ q   │ g   │ o   │ w   │ k   ┃ ┃ b   │ m   │ ★   │ l   │ f   ┃
     *  ┠─────┼─────┼─────┼─────┼─────┨ ┠─────┼─────┼─────┼─────┼─────┨
     *  ┃ A   │ S   │ E   │ T   │ D   ┃ ┃ H   │ N   │ I   │ R   │ U   ┃
     *  ┃ a   │ s   │ e   │ t   │ d   ┃ ┃ h   │ n   │ i   │ r   │ u   ┃
     *  ┠─────┼─────┼─────┼─────┼─────┨ ┠─────┼─────┼─────┼─────┼─────┨
     *  ┃ Z   │ X   │ ?   │ C   │ V   ┃ ┃ J   │ P   │ ;   │ :   │ Y   ┃
     *  ┃ z   │ x   │ -   │ c   │ v   ┃ ┃ j   │ p   │ ,   │ .   │ y   ┃
     *  ┗━━━━━┷━━━━━┷━━━━━╅─────┼─────┨ ┠─────┼─────╆━━━━━┷━━━━━┷━━━━━┛
     *                    ┃     │ 2️⃣   ┃ ┃ 3️⃣   │     ┃
     *                    ┃ ⇧   │ ␣   ┃ ┃ ⌫   │ ↵   ┃
     *                    ┗━━━━━┷━━━━━┛ ┗━━━━━┷━━━━━┛
     */
	[_ERG_L] = LAYOUT_split_3x5_2(
        KC_Q,    KC_G,    KC_O,    KC_W,    KC_K,
        KC_B,    KC_M,    OSL(_EAC_L),   KC_L,    KC_F,

        KC_A,    KC_S,    KC_E,    KC_T,    KC_D,
        KC_H,    KC_N,    KC_I,    KC_R,    KC_U,

        KC_Z,    KC_X,    FR_MINS, KC_C,    KC_V,
        KC_J,    KC_P,    KC_COMM, KC_DOT,  KC_Y,

                           KC_LSFT, LT(2,KC_SPC),
                           LT(3,KC_BSPC), KC_ENT
    ),
    // >>>

    /* |                  ERGO-L Accents                                 <<<
     * =====================================================================
     *  ┏━━━━━┯━━━━━┯━━━━━┯━━━━━┯━━━━━┓ ┏━━━━━┯━━━━━┯━━━━━┯━━━━━┯━━━━━┓
     *  ┃ Æ   │ ¡   │ Œ   │ Ô   │ “   ┃ ┃ ”   │ º   │ `   │ ¢   │ ¥   ┃
     *  ┃ æ   │ ¬   │ œ   │ ô   │ «   ┃ ┃ »   │ µ   │     │ £   │     ┃
     *  ┠─────┼─────┼─────┼─────┼─────┨ ┠─────┼─────┼─────┼─────┼─────┨
     *  ┃ À   │ É   │ È   │ Ê   │ ±   ┃ ┃ ¤   │ Ñ   │ Î   │ Û   │ Ù   ┃
     *  ┃ à   │ é   │ è   │ ê   │ ≠   ┃ ┃     │ ñ   │ î   │ û   │ ù   ┃
     *  ┠─────┼─────┼─────┼─────┼─────┨ ┠─────┼─────┼─────┼─────┼─────┨
     *  ┃ Â   │ ẞ   │ –   │ Ç   │ §   ┃ ┃ ¶   │ °   │ •   │ …   │ ¿   ┃
     *  ┃ â   │ ß   │ —   │ ç   │     ┃ ┃     │     │ ·   │     │ ÷   ┃
     *  ┗━━━━━┷━━━━━┷━━━━━╅─────┼─────┨ ┠─────┼─────╆━━━━━┷━━━━━┷━━━━━┛
     *                    ┃     │ ’   ┃ ┃ ‰   │     ┃
     *                    ┃     │     ┃ ┃ €   │     ┃
     *                    ┗━━━━━┷━━━━━┛ ┗━━━━━┷━━━━━┛
     */
	[_EAC_L] = LAYOUT_split_3x5_2(
        UL_AE, UL_NOT, UL_OE, UL_O_CIRCUM, UL_L_QOT,
        UL_R_QUOT, UL_MICRO, UL_B_TIC, UL_POUND, UL_YEN,

        UL_A_GRAVE, UL_E_ACUTE, UL_E_GRAVE, UL_E_CIRCUM, UL_DIFF,
        UL_CURENCY, UL_N_TILD, UL_I_CIRCUM, UL_U_CIRCUM, UL_U_GRAVE,

        UL_A_CIRCUM, UL_SS, UL_DASH, UL_C_CED, UL_SECTION,
        UL_PILCROW, UL_DEG, UL_DOT, UL_ELLIPS, UL_DIVIDE,

                                   KC_TRNS, UL_APOS_FR,
                                   UL_EURO, KC_TRNS
    )
    // >>>

};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
// vim: set fdm=marker fmr=<<<,>>> fdl=0 ft=c:
