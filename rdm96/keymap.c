#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  ST_MACRO_0,
};



enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
  DANCE_3,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_NO,          KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           DE_SS,          
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           DE_Z,           KC_U,           KC_I,           KC_O,           KC_P,           DE_UE,          
    KC_ESCAPE,      KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                           KC_H,           KC_J,           KC_K,           KC_L,           DE_OE,          TD(DANCE_2),    
    KC_LEFT_SHIFT,  DE_Y,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         DE_MINS,        KC_RIGHT_SHIFT, 
                                                    TD(DANCE_0),    TD(DANCE_1),                                    KC_ENTER,       TD(DANCE_3)
  ),
  [1] = LAYOUT_voyager(
    TO(0),          KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,                                          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         
    KC_TRANSPARENT, DE_AT,          DE_LBRC,        DE_QUOT,        DE_RBRC,        DE_CIRC,                                        DE_DLR,         DE_LESS,        DE_EQL,         DE_MORE,        DE_TILD,        KC_F12,         
    TO(0),          DE_EXLM,        DE_LCBR,        DE_DQOT,        DE_RCBR,        DE_HASH,                                        DE_ASTR,        DE_LPRN,        DE_MINS,        DE_RPRN,        DE_QST,         TO(0),          
    KC_TRANSPARENT, DE_PERC,        DE_BSLS,        DE_GRV,         DE_SLSH,        DE_PIPE,                                        DE_AMPR,        DE_PLUS,        DE_SCLN,        DE_COLN,        DE_UNDS,        KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    TO(0),          TO(0),          TO(0),          TO(0),          TO(0),          TO(0),                                          TO(0),          TO(0),          TO(0),          TO(0),          TO(0),          TO(0),          
    TO(0),          TO(0),          LCTL(KC_RIGHT), LCTL(KC_END),   TO(0),          KC_HOME,                                        KC_END,         KC_PAGE_UP,     TO(0),          TO(0),          TO(0),          TO(0),          
    TO(0),          KC_LEFT_GUI,    LCTL(KC_HOME),  KC_PGDN,        KC_LEFT_SHIFT,  TO(0),                                          KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       TO(0),          TO(0),          
    KC_TRANSPARENT, TO(0),          TO(0),          TO(0),          TO(0),          LCTL(KC_LEFT),                                  TO(0),          TO(0),          TO(0),          TO(0),          TO(0),          KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    TO(0),          TO(0),          TO(0),          TO(0),          TO(0),          TO(0),                                          TO(0),          TO(0),          TO(0),          TO(0),          TO(0),          TO(0),          
    TO(0),          TO(0),          TO(0),          TO(0),          TO(0),          TO(0),                                          KC_KP_MINUS,    KC_7,           KC_8,           KC_9,           KC_KP_SLASH,    TO(0),          
    TO(0),          TO(0),          TO(0),          TO(0),          TO(0),          TO(0),                                          KC_KP_PLUS,     KC_4,           KC_5,           KC_6,           KC_KP_ASTERISK, TO(0),          
    TO(0),          TO(0),          TO(0),          TO(0),          TO(0),          TO(0),                                          KC_KP_COMMA,    KC_1,           KC_2,           KC_3,           KC_KP_DOT,      TO(0),          
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_KP_ENTER,    KC_0
  ),
  [4] = LAYOUT_voyager(
    TO(0),          TO(0),          TO(0),          TO(0),          TO(0),          TO(0),                                          TO(0),          TO(0),          TO(0),          TO(0),          TO(0),          TO(0),          
    TO(0),          TO(0),          TO(0),          TO(0),          TO(0),          TO(0),                                          TO(0),          KC_BRIGHTNESS_DOWN,KC_INSERT,      KC_BRIGHTNESS_UP,KC_PSCR,        TO(0),          
    TO(0),          TO(0),          TO(0),          TO(0),          TO(0),          TO(0),                                          TO(0),          KC_AUDIO_VOL_DOWN,KC_AUDIO_MUTE,  KC_AUDIO_VOL_UP,TO(0),          TO(0),          
    TO(0),          TO(0),          TO(0),          TO(0),          TO(0),          TO(0),                                          TO(0),          TO(0),          TO(0),          TO(0),          TO(0),          TO(0),          
                                                    TO(0),          TO(0),                                          TO(0),          TO(0)
  ),
};


