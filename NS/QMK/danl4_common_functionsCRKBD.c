#include "eeconfig.h"
#include "action_layer.h"
//#include "keymap_colemak.h"
extern keymap_config_t keymap_config;

// Fillers to make layering more clear
#define _____ KC_TRNS
#define XXXXX KC_NO
//#define C(n)    RCTL(n)
//#define CADKEY  RCTL(RALT(KC_DEL))
#define MIRR_Z LT(_MIRROR, KC_Z)
#define MIRR_B LT(_MIRRRB, KC_B)


// Macro name shortcuts
//#define WBASE TO(_WINBASE)
#define MIRROR MO(_MIRROR)
//#define WARROWS TD(WARR)
//#define WNUMPAD TD(WNUM)
#define FUNCTN MO(_FUNC)
#define XBASE TO(_OSXBASE)
#define XMIRROR MO(_XMIRROR)
//#define XARROWS TD(XARR)
//#define XNUMPAD TD(XNUM)
#define XFUNCTN MO(_XFUNC)
#define NUMPAD MO(_NUMPAD)
#define ARROWS MO(_ARROWS)
//#define NUMTAB LT(_NUMPAD, KC_TAB)//MO(_NUMPAD)//TD(NUMTB)//
//#define FN_CAPSL LT(_FUNC, KC_CAPSLOCK)
//#define MIRR_ESC LT(_MIRROR, KC_ESC)
#define FN_ESC LT(_FUNC, KC_ESC)
#define SYBL_ESC LT(_SYMBOL, KC_ESC)
#define MIRR_TAB LT(_MIRROR, KC_TAB)
#define MIRR_DEL LT(_MIRROR, KC_DEL)
#define MIRR_ESC LT(_MIRROR, KC_ESC)

//Definitive last final ultimate thumb cluster

//CORE - same 3 thumb keys for all boards
#define CTRL_SPC  LCTL_T(KC_SPC)	//left home (core)
#define WIN_ENT LGUI_T(KC_ENT)		//left far (core)
#define NUM_TAB LT(_NUMPAD, KC_TAB)	//left inner (core)
#define SHFT_SPC RSFT_T(KC_SPC)		//right home (core)
#define ALT_BS LALT_T(KC_BSPC)		//right far (core)
//arrows							//right inner (core)
//Extra 2 thumb keys on 38 key boards
//Mirror @ left
//ShiftBackspace @ left
#define SHFT_BS  LSFT_T(KC_BSPC)


//Left hand extras (on manuform)


//lEFT HAND STUFF:
#define CTRL_LEFT  LCTL_T(KC_LEFT)
#define CTRL_BS  LCTL_T(KC_BSPC)
#define ARR_TAB LT(_ARROWS, KC_TAB)
#define NUM_ENT LT(_NUMPAD, KC_ENT)
#define MIRR_SPC LT(_MIRROR, KC_SPC)
#define MIRR_ENT LT(_MIRROR, KC_ENT)
#define NUM_SPC LT(_NUMPAD, KC_SPC)

#define OSL_SYM OSL(_SYMBOL)
#define TGMOUSE TG(_MOUSE)
#define OSL_XNUM OSL(_XNUMPAD)
#define GUILAYER_F LT(_GUILAYER, KC_F)

