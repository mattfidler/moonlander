#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_german.h"
#include "keymap_nordic.h"
#include "keymap_french.h"
#include "keymap_spanish.h"
#include "keymap_hungarian.h"
#include "keymap_swedish.h"
#include "keymap_br_abnt2.h"
#include "keymap_canadian_multilingual.h"
#include "keymap_german_ch.h"
#include "keymap_jp.h"
#include "keymap_korean.h"
#include "keymap_bepo.h"
#include "keymap_italian.h"
#include "keymap_slovenian.h"
#include "keymap_lithuanian_azerty.h"
#include "keymap_danish.h"
#include "keymap_norwegian.h"
#include "keymap_portuguese.h"
#include "keymap_contributions.h"
#include "keymap_czech.h"
#include "keymap_romanian.h"
#include "keymap_russian.h"
#include "keymap_uk.h"
#include "keymap_estonian.h"
#include "keymap_belgian.h"
#include "keymap_us_international.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)
#define MOON_LED_LEVEL LED_LEVEL

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
  ST_MACRO_5,
  ST_MACRO_6,
  ST_MACRO_7,
  ST_MACRO_8,
  ST_MACRO_9,
  ST_MACRO_10,
  ST_MACRO_11,
  ST_MACRO_12,
  ST_MACRO_13,
  ST_MACRO_14,
  ST_MACRO_15,
  ST_MACRO_16,
  ST_MACRO_17,
  ST_MACRO_18,
};


enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
  DANCE_3,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_TRANSPARENT, TD(DANCE_0),    KC_W,           LT(14,KC_F),    LT(12,KC_P),    KC_G,           KC_TRANSPARENT,                                 KC_TRANSPARENT, TD(DANCE_2),    LT(11,KC_L),    LT(13,KC_U),    KC_Y,           KC_QUOTE,       KC_TRANSPARENT, 
    KC_TRANSPARENT, LGUI_T(KC_A),   LALT_T(KC_R),   LCTL_T(KC_S),   LSFT_T(KC_T),   KC_D,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_H,           RSFT_T(KC_N),   RCTL_T(KC_E),   RALT_T(KC_I),   RGUI_T(KC_O),   KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_Z,           RALT_T(KC_X),   KC_C,           TD(DANCE_1),    KC_B,           KC_TRANSPARENT,                                                                 KC_TRANSPARENT, TD(DANCE_3),    LT(10,KC_M),    KC_COMMA,       LALT_T(KC_DOT), KC_SLASH,       KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LT(8,KC_DELETE),LT(6,KC_BSPACE),LT(7,KC_ENTER),                                 LT(3,KC_TAB),   LT(1,KC_SPACE), LT(5,KC_ESCAPE),KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [1] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_PGUP,        KC_HOME,        KC_UP,          KC_END,         KC_INSERT,      KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          TO(2),          KC_NO,          WEBUSB_PAIR,    RESET,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_PGDOWN,      KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_CAPSLOCK,    KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_LSHIFT,      KC_LCTRL,       KC_LALT,        KC_LGUI,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_PC_UNDO,     KC_PC_CUT,      KC_PC_COPY,     KC_PC_PASTE,    LCTL(KC_Y),     KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_RALT,        KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_DELETE,      KC_BSPACE,      KC_ENTER,                                       KC_NO,          KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_PGUP,        KC_HOME,        KC_UP,          KC_END,         KC_INSERT,      KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          TO(0),          KC_NO,          WEBUSB_PAIR,    RESET,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_PGDOWN,      KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_CAPSLOCK,    KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_RSHIFT,      KC_RCTRL,       KC_RALT,        KC_RGUI,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_PC_UNDO,     KC_PC_CUT,      KC_PC_COPY,     KC_PC_PASTE,    LCTL(KC_Y),     KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_LALT,        KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_DELETE,      KC_BSPACE,      KC_ENTER,                                       KC_NO,          TO(0),          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_MS_WH_UP,    KC_MS_WH_LEFT,  KC_MS_UP,       KC_MS_WH_RIGHT, KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          TO(4),          KC_NO,          WEBUSB_PAIR,    RESET,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_MS_WH_DOWN,  KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_LSHIFT,      KC_LCTRL,       KC_LALT,        KC_LGUI,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_PC_UNDO,     KC_PC_CUT,      KC_PC_COPY,     KC_PC_PASTE,    LCTL(KC_Y),     KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_RALT,        KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_BTN3,     KC_MS_BTN2,     KC_MS_BTN1,                                     KC_TRANSPARENT, KC_NO,          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_MS_WH_UP,    KC_MS_WH_LEFT,  KC_MS_UP,       KC_MS_WH_RIGHT, KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          TO(0),          KC_NO,          WEBUSB_PAIR,    RESET,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_MS_WH_DOWN,  KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_RSHIFT,      KC_RCTRL,       KC_RALT,        KC_RGUI,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_PC_UNDO,     KC_PC_CUT,      KC_PC_COPY,     KC_PC_PASTE,    LCTL(KC_Y),     KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_LALT,        KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_BTN3,     KC_MS_BTN2,     KC_MS_BTN1,                                     TO(0),          KC_NO,          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_moonlander(
    KC_TRANSPARENT, RGB_VAI,        RGB_SPD,        KC_AUDIO_VOL_UP,RGB_SPI,        KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          WEBUSB_PAIR,    RESET,          KC_TRANSPARENT, 
    KC_TRANSPARENT, RGB_VAD,        KC_MEDIA_PREV_TRACK,KC_AUDIO_VOL_DOWN,KC_MEDIA_NEXT_TRACK,KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_LSHIFT,      KC_LCTRL,       KC_LALT,        KC_LGUI,        KC_TRANSPARENT, 
    KC_TRANSPARENT, RGB_TOG,        RGB_MOD,        RGB_HUD,        RGB_HUI,        RGB_MOD,        KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_RALT,        KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_AUDIO_MUTE,  KC_MEDIA_PLAY_PAUSE,KC_MEDIA_STOP,                                  KC_NO,          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_moonlander(
    KC_TRANSPARENT, RESET,          WEBUSB_PAIR,    KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_LBRACKET,    KC_7,           KC_8,           KC_9,           KC_RBRACKET,    KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LGUI,        KC_LALT,        KC_LCTRL,       KC_LSHIFT,      KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_EQUAL,       KC_4,           KC_5,           KC_6,           KC_SCOLON,      KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_RALT,        KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_BSLASH,      KC_1,           KC_2,           KC_3,           KC_GRAVE,       KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, KC_NO,                                          KC_MINUS,       KC_0,           KC_DOT,         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [7] = LAYOUT_moonlander(
    KC_TRANSPARENT, RESET,          WEBUSB_PAIR,    KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_LCBR,        KC_AMPR,        KC_ASTR,        KC_LPRN,        KC_RCBR,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LGUI,        KC_LALT,        KC_LCTRL,       KC_LSHIFT,      KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_PLUS,        KC_DLR,         KC_PERC,        KC_CIRC,        KC_COLN,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_RALT,        KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_PIPE,        KC_EXLM,        KC_AT,          KC_HASH,        KC_TILD,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_NO,          KC_TRANSPARENT,                                 KC_UNDS,        KC_LPRN,        KC_RPRN,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [8] = LAYOUT_moonlander(
    KC_TRANSPARENT, RESET,          WEBUSB_PAIR,    KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_PSCREEN,     KC_F7,          KC_F8,          KC_F9,          KC_F12,         KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LGUI,        KC_LALT,        KC_LCTRL,       KC_LSHIFT,      KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_SCROLLLOCK,  KC_F4,          KC_F5,          KC_F6,          KC_F11,         KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_RALT,        KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_PAUSE,       KC_F1,          KC_F2,          KC_F3,          KC_F10,         KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_NO,                                          KC_TAB,         KC_SPACE,       KC_APPLICATION, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [9] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, LCTL(KC_6),     LCTL(KC_7),     LCTL(KC_8),     LCTL(KC_9),     LCTL(KC_0),     KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LGUI,        KC_LSHIFT,      KC_LSHIFT,      KC_LSHIFT,      KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, LALT(KC_6),     LALT(KC_7),     LALT(KC_8),     LALT(KC_9),     LALT(KC_0),     KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_RALT,        KC_NO,          KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_APPLICATION, KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [10] = LAYOUT_moonlander(
    KC_TRANSPARENT, LCTL(KC_1),     LCTL(KC_2),     LCTL(KC_3),     LCTL(KC_4),     LCTL(KC_5),     KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, LALT(KC_1),     LALT(KC_2),     LALT(KC_3),     LALT(KC_4),     LALT(KC_5),     KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_LSHIFT,      KC_RSHIFT,      KC_RSHIFT,      KC_LGUI,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_APPLICATION, KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [11] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_NO,          KC_NO,          ST_MACRO_0,     ST_MACRO_1,     KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, ST_MACRO_2,     ST_MACRO_3,     ST_MACRO_4,     ST_MACRO_5,     ST_MACRO_6,     KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_NO,          ST_MACRO_7,     KC_NO,          ST_MACRO_8,     KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [12] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          ST_MACRO_9,     KC_NO,          ST_MACRO_10,    KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_NO,          KC_NO,          ST_MACRO_11,    ST_MACRO_12,    KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,                                          ST_MACRO_13,    KC_NO,          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [13] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          ST_MACRO_14,    KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_NO,          KC_TRANSPARENT, KC_NO,          KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          ST_MACRO_15,    ST_MACRO_16,    KC_NO,          KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [14] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_TRANSPARENT, KC_NO,          KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_NO,          KC_NO,          ST_MACRO_17,    KC_NO,          KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,                                          ST_MACRO_18,    KC_NO,          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};

extern bool g_suspend_state;
extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [1] = { {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139} },

    [2] = { {129,211,255}, {129,211,255}, {129,211,255}, {129,211,255}, {129,211,255}, {129,211,255}, {129,211,255}, {129,211,255}, {129,211,255}, {129,211,255}, {129,211,255}, {129,211,255}, {129,211,255}, {129,211,255}, {129,211,255}, {129,211,255}, {129,211,255}, {129,211,255}, {129,211,255}, {129,211,255}, {129,211,255}, {129,211,255}, {129,211,255}, {129,211,255}, {129,211,255}, {129,211,255}, {129,211,255}, {129,211,255}, {129,211,255}, {129,211,255}, {129,211,255}, {129,211,255}, {129,211,255}, {129,211,255}, {129,211,255}, {129,211,255}, {129,211,255}, {129,211,255}, {129,211,255}, {129,211,255}, {129,211,255}, {129,211,255}, {129,211,255}, {129,211,255}, {129,211,255}, {129,211,255}, {129,211,255}, {129,211,255}, {129,211,255}, {129,211,255}, {129,211,255}, {129,211,255}, {129,211,255}, {129,211,255}, {129,211,255}, {129,211,255}, {129,211,255}, {129,211,255}, {129,211,255}, {129,211,255}, {129,211,255}, {129,211,255}, {129,211,255}, {129,211,255}, {129,211,255}, {129,211,255}, {129,211,255}, {129,211,255}, {129,211,255}, {129,211,255}, {129,211,255}, {129,211,255} },

    [3] = { {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255} },

    [4] = { {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255} },

    [5] = { {250,63,255}, {250,63,255}, {250,63,255}, {250,63,255}, {250,63,255}, {250,63,255}, {250,63,255}, {250,63,255}, {250,63,255}, {250,63,255}, {250,63,255}, {250,63,255}, {250,63,255}, {250,63,255}, {250,63,255}, {250,63,255}, {250,63,255}, {250,63,255}, {250,63,255}, {250,63,255}, {250,63,255}, {250,63,255}, {250,63,255}, {250,63,255}, {250,63,255}, {250,63,255}, {250,63,255}, {250,63,255}, {250,63,255}, {250,63,255}, {250,63,255}, {250,63,255}, {250,63,255}, {250,63,255}, {250,63,255}, {250,63,255}, {250,63,255}, {250,63,255}, {250,63,255}, {250,63,255}, {250,63,255}, {250,63,255}, {250,63,255}, {250,63,255}, {250,63,255}, {250,63,255}, {250,63,255}, {250,63,255}, {250,63,255}, {250,63,255}, {250,63,255}, {250,63,255}, {250,63,255}, {250,63,255}, {250,63,255}, {250,63,255}, {250,63,255}, {250,63,255}, {250,63,255}, {250,63,255}, {250,63,255}, {250,63,255}, {250,63,255}, {250,63,255}, {250,63,255}, {250,63,255}, {250,63,255}, {250,63,255}, {250,63,255}, {250,63,255}, {250,63,255}, {250,63,255} },

    [6] = { {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139}, {172,255,139} },

    [7] = { {86,192,205}, {86,192,205}, {86,192,205}, {86,192,205}, {86,192,205}, {86,192,205}, {86,192,205}, {86,192,205}, {86,192,205}, {86,192,205}, {86,192,205}, {86,192,205}, {86,192,205}, {86,192,205}, {86,192,205}, {86,192,205}, {86,192,205}, {86,192,205}, {86,192,205}, {86,192,205}, {86,192,205}, {86,192,205}, {86,192,205}, {86,192,205}, {86,192,205}, {86,192,205}, {86,192,205}, {86,192,205}, {86,192,205}, {86,192,205}, {86,192,205}, {86,192,205}, {86,192,205}, {86,192,205}, {86,192,205}, {86,192,205}, {86,192,205}, {86,192,205}, {86,192,205}, {86,192,205}, {86,192,205}, {86,192,205}, {86,192,205}, {86,192,205}, {86,192,205}, {86,192,205}, {86,192,205}, {86,192,205}, {86,192,205}, {86,192,205}, {86,192,205}, {86,192,205}, {86,192,205}, {86,192,205}, {86,192,205}, {86,192,205}, {86,192,205}, {86,192,205}, {86,192,205}, {86,192,205}, {86,192,205}, {86,192,205}, {86,192,205}, {86,192,205}, {86,192,205}, {86,192,205}, {86,192,205}, {86,192,205}, {86,192,205}, {86,192,205}, {86,192,205}, {86,192,205} },

    [8] = { {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

void rgb_matrix_indicators_user(void) {
  if (g_suspend_state || keyboard_config.disable_layer_led) { return; }
  switch (biton32(layer_state)) {
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
    case 5:
      set_layer_color(5);
      break;
    case 6:
      set_layer_color(6);
      break;
    case 7:
      set_layer_color(7);
      break;
    case 8:
      set_layer_color(8);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_F)) SS_LSFT(SS_TAP(X_A)) SS_LSFT(SS_TAP(X_L)) SS_LSFT(SS_TAP(X_S)) SS_LSFT(SS_TAP(X_E)));

    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_P)) SS_LSFT(SS_TAP(X_M)) SS_LSFT(SS_TAP(X_X)));

    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_A)) SS_LSFT(SS_TAP(X_I)) SS_LSFT(SS_TAP(X_C)));

    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_R)) SS_TAP(X_X) SS_LSFT(SS_TAP(X_O)) SS_LSFT(SS_TAP(X_D)) SS_LSFT(SS_TAP(X_E)));

    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_S)) SS_LSFT(SS_TAP(X_E)) SS_LSFT(SS_TAP(X_X)) SS_LSFT(SS_TAP(X_P)));

    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_T)) SS_LSFT(SS_TAP(X_R)) SS_LSFT(SS_TAP(X_U)) SS_LSFT(SS_TAP(X_E)));

    }
    break;
    case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_D)) SS_LSFT(SS_TAP(X_R)) SS_LSFT(SS_TAP(X_A)) SS_LSFT(SS_TAP(X_F)) SS_LSFT(SS_TAP(X_T)));

    }
    break;
    case ST_MACRO_7:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_C)) SS_LSFT(SS_TAP(X_R)) SS_LSFT(SS_TAP(X_A)) SS_LSFT(SS_TAP(X_N)));

    }
    break;
    case ST_MACRO_8:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_B)) SS_LSFT(SS_TAP(X_I)) SS_LSFT(SS_TAP(X_C)));

    }
    break;
    case ST_MACRO_9:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_N)) SS_LSFT(SS_TAP(X_U)) SS_LSFT(SS_TAP(X_L)) SS_LSFT(SS_TAP(X_L)));

    }
    break;
    case ST_MACRO_10:
    if (record->event.pressed) {
      SEND_STRING("INTEGER");

    }
    break;
    case ST_MACRO_11:
    if (record->event.pressed) {
      SEND_STRING("matthew.fidler@gmail.com");

    }
    break;
    case ST_MACRO_12:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_5)) SS_LSFT(SS_TAP(X_DOT)) SS_LSFT(SS_TAP(X_5)));

    }
    break;
    case ST_MACRO_13:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_COMMA)) SS_TAP(X_MINUS));

    }
    break;
    case ST_MACRO_14:
    if (record->event.pressed) {
      SEND_STRING("PROTECT");

    }
    break;
    case ST_MACRO_15:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_R)) SS_LSFT(SS_TAP(X_E)) SS_LSFT(SS_TAP(X_A)) SS_LSFT(SS_TAP(X_L)));

    }
    break;
    case ST_MACRO_16:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_S)) SS_LSFT(SS_TAP(X_X)) SS_LSFT(SS_TAP(X_P)));

    }
    break;
    case ST_MACRO_17:
    if (record->event.pressed) {
      SEND_STRING("matt.fidler@novartis.com");

    }
    break;
    case ST_MACRO_18:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_MINUS) SS_LSFT(SS_TAP(X_DOT)));

    }
    break;
  case RGB_SLD:
    if (record->event.pressed) {
      rgblight_mode(1);
    }
    return false;
