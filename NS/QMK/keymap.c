/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

//this is an attempt at a 34 key test
// by using the reachier thumb keys as the middle thumb keys
// and backspace and delete as combos
// it will simulate a 34 key crkbd
// if it works i'll try using brooms keyboards!!!

//2021 07 28 (F winkey replaced to layer for 34 key use)

#include QMK_KEYBOARD_H
//#ifdef PROTOCOL_LUFA
//  #include "lufa.h"
//  #include "split_util.h"
//#endif
#ifdef SSD1306OLED
  #include "ssd1306.h"
#endif

#include "danl4_common_functionsCRKBD.c"
//#include "g/keymap_combo.h"



enum combos {
  QW_BS,
  YI_Ent,//not great for hebrew ון, swap with ER, CV, MComma
  FG_BS,
  DF_Ent,
  JK_BS,
  HJ_Ent,
};

const uint16_t PROGMEM qw_combo[] = {KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM yi_combo[] = {KC_Y,	KC_I, COMBO_END};
const uint16_t PROGMEM fg_combo[] = {GUILAYER_F, KC_G, COMBO_END};
const uint16_t PROGMEM df_combo[] = {ALT_D,	GUILAYER_F, COMBO_END};
const uint16_t PROGMEM jk_combo[] = {GUI_J,	ALT_K, COMBO_END};
const uint16_t PROGMEM hj_combo[] = {KC_H,GUI_J, COMBO_END};


combo_t key_combos[COMBO_COUNT] = {
  [QW_BS] = COMBO(qw_combo, KC_ENT),
  [YI_Ent] = COMBO(yi_combo, KC_BSPC),
  [FG_BS] = COMBO(fg_combo, KC_BSPC),
  [DF_Ent] = COMBO(df_combo, KC_ENT),
  [JK_BS] = COMBO(jk_combo, KC_BSPC),
  [HJ_Ent] = COMBO(hj_combo, KC_ENT)

};



#ifdef RGBLIGHT_ENABLE
//Following line allows macro to read current RGB settings
extern rgblight_config_t rgblight_config;
#endif





//SSD1306 OLED update loop, make sure to add #define SSD1306OLED in config.h
#ifdef SSD1306OLED

// When add source files to SRC in rules.mk, you can use functions.
const char *read_layer_state(void);
const char *read_logo(void);
void set_keylog(uint16_t keycode, keyrecord_t *record);
const char *read_keylog(void);
const char *read_keylogs(void);

// const char *read_mode_icon(bool swap);
// const char *read_host_led_state(void);
// void set_timelog(void);
// const char *read_timelog(void);

void matrix_scan_user(void) {
   iota_gfx_task();
}

extern uint8_t is_master;
void matrix_render_user(struct CharacterMatrix *matrix) {
  if (is_master) {
    // If you want to change the display of OLED, you need to change here
    matrix_write_ln(matrix, read_layer_state());
    matrix_write_ln(matrix, read_keylog());
    //matrix_write_ln(matrix, read_keylogs());
    //matrix_write_ln(matrix, read_mode_icon(keymap_config.swap_lalt_lgui));
    //matrix_write_ln(matrix, read_host_led_state());
    //matrix_write_ln(matrix, read_timelog());
  } else {
    matrix_write(matrix, read_logo());
  }
}

void matrix_update(struct CharacterMatrix *dest, const struct CharacterMatrix *source) {
  if (memcmp(dest->display, source->display, sizeof(dest->display))) {
    memcpy(dest->display, source->display, sizeof(dest->display));
    dest->dirty = true;
  }
}

void iota_gfx_task_user(void) {
  struct CharacterMatrix matrix;
  matrix_clear(&matrix);
  matrix_render_user(&matrix);
  matrix_update(&display, &matrix);
}
#endif//SSD1306OLED


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_WINBASE] = LAYOUT(
	KC_Q,	KC_W,	KC_E,	KC_R,	KC_T,		KC_Y,KC_U,	KC_I,	KC_O,	KC_P,
 	SHFT_A,CTRL_S,ALT_D,	GUILAYER_F,	KC_G,	KC_H,GUI_J,	ALT_K,	CTRL_L,	SHSQ,
	MIRR_Z,KC_X,	KC_C,	KC_V,	MIRR_B,		KC_N,KC_M,	KC_COMM,KC_DOT,	SLASHES,
              NUM_TAB,CTRL_SPC,		SHFT_SPC,ARROWS,
              WIN_ENT,MO(_XNUMPAD)
   ),

	[_GUILAYER] = LAYOUT(
KC_Q,	KC_W,	KC_E,	KC_R,	KC_T,		KC_Y,KC_U,	KC_I,	KC_O,	KC_P,
S(KC_A),CTRL_S,G(KC_D),G(KC_F),G(KC_G),	KC_H,GUI_J,	ALT_K,	CTRL_L,	SHSQ, 
MIRR_Z,KC_X,	KC_C,	KC_V,	MIRR_B,		KC_N,KC_M,	KC_COMM,KC_DOT,	SLASHES,
                       KC_BSPC,WIN_ENT,		KC_BSPC,ARROWS,
                       KC_DEL,_____
  ),


  [_MIRROR] = LAYOUT( 
KC_P,	KC_O,	KC_I,		KC_U,	KC_Y,		KC_MS_ACCEL0,	KC_MS_BTN1,		KC_MS_UP,	KC_MS_BTN2,		RESET,
TD(SCL),KC_L,	KC_K,		KC_J,	KC_H,		KC_MS_ACCEL1,	KC_MS_LEFT,		KC_MS_DOWN,	KC_MS_RIGHT,	KC_A,
SLASHES,KC_DOT,	KC_COMM,	KC_M,	KC_N,		KC_MS_ACCEL2,	KC_V,			KC_MS_DOWN,	KC_X,			KC_Z,
					OSL(_XNUMPAD),	KC_DEL,		LGUI(KC_DEL),	KC_BSPC,
					KC_DEL,LGUI_T(KC_DEL)
  ),