/*
#define Z_UNDO    TD(ZUNDO)//W=Windows
#define X_REDO    TD(XREDO)
#define C_COPYCUT TD(CCPC)
#define V_PASTE   TD(VCPC)
#define Z_UNDO_X    TD(ZUNDO_X) //X = OSX
#define X_REDO_X    TD(XREDO_X)
#define C_COP#include "eeconfig.h"
#include "action_layer.h"
//#include "keymap_colemak.h"
extern keymap_config_t keymap_config;

// Fillers to make layering more clear
#define _____ KC_TRNS
#define XXXXX KC_NO
//#define C(n)    RCTL(n)
//#define CADKEY  RCTL(RALT(KC_DEL))
#define MIRR_Z LT(_MIRROR, KC_Z)
#define MIRR_B LT(_MIRRRB, KC_B)


// Macro name shortcuts
//#define WBASE TO(_WINBASE)
#define MIRROR MO(_MIRROR)
//#define WARROWS TD(WARR)
//#define WNUMPAD TD(WNUM)
#define FUNCTN MO(_FUNC)
#define XBASE TO(_OSXBASE)
#define XMIRROR MO(_XMIRROR)
//#define XARROWS TD(XARR)
//#define XNUMPAD TD(XNUM)
#define XFUNCTN MO(_XFUNC)
#define NUMPAD MO(_NUMPAD)
#define ARROWS MO(_ARROWS)
//#define NUMTAB LT(_NUMPAD, KC_TAB)//MO(_NUMPAD)//TD(NUMTB)//
//#define FN_CAPSL LT(_FUNC, KC_CAPSLOCK)
//#define MIRR_ESC LT(_MIRROR, KC_ESC)
#define FN_ESC LT(_FUNC, KC_ESC)
#define SYBL_ESC LT(_SYMBOL, KC_ESC)
#define MIRR_TAB LT(_MIRROR, KC_TAB)
#define MIRR_DEL LT(_MIRROR, KC_DEL)
#define MIRR_ESC LT(_MIRROR, KC_ESC)

//Definitive last final ultimate thumb cluster

//CORE - same 3 thumb keys for all boards
#define CTRL_SPC  LCTL_T(KC_SPC)	//left home (core)
#define WIN_ENT LGUI_T(KC_ENT)		//left far (core)
#define NUM_TAB LT(_NUMPAD, KC_TAB)	//left inner (core)
#define SHFT_SPC RSFT_T(KC_SPC)		//right home (core)
#define ALT_BS LALT_T(KC_BSPC)		//right far (core)
//arrows							//right inner (core)
//Extra 2 thumb keys on 38 key boards
//Mirror @ left
//ShiftBackspace @ left
#define SHFT_BS  LSFT_T(KC_BSPC)


//Left hand extras (on manuform)


//lEFT HAND STUFF:
#define CTRL_LEFT  LCTL_T(KC_LEFT)
#define CTRL_BS  LCTL_T(KC_BSPC)
#define ARR_TAB LT(_ARROWS, KC_TAB)
#define NUM_ENT LT(_NUMPAD, KC_ENT)
#define MIRR_SPC LT(_MIRROR, KC_SPC)
#define MIRR_ENT LT(_MIRROR, KC_ENT)
#define NUM_SPC LT(_NUMPAD, KC_SPC)

#define OSL_SYM OSL(_SYMBOL)
#define TGMOUSE TG(_MOUSE)
#define OSL_XNUM OSL(_XNUMPAD)
#define GUILAYER_F LT(_GUILAYER, KC_F)
*/
/*

#define Z_UNDO    TD(ZUNDO)//W=Windows
#define X_REDO    TD(XREDO)
#define C_COPYCUT TD(CCPC)
#define V_PASTE   TD(VCPC)
#define Z_UNDO_X    TD(ZUNDO_X) //X = OSX
#define X_REDO_X    TD(XREDO_X)
#define C_COPYCUT_X TD(CCPC_X)
#define V_PASTE_X   	TD(VCPC_X)
*/
//#define C_COPYCUT_X	TD(CCPC_X)
//#define V_PASTE_X 	TD(VPASTE_X)

#define CTRL_TAB CTL_T(KC_TAB)//
#define CTLDEL CTL_T(KC_DEL)
#define SFT_ENT RSFT_T(KC_ENT)




#define CTRL_S LCTL_T(KC_S)
#define CTRL_L LCTL_T(KC_L)
#define ALT_D LALT_T(KC_D)
#define ALT_K LALT_T(KC_K)
#define GUI_F LGUI_T(KC_F)//migt be obsolete
#define GUI_J LGUI_T(KC_J)
#define GUI_G LGUI_T(KC_G)
#define SHFT_SCL RSFT_T(KC_SCLN)
#define SHFT_A LSFT_T(KC_A)
//#define SHFT_DOT RSFT_T(KC_DOT)
//#define CTRL_COMM LCTL_T(KC_COMM)

//#define LANGSWP LALT(KC_LSFT)
//#define LANGSWPX LGUI(KC_SPC)

//#define ALT_TAB LALT_T(KC_TAB)

#define PARAN TD(PAR)
#define CURLY TD(CRL)
#define SQUAR TD(SQU)

