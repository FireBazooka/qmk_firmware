#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _BASE 0
#define _MAC 1
#define _FUNC 2
#define _MOUSE 3

#define XXXXXXX KC_NO
#define _______ KC_TRNS
#define MAC_TOG TG(_MAC)

enum {
  FUN_LAY = SAFE_RANGE,
  MOU_TOG,
  WIN_LCK,
  WIN_KEY,
  DBL_ZER,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Keymap _BASE: (Base Layer) Default Layer
____________________________________________________________________________________________________________________________________________________________________________
|        |        |        |        |        |        |        |        |        |        |        |        |        | PRINT  |        |        |        |        |  PAGE  |
| ESC    |   F1   |   F2   |   F3   |   F4   |   F5   |   F6   |   F7   |   F8   |   F9   |  F10   |  F11   |  F12   | SCREEN | INSERT | DELETE |  HOME  |  END   |   UP   |
|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|
|        |        |        |        |        |        |        |        |        |        |        |        |        |                 |  NUM   |        |        |  PAGE  |
|  ~`    |   1    |   2    |   3    |   4    |   5    |   6    |   7    |   8    |   9    |   0    |  _ -   | =  +   |    BACKSPACE    |  LOCK  |   /    |  *     |  DOWN  |
|________|________|________|________|________|________|________|________|________|________|________|________|________|_________________|________|________|________|________|
|            |        |        |        |        |        |        |        |        |        |        |  [     |   ]    |             |        |        |        |        |
|    TAB     |   Q    |   W    |   E    |   R    |   T    |   Y    |   U    |   I    |   O    |   P    |  {     |   }    |  |   \      |   7    |   8    |   9    |   -    |
|____________|________|________|________|________|________|________|________|________|________|________|________|________|_____________|________|________|________|________|
|              |        |        |        |        |        |        |        |        |        |   ;    |   '    |                    |        |        |        |        |
|   CAPS LOCK  |   A    |   S    |   D    |   F    |   G    |   H    |   J    |   K    |   L    |   :    |   "    |       ENTER        |   4    |   5    |   6    |   +    |
|______________|________|________|________|________|________|________|________|________|________|________|________|____________________|________|________|________|________|
|                  |        |        |        |        |        |        |        |   ,    |    .   |   /    |                |        |        |        |        |        |
|       SHIFT      |   Z    |   X    |   C    |   V    |   B    |   N    |   M    |   <    |    >   |   ?    |       SHIFT    |   UP   |   1    |   2    |   3    |        |
|__________________|________|________|________|________|________|________|________|________|________|________|________________|________|________|________|________| ENTER  |
|          |          |          |                                                        |            |             |        |        |        |        |        |        |
|  L CTRL  |  L GUI   |  L ALT   |                      SPACE                             |   R CTRL   |  FUNCTION   |  LEFT  |  DOWN  | RIGHT  |   0    |   .    |        |
|__________|__________|__________|________________________________________________________|____________|_____________|________|________|________|________|________|________|
*/

[_BASE] = LAYOUT(
    KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_PSCR, KC_INS,  KC_DEL,  KC_HOME, KC_END,  KC_PGUP,
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  XXXXXXX, KC_BSPC, KC_NLCK, KC_PSLS, KC_PAST, KC_PGDN,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,          KC_P7,   KC_P8,   KC_P9,   KC_PMNS,
    KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,                    KC_P4,   KC_P5,   KC_P6,   KC_PPLS,
    KC_LSFT, XXXXXXX, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,          KC_UP,   KC_P1,   KC_P2,   KC_P3,   XXXXXXX,
    KC_LCTL, WIN_KEY, KC_LALT,                            KC_SPC,                             KC_RCTL, XXXXXXX, FUN_LAY, KC_LEFT, KC_DOWN, KC_RGHT, KC_P0,   KC_PDOT, KC_PENT),

/* Keymap _MAC: Mac Layer 
____________________________________________________________________________________________________________________________________________________________________________
|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|
|        |        |        |        |        |        |        |        |        |        |        |        |        |                 |        |        |        |        |
|        |        |        |        |        |        |        |        |        |        |        |        |        |                 |        |        |        |        |
|________|________|________|________|________|________|________|________|________|________|________|________|________|_________________|________|________|________|________|
|            |        |        |        |        |        |        |        |        |        |        |        |        |             |        |        |        |        |
|            |        |        |        |        |        |        |        |        |        |        |        |        |             |        |        |        |        |
|____________|________|________|________|________|________|________|________|________|________|________|________|________|_____________|________|________|________|________|
|              |        |        |        |        |        |        |        |        |        |        |        |                    |        |        |        |        |
|              |        |        |        |        |        |        |        |        |        |        |        |                    |        |        |        |        |
|______________|________|________|________|________|________|________|________|________|________|________|________|____________________|________|________|________|________|
|                  |        |        |        |        |        |        |        |        |        |        |                |        |        |        |        |        |
|                  |        |        |        |        |        |        |        |        |        |        |                |        |        |        |        |        |
|__________________|________|________|________|________|________|________|________|________|________|________|________________|________|________|________|________|        |
|          |          |          |                                                        |            |             |        |        |        |        |        |        |
|  L GUI   |  L ALT   |  L CTRL  |                                                        |   R GUI    |             |        |        |        |        |        |        |
|__________|__________|__________|________________________________________________________|____________|_____________|________|________|________|________|________|________|
*/

[_MAC] = LAYOUT(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______,
    KC_LGUI, KC_LALT, KC_LCTL,                            _______,                            KC_RGUI, _______, _______, _______, _______, _______, _______, _______, _______),

/* Keymap _FUNC: Function Layer
____________________________________________________________________________________________________________________________________________________________________________
|        |  RGB   |  RGB   |  RGB   |  RGB   |  RGB   |  RGB   |  RGB   |  RGB   |  RGB   |  RGB   |  RGB   |  RGB   |  MAC   | MOUSE  | SCROLL |  RGB   |  RGB   |  WWW   |
| RESET  | TOGGLE |MODE DEC|MODE INC| PLAIN  | BREATHE| RAINBOW| SWIRL  | SNAKE  |KNGHTRDR|CHRSTMAS|GRADIENT|  TEST  | TOGGLE | TOGGLE |  LOCK  |SAT DECR|SAT INCR|HOMEPAGE|
|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|
|        |        |        |        |        |        |        |        |        |        |        |        |        |                 | SCROLL |  RGB   |  RGB   |  RGB   |
|        |   F1   |   F2   |   F3   |   F4   |   F5   |   F6   |   F7   |   F8   |   F9   |  F10   |  F11   |  F12   |     DELETE      |  LOCK  |HUE DECR|HUE INCR| TOGGLE |
|________|________|________|________|________|________|________|________|________|________|________|________|________|_________________|________|________|________|________|
|            |        |        |        |        |  RGB   |  RGB   |        |  MAC   |        | PRINT  | SCROLL | PAUSE  |             | VOLUME |        | VOLUME |  RGB   |
|            |        |        |        |        |SAT DECR|SAT INCR|        | TOGGLE |        | SCREEN |  LOCK  | BREAK  | CALCULATOR  |  DOWN  |  MUTE  |   UP   |BRHT DEC|
|____________|________|________|________|________|________|________|________|________|________|________|________|________|_____________|________|________|________|________|
|              |        |        |        |        |  RGB   |  RGB   |        |        | PLAY/  |PREVIOUS|  NEXT  |                    |        |  PLAY/ |  FAST  |  RGB   |
|              |        |        |        |        |HUE DECR|HUE INCR|        |  STOP  | PAUSE  | TRACK  |  TRACK |                    | REWIND |  PAUSE |FORWARD |BRHT INC|
|______________|________|________|________|________|________|________|________|________|________|________|________|____________________|________|________|________|________|
|                  |BCKLIGHT|BCKLIGHT|BCKLIGHT|  RGB   |  RGB   |  RGB   | MOUSE  |        | VOLUME | VOLUME |                |  PAGE  |PREVIOUS|        |  NEXT  |        |
|                  | TOGGLE |DECREASE|INCREASE| TOGGLE |BRHT DEC|BRHT INC| TOGGLE |  MUTE  |  DOWN  |   UP   |                |   UP   | TRACK  |  STOP  |  TRACK |        |
|__________________|________|________|________|________|________|________|________|________|________|________|________________|________|________|________|________|  CALC  |
|          |WINDOW KEY|          |                                                        |            |             |        |  PAGE  |        |        |        |        |
|          |   LOCK   |          |                                                        |    MENU    |             |  HOME  |  DOWN  |  END   |   00   |        |        |
|__________|__________|__________|________________________________________________________|____________|_____________|________|________|________|________|________|________|
*/

[_FUNC] = LAYOUT(
    _______, RGB_TOG,RGB_RMOD, RGB_MOD, RGB_M_P, RGB_M_B, RGB_M_R,RGB_M_SW,RGB_M_SN, RGB_M_K, RGB_M_X, RGB_M_G, RGB_M_T, MAC_TOG, MOU_TOG, KC_SLCK, RGB_SAD, RGB_SAI, KC_WHOM,
    _______,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12, XXXXXXX,  KC_DEL, KC_SLCK, RGB_HUD, RGB_HUI, RGB_TOG,
    _______, _______, _______, _______, _______, RGB_SAD, RGB_SAI, _______, MAC_TOG, _______, KC_PSCR, KC_SLCK, KC_PAUS, KC_CALC,          KC_VOLD, KC_MUTE, KC_VOLU, RGB_VAD,
    _______, _______, _______, _______, _______, RGB_HUD, RGB_HUI, _______, KC_MSTP, KC_MPLY, KC_MPRV, KC_MNXT, _______,                   KC_MRWD, KC_MPLY, KC_MFFD, RGB_VAI,
    _______, XXXXXXX, BL_TOGG,  BL_DEC,  BL_INC, RGB_TOG, RGB_VAD, RGB_VAI, MOU_TOG, KC_MUTE, KC_VOLD, KC_VOLU, _______,          KC_PGUP, KC_MPRV, KC_MSTP, KC_MNXT, XXXXXXX,
    _______, WIN_LCK, _______,                            _______,                            KC_APP,  XXXXXXX, _______, KC_HOME, KC_PGDN,  KC_END, DBL_ZER, _______, KC_CALC),

/* Keymap _MOUSE: Mouse Navigation Layer
____________________________________________________________________________________________________________________________________________________________________________
|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|
|        |        |        |        |        |        |        |        |        |        |        |        |        |                 |        |        |        |        |
|        |        |        |        |        |        |        |        |        |        |        |        |        |                 |        |        |        |        |
|________|________|________|________|________|________|________|________|________|________|________|________|________|_________________|________|________|________|________|
|            |        |        |        |        |        |        |        |        |        |        |        |        |             |        |        |        |        |
|            |        |        |        |        |        |        |        |        |        |        |        |        |             |        |        |        |        |
|____________|________|________|________|________|________|________|________|________|________|________|________|________|_____________|________|________|________|________|
|              |        |        |        |        |        |        |        |        |        |        |        |        MOUSE       |        |        |        |        |
|              |        |        |        |        |        |        |        |        |        |        |        |     RIGHT CLICK    |        |        |        |        |
|______________|________|________|________|________|________|________|________|________|________|________|________|____________________|________|________|________|________|
|                  |        |        |        |        |        |        |        |        |        |        |     MOUSE      | MOUSE  |        |        |        |        |
|                  |        |        |        |        |        |        |        |        |        |        |   LEFT CLICK   |  UP    |        |        |        |        |
|__________________|________|________|________|________|________|________|________|________|________|________|________________|________|________|________|________|        |
|          |          |          |                                                        |            |             | MOUSE  | MOUSE  | MOUSE  |        |        |        |
|          |          |          |                                                        |            |             | LEFT   | DOWN   | RIGHT  |        |        |        |
|__________|__________|__________|________________________________________________________|____________|_____________|________|________|________|________|________|________|
*/

[_MOUSE] = LAYOUT(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_BTN2,                   _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_BTN1,          KC_MS_U, _______, _______, _______, _______,
    _______, _______, _______,                            _______,                            _______, _______, _______, KC_MS_L, KC_MS_D, KC_MS_R, _______, _______, _______),
};

#define SET_BIT(var, pos) (var |= (1UL << pos))
#define CLEAR_BIT(var, pos) (var &= ~(1UL << pos))
#define TOGGLE_BIT(var, pos) (var ^= (1UL << pos))
#define CHECK_BIT(var, pos) (var & (1U << pos)) 

static uint8_t keyboard_state = 0;
// bit 0 = function layer status (on/off)
// bit 1 = mouse navigation layer state
// bit 2 = windows key lock state

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch(keycode) {
    // acts like a momentary function layer press with both _FUNC and _MOUSE
    case FUN_LAY:
      if (record->event.pressed) { 
        layer_on(_FUNC);
	// checks if mouse layer is active
        if (CHECK_BIT(keyboard_state, 1)) {
          layer_on(_MOUSE);
        } 
        else {
          layer_off(_MOUSE);
        }
        // turns on function layer status
        SET_BIT(keyboard_state, 0);
      }
      // key released
      else {
        layer_off(_FUNC);
        layer_off(_MOUSE);
        // turns off function layer status
        CLEAR_BIT(keyboard_state, 0);
      }
      break;

    case MOU_TOG:
      if(record->event.pressed) {
        // toggles navigation layer state
        TOGGLE_BIT(keyboard_state, 1);

        // if FN is pressed down while hitting this key, the correct layer will be updated mid-press,
        // so that the FN key doesn't need to be pressed down again to start using the functionality
        if (CHECK_BIT(keyboard_state, 0)) {
          if (CHECK_BIT(keyboard_state, 1)) {
            layer_on(_MOUSE);
          }
          else {
            layer_off(_MOUSE);
          } 
        }
      }
      break;

    case WIN_LCK:
      if (record->event.pressed) {
        // toggles windows key lock state
        TOGGLE_BIT(keyboard_state, 2);
      }
      break;

    // uses seperate WIN_KEY so that WIN_LCK does not affect Mac Layer's KC_LGUI
    case WIN_KEY:
      // checks if windows key lock is off to allow key to be pressed
      if (!CHECK_BIT(keyboard_state, 2)) {
        if (record->event.pressed) {
          SEND_STRING(SS_DOWN(X_LGUI));
          return false;
        }
        // key released
        else { 
          SEND_STRING(SS_UP(X_LGUI));
          return false;
        }
      }
      break;

    case DBL_ZER:
      if (record->event.pressed) {
        SEND_STRING("00");
        return false;
      }
      break;
  }
  return true;
}