[_MIRRRB] = LAYOUT(  /*MIRROR reached from B, not freom Z*/
KC_P,		KC_O,	KC_I,	KC_U,   KC_Y,			KC_MS_ACCEL0, 	KC_MS_BTN1,	KC_MS_UP,  KC_MS_BTN2, 	KC_MS_WH_UP, \
S(KC_A),	CTRL_L,	ALT_K,	GUI_J,  KC_H,			KC_MS_ACCEL1, 	KC_MS_LEFT,	KC_MS_DOWN,KC_MS_RIGHT,	KC_MS_WH_DOWN,\
SLASHES,	KC_DOT,	KC_COMM,KC_M,	KC_N,			KC_MS_ACCEL2, 	XXXXX,		KC_MS_BTN3,XXXXX,		XXXXX, \
					OSL(_XARROWS),	KC_DEL,			 _____,_____,	
					KC_DEL,_____
  ),
  
  [_ARROWS] = LAYOUT(
KC_LALT,	LSFT(KC_LBRACKET),	KC_LBRACKET,	KC_LPRN,	KC_ESC,KC_DEL,	KC_HOME,	KC_UP,		KC_PGUP,	KC_ENTER,
KC_LSHIFT,	KC_LCTRL,			KC_LALT,		KC_RPRN,	XXXXX, KC_PSCR,	KC_LEFT,	KC_DOWN,	KC_RIGHT,	KC_EQUAL,
LCTL(KC_Z),	LCTL(KC_X),			LCTL(KC_C),		LCTL(KC_V),	XXXXX, KC_ENTER,KC_END,		KC_DOWN,	KC_PGDN,	OSL(_NUMPAD),
 _______,	        	_______,	_______,_______,	
 _______,_______
),	
[_XARROWS] = LAYOUT(
 KC_LCTRL,        KC_HOME,	KC_UP,	 	KC_PGUP,	XXXXX,		XXXXX,		KC_HOME,	KC_UP,	  	KC_PGUP,	XXXXX,
 KC_LSHIFT,       KC_LEFT,	KC_DOWN,	KC_RIGHT,	KC_EQUAL,	KC_PSCR,	KC_LEFT,	KC_DOWN,	KC_RIGHT,	KC_EQUAL,
 LCTL(KC_LSHIFT), KC_END,	KC_DOWN,	KC_PGDN,	XXXXX,		XXXXX,		KC_END,	  	KC_DOWN,	KC_PGDN,	XXXXX,
  	LSFT_T(KC_DEL),	_______,	_______,		_______,	
  	_______,_______
),	
/* LOWER - Numpad */
[_NUMPAD] = LAYOUT(
KC_VOLU,  WBASE,  KC_PIPE, KC_TILD,	KC_ESC,    	KC_EQUAL, KC_7,	KC_8,KC_9,KC_0,
KC_VOLD,  CURLY,  SQUAR,   PARAN,	KC_APP,    	KC_SLSH,  KC_4,	KC_5,KC_6,KC_PLUS,
KC_MUTE,  KC_CUT, KC_ENT,  KC_BSPC,	KC_PSCR,   	KC_0,     KC_1,	KC_2,KC_3,KC_MINS,
				_______,	_______,		_______,		_______,
						_______,		_______
),  
   //     RESET, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  // RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  // RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  [_XNUMPAD] = LAYOUT(
KC_ASTR,  KC_7,  KC_8,   KC_9, KC_0,	KC_EQUAL, RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI,
KC_SLSH,  KC_4,  KC_5,   KC_6, KC_PLUS,	KC_SLSH,  RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD,
KC_0,     KC_1,  KC_2,   KC_3, KC_MINS,	KC_0,     KC_1,     KC_2,   KC_3,      KC_MINS,
	_______,	_______,		_______,		_______,		
	_______,		_______
),  