#define HM_A LGUI_T(KC_A)
#define HM_R LALT_T(KC_R)
#define HM_S LCTL_T(KC_S)
#define HM_T LSFT_T(KC_T)

#define HM_N RSFT_T(KC_N)
#define HM_E RCTL_T(KC_E)
#define HM_I RALT_T(KC_I)
#define HM_O RGUI_T(KC_O)
#define LYT_SPC LT(1,KC_SPACE)
#define LYT_L LT(11,KC_L)
#define LYT_U LT(13,KC_U)
#define LYT_M LT(10,KC_M)
#define LYT_F LT(14,KC_F)

// http://norvig.com/mayzner.html
// th = 3.56% (Alternating hand bigram)
// he = 3.07% (H is not home row)
// in = 2.43%
// er = 2.05% Alternating hand // ctrl 
// an = 1.99% Alternating hand // win n
// re = 1.85% Alternating hand // alt e
// on = 1.76%
// at = 1.49%
// en = 1.45%
// nd = 1.35% Alternating hand // D
// ti = 1.34% Alternating hand // I
// es = 1.34% Alternating hand // ctrl s
// or = 1.28% Alternating hand // run command redundant with simple windows key
// te = 1.20% Alternating hand // E
// of = 1.17% Alternating hand // win + f
// ed = 1.17% Alternating hand // ctrl d
// is = 1.13% Alternating hand // alt s
// it = 1.12% Alternating hand // alt t
// al = 1.09% Alternating hand // win l
// ar = 1.07%
// st = 1.05%
// to = 1.04% Alternating hand // O
// nt = 1.04% Alternating hand // T 
// ng = 0.95% Alternating hand // G
// se = 0.93% Alternating hand // ctrl e
// ha = 0.93% Alternating hand // non home row modifiers
// as = 0.87%
// ou = 0.87%
// io = 0.83%
// le = 0.83% no home row mods
// ve = 0.83% no home row mods
// co = 0.79% alternating hands 
// me = 0.79% no home row mods 
// de = 0.76% no howe row mods
// hi = 0.73% no home row mods
// ri = 0.73% Alternating hands alt i
// ro = 0.73% Alternating hands alt o
// ic = 0.70% Alternating hands alt c
// ne = 0.69%