#define SLASHES TD(SLSH)//SLASH on tap, backslash on doubletap
#define SHSQ TD(SSQ)//shift on hold, semicolon on tap, quotation mark on doubletap
#define CTRL_DEL LCTL_T(KC_DEL) //for Backspaced button when in arrow la.  oyer (del with ctrl for compatability with ctrl_ENTER on base layer)
void K_tap(uint16_t keycode){
    register_code(keycode);
    unregister_code(keycode);
};

void persistent_default_layer_set(uint16_t default_layer){
    eeconfig_update_default_layer(default_layer);
    default_layer_set(default_layer);
};

// Automatic number generation of important keywords
enum my_layers{
    // Layer numbers
	_WINBASE= 0,
//Mac _OSXBASE,	
	_GUILAYER,
	_NUMPAD,
	_ARROWS,
	_LEFTHAND,
	_XARROWS,
	_MIRROR,
	//_MOUSE,//MIRROR SHOULD BE UNIFORM BETWEEN MAC AND WIN, SO USED XMIRROR
	_XNUMPAD,
	_FUNC,
//Mac _XFUNC,
	_MIRRRB
	//_SYMBOL
};
enum my_keycodes{
	WBASE = SAFE_RANGE,
	//ARROWS,
	//NUMPAD,
	XARROWS,//= SAFE_RANGE,
	XNUMPAD,
	//Mac XFUNC,
	//Mac OSXBASE,
	CLEARMODS,
	NEW_SAFE_RANGE
};
enum my_tapdance{
	SHFT_CAP,
	CTRLB,
	CPYPST,
	CPYPST_X,
	// Tap_Dance nums
	WARR = 0,
	//NUMTB,//    WNUM,
	//XARR,
	//XNUM,
	SUP,
	CLS,
	SCL,
	QUO,
	// Tap dance paranthesis
	PAR,CRL,SQU,
	SSQ, //SHIFT ON HOLD SEMICOLON, QUOTATION MARK ON DOUBLE
	SLSH, //SLASH ON TAP, BACKSLASH ON DOUBLETAP
	// Copy paste
	CPC,
	CPC_X,
	//CUT COPY PASTE   ,CCPC,VCPC,VPASTE
	//VCPC_W,
	//VCPC_X,
	ZUNDO,
	XREDO,
	ZUNDO_X,
	XREDO_X
};

#ifdef AUDIO_ENABLE
#include "audio.h"
float tone_startup[][2]         = SONG(STARTUP_SOUND);
float tone_goodbye[][2]         = SONG(GOODBYE_SOUND);
float tone_colemak[][2]         = SONG(COLEMAK_SOUND);
float tone_swcole[][2]          = SONG(QWERTY_SOUND);
float tone_capslock_on[][2]     = SONG(CAPS_LOCK_ON_SOUND);
float tone_capslock_off[][2]    = SONG(CAPS_LOCK_OFF_SOUND);
float tone_ctrl_mod[][2]        = SONG(COIN_SOUND);
float tone_copy[][2]            = SONG(SCROLL_LOCK_ON_SOUND);
float tone_paste[][2]           = SONG(SCROLL_LOCK_OFF_SOUND);
float uniwin[][2]               = SONG(UNICODE_WINDOWS);
float unilin[][2]               = SONG(UNICODE_LINUX);
#endif
//#ifdef TAP_DANCE_ENABLE
//#define TAPPING_TERM 170
//uint32_t layer_state_set_user(uint32_t state) {
//return update_tri_layer_state(state,_ARROWS,_NUMPAD,_FUNC);
layer_state_t layer_state_set_user(layer_state_t state) {
	
  //state = update_tri_layer_state(state, _RAISE, _SYMB, _SPECIAL);
   //rgblight_set_layer_state(2, layer_state_cmp(state, _XNUMPAD));
   //rgblight_set_layer_state(3, layer_state_cmp(state, _XARROWS));
   //rgblight_set_layer_state(4, layer_state_cmp(state, _NUMPAD));
    state = update_tri_layer_state(state, _ARROWS,_NUMPAD,_FUNC);
  return state;
}
/*Mac
void dance_XNUMPAD_press(qk_tap_dance_state_t *state, void *user_data){// Called on each tap
  switch(state->count){      // Only turn the layer on once
    case 1:
        //layer_off(_XFUNC);
        layer_on(_XNUMPAD);
        update_tri_layer(_XNUMPAD, _XARROWS, _XFUNC);
        break;
  }
};
void dance_XNUMPAD_lift(qk_tap_dance_state_t *state, void *user_data){ // Called on release
  switch(state->count){
    case 1:         // Normal action. Turn off layers
        layer_off(_XNUMPAD);
        update_tri_layer(_XNUMPAD, _XARROWS, _XFUNC);
        //layer_off(_XFUNC);
        break;
  }
};



void dance_XARROWS_press(qk_tap_dance_state_t *state, void *user_data){// Called on tap
  switch(state->count){
    case 1:         // Turn on lower
        //layer_off(_XFUNC);
        layer_on(_XARROWS);
        update_tri_layer(_XNUMPAD, _XARROWS, _XFUNC);
        break;
  }
};
void dance_XARROWS_lift(qk_tap_dance_state_t *state, void *user_data){ // Called on release
  switch(state->count){
    case 1:         // Normal action. Turn off layers
        layer_off(_XARROWS);
        update_tri_layer(_XNUMPAD, _XARROWS, _XFUNC);
        //layer_off(_XFUNC);
        break;
    case 2:         // Turn on _UNICODES layer
        layer_off(_XARROWS);
        update_tri_layer(_XNUMPAD, _XARROWS, _XFUNC);
        //layer_on(_XFUNC);
        #ifdef AUDIO_ENABLE
            PLAY_SONG(tone_ctrl_mod);
        #endif
        break;
  }
};

*/