const uint16_t PROGMEM combo0[] = { DE_GRV, DE_SLSH, COMBO_END};
const uint16_t PROGMEM combo1[] = { KC_F, KC_D, COMBO_END};
const uint16_t PROGMEM combo2[] = { KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM combo3[] = { KC_S, KC_D, COMBO_END};
const uint16_t PROGMEM combo4[] = { KC_K, KC_L, COMBO_END};
const uint16_t PROGMEM combo5[] = { KC_E, KC_R, COMBO_END};
const uint16_t PROGMEM combo6[] = { KC_U, KC_I, COMBO_END};
const uint16_t PROGMEM combo7[] = { KC_W, KC_E, KC_R, COMBO_END};
const uint16_t PROGMEM combo8[] = { KC_I, KC_O, KC_U, COMBO_END};
const uint16_t PROGMEM combo9[] = { KC_A, KC_S, COMBO_END};
const uint16_t PROGMEM combo10[] = { KC_L, DE_OE, COMBO_END};
const uint16_t PROGMEM combo11[] = { KC_A, KC_S, KC_D, KC_F, COMBO_END};
const uint16_t PROGMEM combo12[] = { KC_J, KC_K, KC_L, DE_OE, COMBO_END};
const uint16_t PROGMEM combo13[] = { KC_PGDN, KC_LEFT_SHIFT, COMBO_END};
const uint16_t PROGMEM combo14[] = { KC_LEFT_GUI, LCTL(KC_HOME), COMBO_END};
const uint16_t PROGMEM combo15[] = { KC_LEFT_GUI, LCTL(KC_HOME), KC_PGDN, KC_LEFT_SHIFT, COMBO_END};
const uint16_t PROGMEM combo16[] = { DE_RCBR, DE_DQOT, COMBO_END};
const uint16_t PROGMEM combo17[] = { DE_LPRN, DE_MINS, COMBO_END};
const uint16_t PROGMEM combo18[] = { DE_EXLM, DE_LCBR, COMBO_END};
const uint16_t PROGMEM combo19[] = { DE_QST, DE_RPRN, COMBO_END};
const uint16_t PROGMEM combo20[] = { DE_EXLM, DE_LCBR, DE_DQOT, DE_RCBR, COMBO_END};
const uint16_t PROGMEM combo21[] = { DE_LPRN, DE_MINS, DE_RPRN, DE_QST, COMBO_END};
const uint16_t PROGMEM combo22[] = { KC_E, KC_W, COMBO_END};
const uint16_t PROGMEM combo23[] = { KC_I, KC_O, COMBO_END};
const uint16_t PROGMEM combo24[] = { LCTL(KC_HOME), KC_PGDN, COMBO_END};
const uint16_t PROGMEM combo25[] = { KC_UP, KC_RIGHT, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, ST_MACRO_0),
    COMBO(combo1, KC_LEFT_SHIFT),
    COMBO(combo2, KC_RIGHT_SHIFT),
    COMBO(combo3, TT(2)),
    COMBO(combo4, TT(2)),
    COMBO(combo5, TT(3)),
    COMBO(combo6, TT(3)),
    COMBO(combo7, TT(4)),
    COMBO(combo8, TT(4)),
    COMBO(combo9, KC_LEFT_GUI),
    COMBO(combo10, KC_RIGHT_GUI),
    COMBO(combo11, LSFT(KC_LEFT_GUI)),
    COMBO(combo12, RSFT(KC_RIGHT_GUI)),
    COMBO(combo13, KC_LEFT_SHIFT),
    COMBO(combo14, KC_LEFT_GUI),
    COMBO(combo15, LSFT(KC_LEFT_GUI)),
    COMBO(combo16, KC_LEFT_SHIFT),
    COMBO(combo17, KC_RIGHT_SHIFT),
    COMBO(combo18, KC_LEFT_GUI),
    COMBO(combo19, KC_RIGHT_GUI),
    COMBO(combo20, KC_LEFT_GUI),
    COMBO(combo21, RSFT(KC_RIGHT_GUI)),
    COMBO(combo22, OSL(1)),
    COMBO(combo23, OSL(1)),
    COMBO(combo24, TO(0)),
    COMBO(combo25, TO(0)),
};



extern rgb_config_t rgb_matrix_config;

