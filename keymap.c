#include QMK_KEYBOARD_H

enum layer_number {
  QWERTY = 0,
  LOWER,
  RAISE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* QWERTY
  * ,-----------------------------------------.                              ,-----------------------------------------.
  * | ESC  |   1  |   2  |   3  |   4  |   5  |                              |   6  |   7  |   8  |   9  |   0  |   `  |
  * |------+------+------+------+------+------|                              |------+------+------+------+------+------|
  * | Tab  |   Q  |   W  |   E  |   R  |   T  |                              |   Y  |   U  |   I  |   O  |   P  |   '  |
  * |------+------+------+------+------+------|                              |------+------+------+------+------+------|
  * |LShift|   A  |   S  |   D  |   F  |   G  |-------.              ,-------|   -  |   H  |   J  |   K  |   L  |   ;  |
  * |------+------+------+------+------+------|   [   |              |   ]   |------+------+------+------+------+------|
  * |LCTRL |   Z  |   X  |   C  |   V  |   B  |-------|              |-------|   /  |   N  |   M  |   ,  |   .  |   \  |
  * `-----------------------------------------/       /              \       \-----------------------------------------'
  *                   | LAlt |BackSP|LOWER | / Space /                \ Enter \  |RAISE |  MOD | CAPS |
  *                   |      |      |      |/       /                  \       \ |      |      |      |
  *                   `----------------------------'                    '-------''--------------------'
  */
  [QWERTY] = LAYOUT( \
    KC_ESC,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                          KC_6,      KC_7,    KC_8,    KC_9,    KC_0,    KC_GRV,    \
    KC_TAB,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                          KC_Y,      KC_U,    KC_I,    KC_O,    KC_P,    KC_QUOT,   \
    KC_LSFT,  KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                          KC_MINS,   KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,   \
    KC_LCTL,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B,      KC_LBRC,   KC_RBRC, KC_SLSH,   KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_BSLS,   \
                               KC_LALT, KC_BSPC, MO(LOWER), KC_SPC,    KC_ENT,  TT(RAISE), KC_LGUI, KC_CAPS                               \
  ),

  /* LOWER
  * ,-----------------------------------------.                              ,-----------------------------------------.
  * |      |      |      |      |      |      |                              |      |      |      |      |      |      |
  * |------+------+------+------+------+------|                              |------+------+------+------+------+------|
  * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |                              |  F7  |  F8  |  F9  | F10  | F11  | F12  |
  * |------+------+------+------+------+------|                              |------+------+------+------+------+------|
  * |LShift|   :  |   ~  |   (  |   )  |   <  |-------.              ,-------|   $  |   &  |   |  |   !  |   #  |   @  |
  * |------+------+------+------+------+------|    [  |              |    ]  |------+------+------+------+------+------|
  * |LCTRL |   "  |   ^  |   {  |   }  |   >  |-------|              |-------|   -  |   +  |   =  |   /  |   *  |   _  |
  * `-----------------------------------------/       /              \       \-----------------------------------------'
  *                   |      |BackSP|LOWER | / Space /                \ Enter \  |RAISE |      |      |
  *                   |      |      |      |/       /                  \       \ |      |      |      |
  *                   `----------------------------'                    '-------''--------------------'
  */
  [LOWER] = LAYOUT( \
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     \
    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                         KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,      \
    _______, KC_COLN, KC_TILD, KC_LPRN, KC_RPRN, KC_LT,                         KC_DLR,  KC_AMPR, KC_PIPE, KC_EXLM, KC_HASH, KC_AT,       \
    _______, KC_DQUO, KC_CIRC, KC_LCBR, KC_RCBR, KC_GT,   _______,     _______, KC_MINS, KC_PLUS, KC_EQL,  KC_SLSH, KC_ASTR, KC_UNDS,     \
                               XXXXXXX, _______, _______, _______,     _______, _______, XXXXXXX, XXXXXXX                                 \
  ),

  /* RAISE
  * ,-----------------------------------------.                              ,-----------------------------------------.
  * |      |      |      |      |      |      |                              |      |      |      |      |      |      |
  * |------+------+------+------+------+------|                              |------+------+------+------+------+------|
  * |      |      | M_LB |      | M_RB |      |                              |      | MUTE | -VOL | +VOL |      |      |
  * |------+------+------+------+------+------|                              |------+------+------+------+------+------|
  * |LShift|      | M_A0 | M_UP | M_A2 |      |-------.              ,-------|      | PGUP |  UP  |PGDOWN|      | +BRI |
  * |------+------+------+------+------+------|       |              |       |------+------+------+------+------+------|
  * |LCTRL |      |M_LEFT|M_DOWN|M_RIGH|      |-------|              |-------|      | LEFT | DOWN |RIGHT |      | -BRI |
  * `-----------------------------------------/       /              \       \-----------------------------------------'
  *                   | LAlt |      |LOWER | / Space /                \ Enter \  |QWERTY| MOD  |      |
  *                   |      |      |      |/       /                  \       \ |      |      |      |
  *                   `----------------------------'                    '-------''--------------------'
  */
  [RAISE] = LAYOUT( \
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                        XXXXXXX,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  \
    XXXXXXX, XXXXXXX, KC_BTN1, XXXXXXX, KC_BTN2, XXXXXXX,                        XXXXXXX,   KC_MUTE, KC_VOLD, KC_VOLU, XXXXXXX, XXXXXXX,  \
    _______, XXXXXXX, KC_ACL0, KC_MS_U, KC_ACL2, XXXXXXX,                        XXXXXXX,   KC_PGUP, KC_UP,   KC_PGDN, XXXXXXX, KC_BRIU,  \
    _______, XXXXXXX, KC_MS_L, KC_MS_D, KC_MS_R, XXXXXXX, XXXXXXX,     XXXXXXX,  XXXXXXX,   KC_LEFT, KC_DOWN, KC_RGHT, XXXXXXX, KC_BRID,  \
                               KC_LALT, XXXXXXX, _______, _______,     _______,  TO(QWERTY),KC_LGUI, XXXXXXX                              \
  )
};

//SSD1306 OLED update loop, make sure to enable OLED_DRIVER_ENABLE=yes in rules.mk
#ifdef OLED_DRIVER_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master())
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  return rotation;
}

// When you add source files to SRC in rules.mk, you can use functions.
const char *read_layer_state(void);
const char *read_logo(void);
void set_keylog(uint16_t keycode, keyrecord_t *record);
const char *read_keylog(void);
const char *read_keylogs(void);

// const char *read_mode_icon(bool swap);
// const char *read_host_led_state(void);
// void set_timelog(void);
// const char *read_timelog(void);

void oled_task_user(void) {
  if (is_keyboard_master()) {
    // If you want to change the display of OLED, you need to change here
    oled_write_ln(read_layer_state(), false);
    oled_write_ln(read_keylog(), false);
    oled_write_ln(read_keylogs(), false);
    //oled_write_ln(read_mode_icon(keymap_config.swap_lalt_lgui), false);
    //oled_write_ln(read_host_led_state(), false);
    //oled_write_ln(read_timelog(), false);
  } else {
    oled_write(read_logo(), false);
  }
}
#endif // OLED_DRIVER_ENABLE

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
#ifdef OLED_DRIVER_ENABLE
    set_keylog(keycode, record);
#endif
    // set_timelog();
  }
  return true;
}