//////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////
// Shift vs capslock function
void caps_tap (qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        register_code (KC_LSFT);
    } else if (state->count == 2) {
        unregister_code (KC_LSFT);
        register_code (KC_CAPS);
    }
}
void caps_tap_end (qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        unregister_code (KC_LSFT);
    } else {
        unregister_code (KC_CAPS);
    }
}

// Parantheses
void paranthesis_dance (qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        SEND_STRING("()"); register_code(KC_LEFT); unregister_code(KC_LEFT);
        } else if (state->count == 2) {
            SEND_STRING("(");
        } else if (state->count == 3) {
            SEND_STRING(")");
    }
}
void curly_dance (qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        SEND_STRING("{}"); register_code(KC_LEFT); unregister_code(KC_LEFT);
        } else if (state->count == 2) {
            SEND_STRING("{");
        } else if (state->count == 3) {
            SEND_STRING("}");
    }
}

void square_dance (qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        SEND_STRING("[]"); register_code(KC_LEFT); unregister_code(KC_LEFT);
        } else if (state->count == 2) {
            SEND_STRING("[");
        } else if (state->count == 3) {
            SEND_STRING("]");
    }
}

enum {
  SINGLE_TAP = 1,
  SINGLE_HOLD = 2,
  DOUBLE_TAP = 3,
  DOUBLE_HOLD = 4,
  DOUBLE_SINGLE_TAP = 5, //send SINGLE_TAP twice - NOT DOUBLE_TAP
  // Add more enums here if you want for triple, quadruple, etc.
  TRIPLE_TAP = 6,
  TRIPLE_HOLD = 7
};

enum {
  SINGLE_TAP_OR_HOLD = 1,
  DOUBLE_TAP_OR_HOLD = 2,
};
typedef struct {
  bool is_press_action;
  int state;
} S_tap;

static S_tap ztap_state = {
  .is_press_action = true,
  .state = 0
};


// Copy or cut feature
void copy_cut_W (qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        register_code (KC_LCTL);
        register_code (KC_C);
        unregister_code (KC_C);
        unregister_code (KC_LCTL);
    } else if (state->count == 2) {
        register_code (KC_LCTL);
        register_code (KC_X);
        unregister_code (KC_X);
        unregister_code (KC_LCTL);
    }
}

// Copy or cut feature
void copy_cut_X (qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        register_code (KC_LGUI);
        register_code (KC_C);
        unregister_code (KC_C);
        unregister_code (KC_LGUI);
    } else if (state->count == 2) {
        register_code (KC_LGUI);
        register_code (KC_X);
        unregister_code (KC_X);
        unregister_code (KC_LGUI);
    }
}


