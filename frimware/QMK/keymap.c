#include QMK_KEYBOARD_H

enum layers { _BASE };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_2x4(
    KC_1,    KC_2,    KC_3,    KC_NO,
    KC_4,    KC_ENT,  KC_NO,   KC_5
  )
};
