#include QMK_KEYBOARD_H

// Layer-Definitionen
enum custom_layers {
    _BASE, // Basislayer
    _FN    // Funktionlayer
};

// ISO-Deutsch Keymap
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT_gg69_iso_ger(
        KC_ESC ,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_MINS,  KC_EQL,  KC_GRV, KC_BSPC,
        KC_TAB ,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Z,    KC_U,    KC_I,    KC_O,    KC_P, KC_LBRC, KC_RBRC, KC_BSLS,  KC_ENT,
        KC_CAPS,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,   KC_NO,   KC_NO,
        KC_LSFT,    KC_Y,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M, KC_LABK, KC_RABK, KC_SLSH,          KC_LSFT,   KC_UP,  KC_DEL,
        KC_LCTL, KC_LALT,                             KC_SPC, KC_RALT,   KC_NO,   KC_NO, KC_RGUI, MO(_FN),          KC_LEFT, KC_DOWN, KC_RGHT
),
    [_FN] = LAYOUT_gg69_iso_ger(
          RESET, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, KC_MUTE, _______,
        _______, _______,                            _______, _______, _______, _______, _______, _______,          KC_MPRV, KC_MPLY, KC_MNXT
    )
};