RGB hsv_to_rgb_with_value(HSV hsv) {
  RGB rgb = hsv_to_rgb( hsv );
  float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
  return (RGB){ f * rgb.r, f * rgb.g, f * rgb.b };
}

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {132,169,170}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {52,255,255}, {132,169,170}, {132,169,170}, {132,169,170}, {132,169,170}, {132,169,170}, {52,255,255}, {132,169,170}, {132,169,170}, {132,169,170}, {132,169,170}, {132,169,170}, {52,255,255}, {132,169,170}, {132,169,170}, {132,169,170}, {132,169,170}, {132,169,170}, {52,255,255}, {52,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {132,169,170}, {132,169,170}, {132,169,170}, {132,169,170}, {132,169,170}, {132,169,170}, {132,169,170}, {132,169,170}, {132,169,170}, {132,169,170}, {132,169,170}, {132,169,170}, {132,169,170}, {132,169,170}, {132,169,170}, {200,255,255}, {200,255,255}, {200,255,255}, {52,255,255}, {52,255,255}, {52,255,255} },

    [1] = { {17,255,255}, {52,255,255}, {52,255,255}, {52,255,255}, {52,255,255}, {52,255,255}, {52,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {17,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {52,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {52,255,255}, {52,255,255}, {52,255,255}, {52,255,255}, {52,255,255}, {52,255,255}, {52,255,255}, {52,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {0,0,0}, {52,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {17,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {52,255,255}, {52,255,255}, {52,255,255} },

    [2] = { {17,255,255}, {17,255,255}, {17,255,255}, {17,255,255}, {17,255,255}, {17,255,255}, {17,255,255}, {17,255,255}, {74,255,255}, {74,255,255}, {17,255,255}, {74,255,255}, {17,255,255}, {52,255,255}, {74,255,255}, {74,255,255}, {52,255,255}, {17,255,255}, {52,255,255}, {17,255,255}, {17,255,255}, {17,255,255}, {17,255,255}, {74,255,255}, {52,255,255}, {52,255,255}, {17,255,255}, {17,255,255}, {17,255,255}, {17,255,255}, {17,255,255}, {17,255,255}, {74,255,255}, {74,255,255}, {17,255,255}, {17,255,255}, {17,255,255}, {17,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {17,255,255}, {17,255,255}, {17,255,255}, {17,255,255}, {17,255,255}, {17,255,255}, {17,255,255}, {52,255,255}, {52,255,255}, {52,255,255} },

    [3] = { {17,255,255}, {17,255,255}, {17,255,255}, {17,255,255}, {17,255,255}, {17,255,255}, {17,255,255}, {17,255,255}, {17,255,255}, {17,255,255}, {17,255,255}, {17,255,255}, {17,255,255}, {17,255,255}, {17,255,255}, {17,255,255}, {17,255,255}, {17,255,255}, {17,255,255}, {17,255,255}, {17,255,255}, {17,255,255}, {17,255,255}, {17,255,255}, {52,255,255}, {52,255,255}, {17,255,255}, {17,255,255}, {17,255,255}, {17,255,255}, {17,255,255}, {17,255,255}, {52,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {52,255,255}, {17,255,255}, {52,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {52,255,255}, {17,255,255}, {52,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {52,255,255}, {17,255,255}, {52,255,255}, {131,255,255} },

    [4] = { {17,255,255}, {17,255,255}, {17,255,255}, {17,255,255}, {17,255,255}, {17,255,255}, {17,255,255}, {17,255,255}, {17,255,255}, {17,255,255}, {17,255,255}, {17,255,255}, {17,255,255}, {17,255,255}, {17,255,255}, {17,255,255}, {17,255,255}, {17,255,255}, {17,255,255}, {17,255,255}, {17,255,255}, {17,255,255}, {17,255,255}, {17,255,255}, {17,255,255}, {17,255,255}, {17,255,255}, {17,255,255}, {17,255,255}, {17,255,255}, {17,255,255}, {17,255,255}, {17,255,255}, {52,255,255}, {74,255,255}, {52,255,255}, {74,255,255}, {17,255,255}, {17,255,255}, {200,255,255}, {200,255,255}, {200,255,255}, {17,255,255}, {17,255,255}, {17,255,255}, {17,255,255}, {17,255,255}, {17,255,255}, {17,255,255}, {17,255,255}, {17,255,255}, {17,255,255} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb_with_value(hsv);
        rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (!keyboard_config.disable_layer_led) { 
    switch (biton32(layer_state)) {
      case 0:
        set_layer_color(0);
        break;
      case 1:
        set_layer_color(1);
        break;
      case 2:
        set_layer_color(2);
        break;
      case 3:
        set_layer_color(3);
        break;
      case 4:
        set_layer_color(4);
        break;
     default:
        if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
          rgb_matrix_set_color_all(0, 0, 0);
        }
    }
  } else {
    if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
      rgb_matrix_set_color_all(0, 0, 0);
    }
  }

  return true;
}



typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,      
    SINGLE_HOLD,         
    DOUBLE_TAP,          
    DOUBLE_HOLD,         
    DOUBLE_SINGLE_TAP,   
    MORE_TAPS            
};

static tap dance_state[4];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_BSPC);
        tap_code16(KC_BSPC);
        tap_code16(KC_BSPC);
    }
    if(state->count > 3) {
        tap_code16(KC_BSPC);
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(KC_BSPC); break;
        case SINGLE_HOLD: register_code16(KC_LEFT_CTRL); break;
        case DOUBLE_TAP: register_code16(KC_BSPC); register_code16(KC_BSPC); break;
        case DOUBLE_HOLD: register_code16(KC_BSPC); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_BSPC); register_code16(KC_BSPC);
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(KC_BSPC); break;
        case SINGLE_HOLD: unregister_code16(KC_LEFT_CTRL); break;
        case DOUBLE_TAP: unregister_code16(KC_BSPC); break;
        case DOUBLE_HOLD: unregister_code16(KC_BSPC); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_BSPC); break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(tap_dance_state_t *state, void *user_data);
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void on_dance_1(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_DELETE);
        tap_code16(KC_DELETE);
        tap_code16(KC_DELETE);
    }
    if(state->count > 3) {
        tap_code16(KC_DELETE);
    }
}

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(KC_DELETE); break;
        case SINGLE_HOLD: register_code16(KC_LEFT_ALT); break;
        case DOUBLE_TAP: register_code16(KC_DELETE); register_code16(KC_DELETE); break;
        case DOUBLE_HOLD: register_code16(KC_DELETE); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_DELETE); register_code16(KC_DELETE);
    }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(KC_DELETE); break;
        case SINGLE_HOLD: unregister_code16(KC_LEFT_ALT); break;
        case DOUBLE_TAP: unregister_code16(KC_DELETE); break;
        case DOUBLE_HOLD: unregister_code16(KC_DELETE); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_DELETE); break;
    }
    dance_state[1].step = 0;
}
void on_dance_2(tap_dance_state_t *state, void *user_data);
void dance_2_finished(tap_dance_state_t *state, void *user_data);
void dance_2_reset(tap_dance_state_t *state, void *user_data);