int cur_dance (qk_tap_dance_state_t *state) {
  if ((state->count == 1) && (!state->pressed)) return SINGLE_TAP;
  else if ((state->count == 1) && (state->pressed)) return SINGLE_HOLD;
  else if ((state->count == 2) && (!state->pressed)) return DOUBLE_TAP;
  else if ((state->count == 2) && (state->pressed)) return DOUBLE_HOLD;
  else return 5; //magic number. At some point this method will expand to work for more presses
}



void z_reset_W (qk_tap_dance_state_t *state, void *user_data) {
  switch (ztap_state.state) {
	case SINGLE_TAP: unregister_code(KC_Z); break;
	case SINGLE_HOLD: unregister_code(KC_LCTRL); break;
	case DOUBLE_TAP:
		unregister_code(KC_Z);
		unregister_code(KC_LCTRL);
		break;
	case DOUBLE_HOLD: unregister_code(KC_LALT);break;
	case DOUBLE_SINGLE_TAP: unregister_code(KC_Z);
    case TRIPLE_TAP:
		unregister_code(KC_Y);
		unregister_code(KC_LCTRL);
		break;
  }
  ztap_state.state = 0;
}




void z_finished_W (qk_tap_dance_state_t *state, void *user_data) {
  ztap_state.state = cur_dance(state);
  switch (ztap_state.state) {
	case SINGLE_TAP: register_code(KC_Z); break;
	//case SINGLE_HOLD: register_code(KC_LCTRL); break;
	case DOUBLE_TAP:
		register_code(KC_LCTRL);
		register_code(KC_Z);
		break;
	//case DOUBLE_HOLD: register_code(KC_LALT); break;
	case DOUBLE_SINGLE_TAP: register_code(KC_Z); unregister_code(KC_Z); register_code(KC_Z); break;
    //case TRIPLE_TAP:
	//	register_code(KC_LCTRL);
	//	register_code(KC_Y);
	//	break;

  }
}


void z_reset_X (qk_tap_dance_state_t *state, void *user_data) {
  switch (ztap_state.state) {
	case SINGLE_TAP: unregister_code(KC_Z); break;
	case SINGLE_HOLD: unregister_code(KC_LGUI); break;
	case DOUBLE_TAP:
		unregister_code(KC_Z);
		unregister_code(KC_LGUI);
		break;
	case DOUBLE_HOLD: unregister_code(KC_LALT);break;
	case DOUBLE_SINGLE_TAP: unregister_code(KC_Z);
    case TRIPLE_TAP:
		unregister_code(KC_Y);
		unregister_code(KC_LGUI);
		break;
  }
  ztap_state.state = 0;
}




void z_finished_X (qk_tap_dance_state_t *state, void *user_data) {
  ztap_state.state = cur_dance(state);
  switch (ztap_state.state) {
	case SINGLE_TAP: register_code(KC_Z); break;
	case SINGLE_HOLD: register_code(KC_LGUI); break;
	case DOUBLE_TAP:
		register_code(KC_LGUI);
		register_code(KC_Z);
		break;
	case DOUBLE_HOLD: register_code(KC_LALT); break;
	case DOUBLE_SINGLE_TAP: register_code(KC_Z); unregister_code(KC_Z); register_code(KC_Z); break;
    case TRIPLE_TAP:
		register_code(KC_LGUI);
		register_code(KC_Y);
		break;

  }
}


//Shift on hold, ; on tap, ' on double tap
void SSQ_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (ztap_state.state) {
	case SINGLE_TAP:  unregister_code(KC_QUOT);   break;
	case SINGLE_HOLD: unregister_code(KC_RSHIFT); break;
	case DOUBLE_TAP:  unregister_code(KC_SCLN);   break;
  }
  ztap_state.state = 0;
}


void SSQ_finished (qk_tap_dance_state_t *state, void *user_data) {
  ztap_state.state = cur_dance(state);
  switch (ztap_state.state) {
	case SINGLE_TAP:  register_code(KC_QUOT);   break;
	case SINGLE_HOLD: register_code(KC_RSHIFT); break;
	case DOUBLE_TAP:  register_code(KC_SCLN);   break;
  }
}

