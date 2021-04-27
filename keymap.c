#include QMK_KEYBOARD_H

enum layer_number {
  QWERTY = 0,
  LOWER,
  RAISE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* QWERTY
  * ,-----------------------------------------.                           ,-----------------------------------------.
  * | ESC  |   1  |   2  |   3  |   4  |   5  |                           |   6  |   7  |   8  |   9  |   0  |   `  |
  * |------+------+------+------+------+------|                           |------+------+------+------+------+------|
  * | Tab  |   Q  |   W  |   E  |   R  |   T  |                           |   Y  |   U  |   I  |   O  |   P  |  '   |
  * |------+------+------+------+------+------|                           |------+------+------+------+------+------|
  * |LShift|   A  |   S  |   D  |   F  |   G  |-------.           ,-------|   -  |   H  |   J  |   K  |   L  |   ;  |
  * |------+------+------+------+------+------|   [   |           |    ]  |------+------+------+------+------+------|
  * |LCTRL |   Z  |   X  |   C  |   V  |   B  |-------|           |-------|   /  |   N  |   M  |   ,  |   .  |   \  |
  * `-----------------------------------------/       /           \       \-----------------------------------------'
  *                   | LAlt | LGUI |LOWER | /Space  /             \Enter  \  |RAISE |BackSP| CAPS |
  *                   |      |      |      |/       /               \       \ |      |      |      |
  *                   `----------------------------'                 '-------''--------------------'
  */
  [QWERTY] = LAYOUT( \
    KC_ESC,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                        KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_GRV,    \
    KC_TAB,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                        KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_QUOT,   \
    KC_LSFT,  KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                        KC_MINS, KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,   \
    KC_LCTL,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B,  KC_LBRC,     KC_RBRC, KC_SLSH, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_BSLS, \
                              KC_LALT,KC_LGUI,MO(LOWER),KC_SPC,      KC_ENT, TT(RAISE),KC_BSPC, KC_CAPS \
  ),

  /* LOWER
  * ,-----------------------------------------.                           ,-----------------------------------------.
  * |      |      |      |      |      |      |                           |      |      |      |      |      |      |
  * |------+------+------+------+------+------|                           |------+------+------+------+------+------|
  * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |                           |  F7  |  F8  |  F9  | F10  | F11  | F12  |
  * |------+------+------+------+------+------|                           |------+------+------+------+------+------|
  * |LShift|   $  |   ~  |   !  |   ?  |   "  |-------.           ,-------|   _  |   &  |   |  |   ^  |   @  |      |
  * |------+------+------+------+------+------|    [  |           |    ]  |------+------+------+------+------+------|
  * |LCTRL |      |   <  |   {  |   (  |   #  |-------|           |-------|   :  |   )  |   }  |   >  |      |      |
  * `-----------------------------------------/       /           \       \-----------------------------------------'
  *                   |      |      |LOWER | /Space  /             \Enter  \  |RAISE |BackSP|      |
  *                   |      |      |      |/       /               \       \ |      |      |      |
  *                   `----------------------------'                 '-------''--------------------'
  */
  [LOWER] = LAYOUT( \
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,   \
    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                       KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,    \
    _______, KC_DLR,  KC_TILD, KC_EXLM, KC_QUES, KC_DQUO,                     KC_UNDS, KC_AMPR, KC_PIPE, KC_CIRC, KC_AT,   XXXXXXX,   \
    _______, XXXXXXX, KC_LT,   KC_LCBR, KC_LPRN, KC_HASH, _______,   _______, KC_COLN, KC_RPRN, KC_RCBR, KC_GT,   XXXXXXX, XXXXXXX,   \
                                        XXXXXXX, XXXXXXX, _______,   _______, _______, _______, _______, XXXXXXX\
  ),

  /* RAISE
  * ,-----------------------------------------.                           ,-----------------------------------------.
  * |      |      |      |      |      |      |                           |      |      |   ,  |      |      |      |
  * |------+------+------+------+------+------|                           |------+------+------+------+------+------|
  * |      | PGUP |   UP |PGDOWN| +BRI | +VOL |                           |   *  |   7  |   8  |   9  |   -  |      |
  * |------+------+------+------+------+------|                           |------+------+------+------+------+------|
  * |      | LEFT | DOWN |RIGHT | -BRI | -VOL |-------.           ,-------|   /  |   4  |   5  |   6  |   +  |      |
  * |------+------+------+------+------+------|   [   |           |    ]  |------+------+------+------+------+------|
  * |      |MOUSEL|MOUSEU|MOUSED|MOUSER| MUTE |-------|           |-------|   .  |   1  |   2  |   3  |   =  |      |
  * `-----------------------------------------/       /           \       \-----------------------------------------'
  *                   |      |      |QWERTY| /MOUSE 1/             \MOUSE 2\  |RAISE |   0  |Enter |
  *                   |      |      |      |/       /               \       \ |      |      |      |
  *                   `----------------------------'                 '-------''--------------------'
  */
  [RAISE] = LAYOUT( \
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
    XXXXXXX, KC_PGUP, KC_UP,   KC_PGDN, BL_INC,  KC_VOLU,                     KC_PAST, KC_P7,   KC_P8,   KC_P9,   KC_PMNS, XXXXXXX, \
    XXXXXXX, KC_LEFT, KC_DOWN, KC_RGHT, BL_DEC,  KC_VOLD,                     KC_PSLS, KC_P4,   KC_P5,   KC_P6,   KC_PPLS, XXXXXXX, \
    XXXXXXX, KC_MS_L, KC_MS_U, KC_MS_D, KC_MS_R, KC_MUTE, XXXXXXX,  XXXXXXX,  KC_PDOT, KC_P1,   KC_P2,   KC_P3,   KC_PEQL, XXXXXXX, \
                               XXXXXXX, XXXXXXX, XXXXXXX, KC_BTN1,  KC_BTN2,TO(QWERTY),KC_P0,   KC_PENT \
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