// Bigrams that do not exist jq, qg, qy, qz, wq, and qz


    // common bigraphs that contain home row mods on same hand
    // ou, in, st, en
  case HM_R:
    if (record->tap.count > 0) {
      if (get_mods() & MOD_BIT(KC_RGUI)) {
	// or = 1.28% Alternating hand // run command redundant with simple windows key
	unregister_mods(MOD_BIT(KC_RGUI));
	tap_code(KC_O);
	tap_code(KC_R);
	add_mods(MOD_BIT(KC_RGUI));
	return false;
      } else if (get_mods() & MOD_BIT(KC_LGUI)) {
	// ar 1.07% 
	unregister_mods(MOD_BIT(KC_LGUI));
	tap_code(KC_A);
	tap_code(KC_R);
	add_mods(MOD_BIT(KC_LGUI));
	return false;
      }
    }
    return true;
  case LYT_F:
    //// of = 1.17% Alternating hand // win + f
    if (record->tap.count > 0) {
      if (get_mods() & MOD_BIT(KC_RGUI)) {
	unregister_mods(MOD_BIT(KC_RGUI));
	tap_code(KC_O);
	tap_code(KC_F);
	add_mods(MOD_BIT(KC_RGUI));
	return false;
      }
    }
    return true;
  case LYT_L:
    //al = 1.09% Alternating hand
    if (record->tap.count > 0) {
      if (get_mods() & MOD_BIT(KC_LGUI)) {
	unregister_mods(MOD_BIT(KC_LGUI));
	tap_code(KC_A);
	tap_code(KC_L);
	add_mods(MOD_BIT(KC_LGUI));
	return false;
      }
    }
    return true;
  case LYT_M:
    // om bigraph
    if (record->tap.count > 0) {
      if (get_mods() & MOD_BIT(KC_RGUI)) {
	unregister_mods(MOD_BIT(KC_RGUI));
	tap_code(KC_O);
	tap_code(KC_M);
	add_mods(MOD_BIT(KC_RGUI));
	return false;
      } else if (get_mods() & MOD_BIT(KC_RCTL)) {
	// em bigraph
	unregister_mods(MOD_BIT(KC_RCTL));
	tap_code(KC_E);
	tap_code(KC_M);
	add_mods(MOD_BIT(KC_RCTL));
	return false;
      }
    }
    return true;
  case LYT_U:
    // handle ou case and send ou for gui right+u
    if (record->tap.count > 0) {
      if (get_mods() & MOD_BIT(KC_RGUI)) {
	// ou = 0.87%
	unregister_mods(MOD_BIT(KC_RGUI));
	tap_code(KC_O);
	tap_code(KC_U);
	add_mods(MOD_BIT(KC_RGUI));
	return false;
      }
    }
    return true; 
  case HM_T:
    // handles st
    if (record->tap.count > 0) {
      if (get_mods() & MOD_BIT(KC_LGUI)) {
	// handle at 1.49%
	unregister_mods(MOD_BIT(KC_LGUI));
	tap_code(KC_A);
	tap_code(KC_T);
	unregister_mods(MOD_BIT(KC_LGUI));
	return false;
      } else if (get_mods() & MOD_BIT(KC_LCTL)) {
	// handle st 1.05%
	unregister_mods(MOD_BIT(KC_LCTL));
	tap_code(KC_S);
	tap_code(KC_T);
	add_mods(MOD_BIT(KC_LCTL));
	return false;
      }
    }
    return true; 
  case HM_N:
    // handle en and in
    if (record->tap.count > 0) {
      uint8_t current_mods = get_mods();
      if (current_mods & MOD_BIT(KC_RALT)) {
	// in 2.43%
	unregister_mods(MOD_BIT(KC_RALT));
	tap_code(KC_I);
	tap_code(KC_N);
	add_mods(MOD_BIT(KC_RALT));
	return false;
      } else if (current_mods & MOD_BIT(KC_LGUI))  {
	//an = 1.99% Alternating hand
	unregister_mods(MOD_BIT(KC_LGUI));
	tap_code(KC_A);
	tap_code(KC_N);
	add_mods(MOD_BIT(KC_LGUI));
	return false;
      } else if (current_mods & MOD_BIT(KC_RGUI)) {
	// on 1.76%
	unregister_mods(MOD_BIT(KC_RGUI));
	tap_code(KC_O);
	tap_code(KC_N);
	add_mods(MOD_BIT(KC_RGUI));
	return false;
      } else if (current_mods & MOD_BIT(KC_RCTL)) {
	// en 1.45%
	unregister_mods(MOD_BIT(KC_RCTL));
	tap_code(KC_E);
	tap_code(KC_N);
	add_mods(MOD_BIT(KC_RCTL));
	return false;
      }
    }
    return true;
  case HM_S:
    if (record->tap.count > 0) {
      if (get_mods() & MOD_BIT(KC_LGUI)) {
	// as 0.87%
	unregister_mods(MOD_BIT(KC_LGUI));
	tap_code(KC_A);
	tap_code(KC_S);
	add_mods(MOD_BIT(KC_LGUI));
	return false;
      }
      return true;
    }
  case HM_O:
    if (record->tap.count > 0) {
      if (get_mods() & MOD_BIT(KC_RALT)) {
	// handle io 0.83%
	unregister_mods(MOD_BIT(KC_RALT));
	tap_code(KC_I);
	tap_code(KC_O);
	add_mods(MOD_BIT(KC_RALT));
	return false;
      }
    }
    return true;
  case HM_E:
    if (record->tap.count > 0) {
      if (get_mods() & MOD_BIT(KC_RSHIFT)) {
	// ne
	unregister_mods(MOD_BIT(KC_RSHIFT));
	tap_code(KC_N);
	tap_code(KC_E);
	add_mods(MOD_BIT(KC_RSHIFT));
	return false;
      }
    }
    return true;
  case HM_A:
    if (record->tap.count > 0) {
      if (get_mods() & MOD_BIT(KC_RALT)) {
	// ra
	unregister_mods(MOD_BIT(KC_RALT));
	tap_code(KC_R);
	tap_code(KC_A);
	add_mods(MOD_BIT(KC_RALT));
	return false;
      }
    }
    return true;
  case LYT_SPC:
    if (record->tap.count > 0) {
      if (get_mods() & MOD_BIT(KC_RSHIFT)) {
	// n 
	unregister_mods(MOD_BIT(KC_RSHIFT));
	tap_code(KC_N);
	tap_code(KC_SPC);
	add_mods(MOD_BIT(KC_RSHIFT));
	return false;
      } else if (get_mods() & MOD_BIT(KC_LSHIFT)) {
	// t 
	unregister_mods(MOD_BIT(KC_LSHIFT));
	tap_code(KC_T);
	tap_code(KC_SPC);
	add_mods(MOD_BIT(KC_LSHIFT));
	return false;
      }
    }
  }
  return true;
}


uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  case HM_T:
  case HM_N:
    return TAPPING_TERM;
  default:
    return TAPPING_TERM + 40;
  }
}

#undef HM_A
#undef HM_R 
#undef HM_S 
#undef HM_T 
#undef HM_N
#undef HM_E 
#undef HM_I 
#undef HM_O 

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

uint8_t dance_step(qk_tap_dance_state_t *state);

uint8_t dance_step(qk_tap_dance_state_t *state) {
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


void on_dance_0(qk_tap_dance_state_t *state, void *user_data);
void dance_0_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_0_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_0(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_Q);
        tap_code16(KC_Q);
        tap_code16(KC_Q);
    }
    if(state->count > 3) {
        tap_code16(KC_Q);
    }
}

void dance_0_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(KC_Q); break;
        case DOUBLE_TAP: register_code16(LGUI(KC_L)); break;
        case DOUBLE_HOLD: register_code16(LGUI(KC_L)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_Q); register_code16(KC_Q);
    }
}

void dance_0_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(KC_Q); break;
        case DOUBLE_TAP: unregister_code16(LGUI(KC_L)); break;
        case DOUBLE_HOLD: unregister_code16(LGUI(KC_L)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_Q); break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(qk_tap_dance_state_t *state, void *user_data);
void dance_1_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_1_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_1(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_V);
        tap_code16(KC_V);
        tap_code16(KC_V);
    }
    if(state->count > 3) {
        tap_code16(KC_V);
    }
}