qk_tap_dance_action_t tap_dance_actions[] = {
    //[WARR] = ACTION_TAP_DANCE_FN_ADVANCED(dance_ARROWS_press, NULL, dance_ARROWS_lift),
    //[WNUM] = ACTION_TAP_DANCE_FN_ADVANCED(dance_NUMPAD_press, NULL, dance_NUMPAD_lift),//delete 
    //Mac[XARR] = ACTION_TAP_DANCE_FN_ADVANCED(dance_XARROWS_press, NULL, dance_XARROWS_lift),
    //Mac[XNUM] = ACTION_TAP_DANCE_FN_ADVANCED(dance_XNUMPAD_press, NULL, dance_XNUMPAD_lift),
    //[SUP] = ACTION_TAP_DANCE_FN_ADVANCED(dance_super_press, dance_super_done, dance_super_lift),
    [CLS] = ACTION_TAP_DANCE_FN_ADVANCED( caps_tap, NULL, caps_tap_end ),
    // Shifting for double quote and semicolon
    [SCL] = ACTION_TAP_DANCE_DOUBLE( KC_SCLN, KC_COLN ),
    [QUO] = ACTION_TAP_DANCE_DOUBLE( KC_DQUO,KC_QUOT),
    [SLSH] = ACTION_TAP_DANCE_DOUBLE( KC_SLASH, KC_BSLASH),
    [SSQ] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, SSQ_finished, SSQ_reset),
    // Tap dances for paranthesis, which sends macros
    [PAR] = ACTION_TAP_DANCE_FN_ADVANCED( NULL, NULL, paranthesis_dance ),
    [CRL] = ACTION_TAP_DANCE_FN_ADVANCED( NULL, NULL, curly_dance ),
    [SQU] = ACTION_TAP_DANCE_FN_ADVANCED( NULL, NULL, square_dance ),//    WNUM,
    //[NUMTB] = ACTION_TAP_DANCE_FN_ADVANCED( NULL,  NUMTB_finished, NMTB_reset ),
    // Tap dance for copy/cutting

/*
    [CPC] = ACTION_TAP_DANCE_FN( copy_cut ),
    // Currency tap dance    ,[CUR] = ACTION_TAP_DANCE_FN( currency_symbols )



    //[VCPC_W]  = ACTION_TAP_DANCE_FN_ADVANCED( NULL, v_finished_W, v_reset_W ),
    //[CCPC_W]  = ACTION_TAP_DANCE_FN_ADVANCED( NULL, c_finished_W, c_reset_W ),
    //[VPASTE_W]= ACTION_TAP_DANCE_DOUBLE( KC_V, LCTL(KC_V))*/
    [ZUNDO] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, z_finished_W, z_reset_W),
    [XREDO] = ACTION_TAP_DANCE_DOUBLE( KC_X, LCTL(KC_Y)),

    //[VCPC_X]  = ACTION_TAP_DANCE_FN_ADVANCED( NULL, v_finished_X, v_reset_X ),
    //[CCPC_X]  = ACTION_TAP_DANCE_FN_ADVANCED( NULL, c_finished_X, c_reset_X ),
    //[VPASTE_X]= ACTION_TAP_DANCE_DOUBLE( KC_V, LGUI(KC_V))*/
    [ZUNDO_X] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, z_finished_X, z_reset_X),
    [XREDO_X] = ACTION_TAP_DANCE_DOUBLE( KC_X, LGUI(KC_Y)),
};
//#endif