//
//[_SYMBOL] = LAYOUT(
//  XXXXX,	KC_TILD,	KC_AMPR,	KC_ASTR,	KC_LPRN,	KC_RPRN,		KC_CIRC,	KC_AMPR,	KC_ASTR,	KC_LPRN,	KC_RPRN,XXXXX,
//  WBASE,	XXXXX,		KC_DLR,		KC_PERC,	KC_CIRC,	KC_TILD,		KC_TILD,	KC_DLR,		KC_PERC,	KC_CIRC,	WBASE,XXXXX,
//  XXXXX,	XXXXX,		KC_EXLM,	KC_AT,		KC_HASH,	XXXXX,			KC_EQUAL,	KC_EXLM,	KC_AT,		KC_HASH,	KC_QUES,XXXXX,
//  _______,	_______,	_______,	_______,		_______,		_______
//),	


/* ADJUST - Macros,	Layer Switching,	Function Keys */
[_FUNC] = LAYOUT( 
KC_VOLU,	WBASE,	   KC_BRIU, RESET,		KC_APP,		  CLEARMODS,KC_F7,	KC_F8,	 KC_F9,	  KC_F10,
KC_LSHIFT,	KC_LCTRL,  KC_LALT,	KC_LGUI,	LCTL(KC_LALT),KC_EQUAL,	KC_F4,	KC_F5,	 KC_F6,	  KC_F11,
KC_CAPS,	KC_INSERT, KC_BRID,	KC_F,	    KC_PSCR,	  CLEARMODS,KC_F1,	KC_F2,	 KC_F3,	  KC_F12,
_______,	_______,		_______,		_______,		
_______,		_______
  )
};

#ifdef OLED_DRIVER_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_master) {
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  }
  return rotation;
}

#define L_BASE 0
#define L_LOWER 2
#define L_RAISE 4
#define L_ADJUST 8
#define L_MIRROR 32

void oled_render_layer_state(void) {
    oled_write_P(PSTR("Layer: "), false);
    switch (layer_state) {
        case L_BASE:
            oled_write_ln_P(PSTR("Base"), false);
            break;
        case L_LOWER:
            oled_write_ln_P(PSTR("Numpad"), false);
            break;
        case L_RAISE:
            oled_write_ln_P(PSTR("Arrows"), false);
            break;
        case L_ADJUST:
        case L_ADJUST|L_LOWER:
        case L_ADJUST|L_RAISE:
			oled_write_ln_P(PSTR("Fn"), false);
        case L_ADJUST|L_LOWER|L_RAISzzE:
            break;
    }
}


char keylog_str[24] = {};

const char code_to_name[60] = {
    ' ', ' ', ' ', ' ', 'a', 'b', 'c', 'd', 'e', 'f',
    'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
    'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
    '1', '2', '3', '4', '5', '6', '7', '8', '9', '0',
    'R', 'E', 'B', 'T', '_', '-', '=', '[', ']', '\\',
    '#', ';', '\'', '`', ',', '.', '/', ' ', ' ', ' '};

void set_keylog(uint16_t keycode, keyrecord_t *record) {
  char name = ' ';
    if ((keycode >= QK_MOD_TAP && keycode <= QK_MOD_TAP_MAX) ||
        (keycode >= QK_LAYER_TAP && keycode <= QK_LAYER_TAP_MAX)) { keycode = keycode & 0xFF; }
  if (keycode < 60) {
    name = code_to_name[keycode];
  }

  // update keylog
  snprintf(keylog_str, sizeof(keylog_str), "%dx%d, k%2d : %c",
           record->event.key.row, record->event.key.col,
           keycode, name);
}

void oled_render_keylog(void) {
    oled_write(keylog_str, false);
}

void render_bootmagic_status(bool status) {
    /* Show Ctrl-Gui Swap options */
    static const char PROGMEM logo[][2][3] = {
        {{0x97, 0x98, 0}, {0xb7, 0xb8, 0}},
        {{0x95, 0x96, 0}, {0xb5, 0xb6, 0}},
    };
    if (status) {
        oled_write_ln_P(logo[0][0], false);
        oled_write_ln_P(logo[0][1], false);
    } else {
        oled_write_ln_P(logo[1][0], false);
        oled_write_ln_P(logo[1][1], false);
    }
}

void oled_render_logo(void) {
    static const char PROGMEM crkbd_logo[] = {
        0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x8d, 0x8e, 0x8f, 0x90, 0x91, 0x92, 0x93, 0x94,
        0xa0, 0xa1, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf, 0xb0, 0xb1, 0xb2, 0xb3, 0xb4,
        0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca, 0xcb, 0xcc, 0xcd, 0xce, 0xcf, 0xd0, 0xd1, 0xd2, 0xd3, 0xd4,
        0};
    oled_write_P(crkbd_logo, false);
}

void oled_task_user(void) {
    if (is_master) {
        oled_render_layer_state();
        oled_render_keylog();
    } else {
        oled_render_logo();
    }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
    set_keylog(keycode, record);
  }
  return true;
}
#endif // OLED_DRIVER_ENABLE