void dance_1_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(KC_V); break;
        case SINGLE_HOLD: layer_on(9); break;
        case DOUBLE_TAP: register_code16(LALT(KC_F4)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_V); register_code16(KC_V);
    }
}

void dance_1_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(KC_V); break;
        case SINGLE_HOLD: layer_off(9); break;
        case DOUBLE_TAP: unregister_code16(LALT(KC_F4)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_V); break;
    }
    dance_state[1].step = 0;
}
void on_dance_2(qk_tap_dance_state_t *state, void *user_data);
void dance_2_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_2_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_2(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_J);
        tap_code16(KC_J);
        tap_code16(KC_J);
    }
    if(state->count > 3) {
        tap_code16(KC_J);
    }
}

void dance_2_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(KC_J); break;
        case DOUBLE_TAP: register_code16(KC_LGUI); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_J); register_code16(KC_J);
    }
}

void dance_2_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(KC_J); break;
        case DOUBLE_TAP: unregister_code16(KC_LGUI); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_J); break;
    }
    dance_state[2].step = 0;
}
void on_dance_3(qk_tap_dance_state_t *state, void *user_data);
void dance_3_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_3_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_3(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count >= 3) {
      tap_code16(KC_APPLICATION);
      for (uint8_t i = 2; i < state->count; i++) {
        tap_code16(KC_K);
      }
    }
}

void dance_3_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case SINGLE_TAP: register_code16(KC_K); break;
        case DOUBLE_TAP: register_code16(KC_APPLICATION); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_K); register_code16(KC_K);
    }
}

void dance_3_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[3].step) {
        case SINGLE_TAP: unregister_code16(KC_K); break;
        case DOUBLE_TAP: unregister_code16(KC_APPLICATION); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_K); break;
    }
    dance_state[3].step = 0;
}

qk_tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
        [DANCE_3] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_3, dance_3_finished, dance_3_reset),
};