void on_dance_2(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(DE_AE);
        tap_code16(DE_AE);
        tap_code16(DE_AE);
    }
    if(state->count > 3) {
        tap_code16(DE_AE);
    }
}

void dance_2_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(DE_AE); break;
        case SINGLE_HOLD: register_code16(KC_RIGHT_ALT); break;
        case DOUBLE_TAP: register_code16(DE_AE); register_code16(DE_AE); break;
        case DOUBLE_HOLD: register_code16(DE_AE); break;
        case DOUBLE_SINGLE_TAP: tap_code16(DE_AE); register_code16(DE_AE);
    }
}

void dance_2_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(DE_AE); break;
        case SINGLE_HOLD: unregister_code16(KC_RIGHT_ALT); break;
        case DOUBLE_TAP: unregister_code16(DE_AE); break;
        case DOUBLE_HOLD: unregister_code16(DE_AE); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(DE_AE); break;
    }
    dance_state[2].step = 0;
}
void on_dance_3(tap_dance_state_t *state, void *user_data);
void dance_3_finished(tap_dance_state_t *state, void *user_data);
void dance_3_reset(tap_dance_state_t *state, void *user_data);

void on_dance_3(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_SPACE);
        tap_code16(KC_SPACE);
        tap_code16(KC_SPACE);
    }
    if(state->count > 3) {
        tap_code16(KC_SPACE);
    }
}

void dance_3_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case SINGLE_TAP: register_code16(KC_SPACE); break;
        case SINGLE_HOLD: register_code16(KC_RIGHT_CTRL); break;
        case DOUBLE_TAP: register_code16(KC_SPACE); register_code16(KC_SPACE); break;
        case DOUBLE_HOLD: register_code16(KC_SPACE); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_SPACE); register_code16(KC_SPACE);
    }
}

void dance_3_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[3].step) {
        case SINGLE_TAP: unregister_code16(KC_SPACE); break;
        case SINGLE_HOLD: unregister_code16(KC_RIGHT_CTRL); break;
        case DOUBLE_TAP: unregister_code16(KC_SPACE); break;
        case DOUBLE_HOLD: unregister_code16(KC_SPACE); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_SPACE); break;
    }
    dance_state[3].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
        [DANCE_3] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_3, dance_3_finished, dance_3_reset),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_EQUAL))SS_DELAY(10)  SS_LSFT(SS_TAP(X_EQUAL))SS_DELAY(10)  SS_LSFT(SS_TAP(X_EQUAL))SS_DELAY(10)  SS_LSFT(SS_TAP(X_ENTER))SS_DELAY(10)  SS_LSFT(SS_TAP(X_ENTER))SS_DELAY(10)  SS_LSFT(SS_TAP(X_EQUAL))SS_DELAY(10)  SS_LSFT(SS_TAP(X_EQUAL))SS_DELAY(10)  SS_LSFT(SS_TAP(X_EQUAL))SS_DELAY(9)  SS_TAP(X_UP));
    }
    break;

    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}
