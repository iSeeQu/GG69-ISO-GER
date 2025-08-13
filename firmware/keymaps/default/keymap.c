#include QMK_KEYBOARD_H

// Die Keymap-Datei definiert die Tastenbelegung für die Tastatur.

// Wir definieren hier die Basis-Ebene (Layer 0), die einem Standard-ISO-DE-Layout entspricht.
// QMK unterstützt mehrere Ebenen (Layers) für spezielle Funktionen wie FN-Tasten oder Makros.

// Layer 0: Standard-ISO-DE-Layout
const uint16_t keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT(
    KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_GRV,  KC_BSPC,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Z,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_DEL,
    KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,  KC_PSCR, KC_SCOL,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP,   KC_PGUP, KC_PGDN,
    KC_LCTL, KC_LGUI, KC_LALT, KC_SPC,  KC_APP,  KC_LEFT, KC_DOWN, KC_RGHT, KC_END,  KC_HOME, KC_VOLU, KC_VOLD, KC_MUTE, KC_MPLY, KC_MSTP
  )
};

