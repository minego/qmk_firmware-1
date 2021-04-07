#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

enum layers {
    BASE,
    FN_1
};

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
};

/*
    The bottom right corner of this 60% board behaves like arrow keys when
    tapped and like modifiers when held.
*/
#define CTRLESC LCTL_T(KC_ESC)
#define TP_LEFT RALT_T(KC_LEFT)
#define TP_UP   RSFT_T(KC_UP)
#define TP_RGHT RCTL_T(KC_RGHT)
#define TP_DOWN LT(FN_1, KC_DOWN)

#if 0
# define SH_SPC  SH_T(KC_SPC)
#else
# define SH_SPC KC_SPC
#endif

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [BASE] = LAYOUT(
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_DEL,  KC_BSPC, \
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, \
    CTRLESC, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,  \
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, TP_UP,   TP_UP,   \
    KC_LCTL, KC_LALT, KC_LGUI, TT(FN_1),SH_SPC,           SH_SPC,  SH_SPC,  KC_RGUI, TP_LEFT, TP_LEFT, TP_DOWN, TP_RGHT
  ),

  [FN_1] = LAYOUT(
    KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,  KC_BSPC, \
    _______, _______, _______, _______, _______, _______, _______, KC_PGUP, _______, _______, _______, _______, _______, _______, \
    _______, _______, _______, KC_PGDN, _______, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______, TO(FN_1),\
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_UP,   _______, \
    _______, _______, _______, _______, _______,          _______, _______, _______, KC_LEFT, KC_LEFT, KC_DOWN, KC_RGHT
  )

};

void keyboard_post_init_user(void)
{
}

