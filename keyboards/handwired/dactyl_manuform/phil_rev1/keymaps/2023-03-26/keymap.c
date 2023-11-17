#include QMK_KEYBOARD_H


/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_5x7(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_LBRC, TT(3), KC_A, KC_S, KC_D, KC_F, KC_G, KC_LT, SC_LSPO, KC_Z, KC_X, KC_C, KC_V, KC_B, LCTL_T(KC_CAPS), KC_LGUI, KC_LEFT, KC_RGHT, KC_BSPC, KC_DEL, KC_LCTL, KC_LALT, KC_HOME, KC_END, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_GRV, KC_RBRC, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSLS, KC_GT, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, SC_RSPC, KC_UP, KC_DOWN, KC_LGUI, LGUI(KC_L), KC_ENT, KC_SPC, KC_PSCR, TT(2), KC_PGUP, KC_PGDN),
	[1] = LAYOUT_5x7(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_TAB, KC_Q, KC_W, KC_F, KC_P, KC_B, KC_LBRC, TT(3), KC_A, KC_R, KC_S, KC_T, KC_G, KC_LT, SC_LSPO, KC_Z, KC_X, KC_C, KC_D, KC_V, LCTL_T(KC_CAPS), KC_LGUI, KC_LEFT, KC_RGHT, KC_BSPC, KC_DEL, KC_LCTL, KC_LALT, KC_HOME, KC_END, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_GRV, KC_RBRC, KC_J, KC_L, KC_U, KC_Y, KC_SCLN, KC_BSLS, KC_GT, KC_M, KC_N, KC_E, KC_I, KC_O, KC_QUOT, KC_K, KC_H, KC_COMM, KC_DOT, KC_SLSH, SC_RSPC, KC_UP, KC_DOWN, KC_LGUI, LGUI(KC_L), KC_ENT, KC_SPC, KC_PSCR, TT(2), KC_PGUP, KC_PGDN),
	[2] = LAYOUT_5x7(KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_TRNS, KC_TRNS, KC_TRNS, KC_UP, KC_TRNS, KC_TRNS, TO(4), KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS, DF(0), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MSTP, KC_MPLY, KC_MPRV, KC_MNXT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_TRNS, KC_TRNS, KC_BRIU, KC_TRNS, KC_UP, KC_TRNS, KC_TRNS, KC_TRNS, DF(1), KC_BRID, KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_VOLU, KC_VOLD, KC_MUTE, QK_BOOT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[3] = LAYOUT_5x7(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_CALC, KC_NUM, KC_PSLS, KC_PAST, KC_EQL, KC_TRNS, KC_TRNS, KC_LPRN, KC_P7, KC_P8, KC_P9, KC_PMNS, KC_TRNS, KC_TRNS, KC_COLN, KC_P4, KC_P5, KC_P6, KC_PPLS, KC_TRNS, KC_RPRN, KC_P1, KC_P2, KC_P3, KC_ENT, KC_TRNS, KC_P0, KC_PDOT, KC_ENT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[4] = LAYOUT_5x7(KC_TRNS, KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_TRNS, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_TRNS, KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_TRNS, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_LCTL, KC_LCTL, KC_I, KC_M, KC_SPC, KC_ESC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, TO(0), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)