static uint16_t key_timer;
static uint8_t  caps_status = 0;
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
	case CLEARMODS:
        if(record->event.pressed){
			clear_mods();
			layer_clear();		//layer_on(_WINBASE);
        }
        return false;
        break;
        
    case WBASE:
        if(record->event.pressed){
            persistent_default_layer_set(1UL<<_WINBASE);
            #ifdef AUDIO_ENABLE
              PLAY_SONG(tone_colemak);
            #endif
		//layer_on(_WINBASE);
        }        
        return false;
        break;
  /*
    case XARROWS:
        if(record->event.pressed){
            layer_on(_XARROWS);
            update_tri_layer(_XNUMPAD, _XARROWS, _XFUNC);
        } else {
            layer_off(_XARROWS);
            update_tri_layer(_XNUMPAD, _XARROWS, _XFUNC);
        }
        return false;
        break;
    case XNUMPAD:
        if(record->event.pressed){
            layer_on(_XNUMPAD);
            update_tri_layer(_XNUMPAD, _XARROWS, _XFUNC);
        } else {
            layer_off(_XNUMPAD);
            update_tri_layer(_XNUMPAD, _XARROWS, _XFUNC);
        }
        return false;
        break;
*/
    case SHFT_CAP:
        if(record->event.pressed){
            key_timer = timer_read();               // if the key is being pressed, we start the timer.
            register_code(KC_LSHIFT);
        } else {                                    // this means the key was just released (tap or "held down")
            if(timer_elapsed(key_timer) < 152){     // Time in ms, the threshold we pick for counting something as a tap.
                K_tap(KC_CAPS);
                if(caps_status == 0){
                    caps_status = 1;
                    #ifdef AUDIO_ENABLE
                        PLAY_SONG(tone_capslock_on);
                    #endif
                } else {
                    caps_status = 0;
                    #ifdef AUDIO_ENABLE
                        PLAY_SONG(tone_capslock_off);
                    #endif
                }
            }
            unregister_code(KC_LSHIFT);
        }
        return false;
        break;

    case CPYPST:                                    // One key copy/paste
        if(record->event.pressed){
            key_timer = timer_read();
        } else {
            if (timer_elapsed(key_timer) > 152) {   // Hold, copy
                register_code(KC_LCTL);
                K_tap(KC_C);
                unregister_code(KC_LCTL);
                #ifdef AUDIO_ENABLE
                    PLAY_SONG(tone_copy);
                #endif
            } else {                                // Tap, paste
                register_code(KC_LCTL);
                K_tap(KC_V);
                unregister_code(KC_LCTL);
                #ifdef AUDIO_ENABLE
                    PLAY_SONG(tone_paste);
                #endif
            }
        }
        return false;
        break;
    case CPYPST_X:                                    // One key copy/paste
        if(record->event.pressed){
            key_timer = timer_read();
        } else {
            if (timer_elapsed(key_timer) > 152) {   // Hold, copy
                register_code(KC_LGUI);
                K_tap(KC_C);
                unregister_code(KC_LGUI);
                #ifdef AUDIO_ENABLE
                    PLAY_SONG(tone_copy);
                #endif
            } else {                                // Tap, paste
                register_code(KC_LGUI);
                K_tap(KC_V);
                unregister_code(KC_LGUI);
                #ifdef AUDIO_ENABLE
                    PLAY_SONG(tone_paste);
                #endif
            }
        }
        return false;
        break;

  }
  return true;
};

void matrix_init_user(void){        // Run once at startup
    #ifdef AUDIO_ENABLE
        _delay_ms(50); // gets rid of tick
        PLAY_SONG(tone_startup);
    #endif
}

#ifdef AUDIO_ENABLE
void play_goodbye_tone(void){
  PLAY_SONG(tone_goodbye);
  _delay_ms(150);
}

void shutdown_user(){
    PLAY_SONG(tone_goodbye);
    _delay_ms(150);
    stop_all_notes();
}

void music_on_user(void){           // Run when the music layer is turned on
    PLAY_SONG(tone_startup);
}

void music_off_user(void){          // Run when music is turned off
	PLAY_SONG(tone_goodbye);
}

#endif


#ifdef AUDIO_ENABLE
#include "audio.h"
float tone_startup[][2]         = SONG(STARTUP_SOUND);
float tone_goodbye[][2]         = SONG(GOODBYE_SOUND);
float tone_colemak[][2]         = SONG(COLEMAK_SOUND);
float tone_swcole[][2]          = SONG(QWERTY_SOUND);
float tone_capslock_on[][2]     = SONG(CAPS_LOCK_ON_SOUND);
float tone_capslock_off[][2]    = SONG(CAPS_LOCK_OFF_SOUND);
float tone_ctrl_mod[][2]        = SONG(COIN_SOUND);
float tone_copy[][2]            = SONG(SCROLL_LOCK_ON_SOUND);
float tone_paste[][2]           = SONG(SCROLL_LOCK_OFF_SOUND);
float uniwin[][2]               = SONG(UNICODE_WINDOWS);
float unilin[][2]               = SONG(UNICODE_LINUX);
#endif
