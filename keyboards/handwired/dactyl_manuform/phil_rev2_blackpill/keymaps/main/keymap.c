#include QMK_KEYBOARD_H

enum my_keycodes {
  DPI_INC = SAFE_RANGE,
  DPI_DEC,
  SEN_INC,
  SEN_DEC,
  DW_DEC, 
  DW_INC, 
  DECEL_DEC,
  DECEL_INC
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_5x7(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_LBRC, CW_TOGG, KC_A, KC_S, KC_D, KC_F, KC_G, KC_LPRN, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_LCTL, KC_LGUI, KC_LEFT, KC_RGHT, KC_LSFT, LT(3,KC_DEL), KC_LCTL, KC_LALT, KC_ENT, DM_PLY1, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_GRV, KC_RBRC, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSLS, KC_RPRN, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_BTN1, KC_BTN2, KC_PSCR, LGUI(KC_L), LT(2,KC_ENT), KC_SPC, KC_INS, MO(2), DM_PLY2, KC_WREF),
	[1] = LAYOUT_5x7(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_TAB, KC_Q, KC_W, KC_F, KC_P, KC_B, KC_LBRC, CW_TOGG, KC_A, KC_R, KC_S, KC_T, KC_G, KC_LPRN, KC_LSFT, KC_Z, KC_X, KC_C, KC_D, KC_V, KC_LCTL, KC_LGUI, KC_LEFT, KC_RGHT, KC_LSFT, LT(3,KC_DEL), KC_LCTL, KC_LALT, KC_ENT, DM_PLY1, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_GRV, KC_RBRC, KC_J, KC_L, KC_U, KC_Y, KC_SCLN, KC_BSLS, KC_RPRN, KC_M, KC_N, KC_E, KC_I, KC_O, KC_QUOT, KC_K, KC_H, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_BTN1, KC_BTN2, KC_PSCR, LGUI(KC_L), LT(2,KC_ENT), KC_SPC, KC_INS, MO(2), DM_PLY2, KC_WREF),
	[2] = LAYOUT_5x7(KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_ACL0, KC_ACL1, KC_ACL2, KC_MS_U, KC_TRNS, KC_BRIU, TO(4), DW_DEC, DW_INC, KC_MS_L, KC_MS_D, KC_MS_R, KC_BRID, DF(0), DECEL_DEC, DECEL_INC, DPI_DEC, DPI_INC, SEN_DEC, SEN_INC, KC_MSTP, KC_MPLY, KC_MPRV, KC_MNXT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, DM_REC1, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, DB_TOGG, TO(3), LCTL(KC_BSPC), KC_BSPC, KC_UP, KC_DEL, LCTL(KC_DEL), KC_TRNS, DF(1), LCTL(KC_LEFT), KC_LEFT, KC_DOWN, KC_RGHT, LCTL(KC_RGHT), KC_TRNS, KC_PGUP, KC_HOME, KC_DOWN, KC_END, KC_PGDN, KC_TRNS, KC_BTN1, KC_BTN2, KC_MUTE, QK_BOOT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, DM_REC2, KC_TRNS),
	[3] = LAYOUT_5x7(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, QK_BOOT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NUM, KC_CALC, LSFT(KC_5), KC_PSLS, KC_PMNS, KC_EQL, KC_TRNS, KC_TRNS, KC_LPRN, KC_7, KC_8, KC_9, KC_PAST, KC_TRNS, KC_TRNS, KC_RPRN, KC_4, KC_5, KC_6, KC_PPLS, KC_TRNS, KC_COLN, KC_1, KC_2, KC_3, KC_ENT, KC_TRNS, KC_BTN1, KC_PDOT, KC_COMM, TO(0), KC_TRNS, KC_0, LSFT(KC_4), LSFT(KC_5), KC_TRNS, KC_TRNS),
	[4] = LAYOUT_5x7(KC_TRNS, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_TRNS, KC_CAPS, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_TRNS, KC_LSFT, KC_A, KC_S, KC_D, KC_F, KC_G, KC_TRNS, KC_LCTL, KC_Z, KC_X, KC_C, KC_V, KC_LCTL, KC_NO, KC_I, KC_M, KC_SPC, KC_ESC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, TO(0), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[5] = LAYOUT_5x7(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_BTN1, MO(2), KC_BTN2, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_BTN1, KC_BTN2, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)
};

// Some boilerplate from QMK Configurator that I don't think is actually used.
#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
    const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)

// Layer names for each layer
enum layer_names { 
	_QWERTY,
	_COLEMAK,
	_FN,
	_NUM,
	_GAME,
    _MOUSE
};


// *******************
// Customize Caps Word
// *******************
// This is copied from the default documented here: https://github.com/qmk/qmk_firmware/blob/master/docs/feature_caps_word.md
// All I really want is to stop the - key from being shifted. Drives me nuts. 
bool caps_word_press_user(uint16_t keycode) {
    switch (keycode) {
        // Keycodes that continue Caps Word, with shift applied.
        case KC_A ... KC_Z:
        //case KC_MINS:
            add_weak_mods(MOD_BIT(KC_LSFT));  // Apply shift to next key.
            return true;

        // Keycodes that continue Caps Word, without shifting.
        case KC_1 ... KC_0:
        case KC_BSPC:
        case KC_DEL:
        case KC_UNDS:
        case KC_MINS:
            return true;

        default:
            return false;  // Deactivate Caps Word.
    }
}
// *********************
// Dynamic macro control
// *********************
#ifdef DYNAMIC_MACRO_ENABLE
bool macro_1_recording = false;
bool macro_2_recording = false;
static bool macro_1_recorded = false;
static bool macro_2_recorded = false;
void dynamic_macro_record_start_user(int8_t direction) {
    if (direction == 1) {
        macro_1_recording = true;
    }
    else if (direction == -1) {
        macro_2_recording = true;
    }
}
void dynamic_macro_record_end_user(int8_t direction) {
    if (direction == 1) {
        macro_1_recording = false;
        macro_1_recorded = true;
    }
    else if (direction == -1) {
        macro_2_recording = false;
        macro_2_recorded = true;
    }
}
void dynamic_macro_play_user(int8_t direction) {
    if (direction == 1 && macro_1_recorded == false) {
        SEND_STRING(SS_TAP(X_SPACE) SS_DELAY(10) SS_TAP(X_DOWN) SS_DELAY(10) SS_TAP(X_DOWN) SS_DELAY(10) SS_TAP(X_RIGHT) SS_DELAY(10) SS_TAP(X_SPACE));
    }
    else if (direction == -1 && macro_2_recorded == false) {
        SEND_STRING(":-)");
    }
}
#endif // DYNAMIC_MACRO_ENABLE


// ***********
// Encoder Use
// ***********
#ifdef ENCODER_ENABLE

// Super Encoder Timer
uint16_t encoder_timeout = 900;
uint16_t encoder_timer = 0;
bool is_alt_tab_active = false;
bool is_backspace_active = false;

// Reset mode when timer expired
void msu_encoder_super_timer(void) { // To be executed in matrix_scan_user.
    if (is_alt_tab_active) {
        if (timer_elapsed(encoder_timer) > encoder_timeout) {
            unregister_code(KC_LALT);
            is_alt_tab_active = false;
        }
    }
    if (is_backspace_active) {
        if (timer_elapsed(encoder_timer) > encoder_timeout) {
            is_backspace_active = false;
        }
    }
}

/* The encoder_update_user is a function.
 * It'll be called by QMK every time you turn the encoder.
 *
 * The index parameter tells you which encoder was turned. If you only have
 * one encoder, the index will always be zero.
 * 
 * The clockwise parameter tells you the direction of the encoder. It'll be
 * true when you turned the encoder clockwise, and false otherwise.
 */
bool encoder_update_user(uint8_t index, bool clockwise) {
    
    // First encoder - Super alt-tab and super-backspace
    if (index == 0) { 
        
        // In _FN Layer, volume
        if (layer_state_is(_FN)) {
            (clockwise) ? tap_code16(KC_AUDIO_VOL_UP) : tap_code16(KC_AUDIO_VOL_DOWN);
        }

        // Fancy supers
        else if (clockwise) {
            
            // Super backspace mode
            if (is_backspace_active) {
                tap_code16(C(KC_Z)); // Undo
            }
            
            // Super alt-tab mode
            else if (is_alt_tab_active) {
                tap_code16(KC_TAB);               
            }

            // Otherwise activate super alt-tab mode
            else {
                is_alt_tab_active = true;
                register_code(KC_LALT);
                tap_code16(KC_TAB);
            }
        } 
        else { // Counterclockwise
            
            // Super alt-tab mode
            if (is_alt_tab_active) {
                tap_code16(S(KC_TAB)); // Alt is already registered
            }

            // Otherwise activate (or just continue) super backspace mode
            else {
                is_backspace_active = true;
                tap_code16(KC_BSPC);
            }
        }

        // Update the timer regardless of which direction the encoder was turned or what mode we are in
        encoder_timer = timer_read();
    } 
    
    // Second encoder - ctrl-tab
    else if (index == 1) {
        if (clockwise) {
            tap_code16(C(KC_TAB));
        } 
        else {
            tap_code16(S(C(KC_TAB)));
        }
    }
    return false;
}
#endif // ENCODER_ENABLE


// *****************
// Trackball control
// *****************
#ifdef POINTING_DEVICE_ENABLE

// IInitialize custom trackball features
#ifndef SCROLL_DIVISOR_H
#define SCROLL_DIVISOR_H 8.0  // Modify these values to adjust the scrolling speed (horizontal)
#endif
#ifndef SCROLL_DIVISOR_V
#define SCROLL_DIVISOR_V 8.0  // Modify these values to adjust the scrolling speed (vertical)
#endif
#ifndef SNIPING_DIVISOR
#define SNIPING_DIVISOR 10  // When in sniping mode, how much slower to go
#endif
#ifndef PMW33XX_CPI
#define PMW33XX_CPI  1200     // Default 1200
#endif
#ifndef DPI_INCREMENT
#define DPI_INCREMENT 150     // Percent increase when increasing DPI
#endif
#ifndef DPI_DECREMENT
#define DPI_DECREMENT 66      // Percent to multiply by when decreasing DPI
#endif
#ifndef SEN_INITIAL
#define SEN_INITIAL 1000      // Initial Sensitivity (percent times 10 - so I can use an int)
#endif
#ifndef SEN_INCREMENT
#define SEN_INCREMENT 150     // Percent increase when increasing Sensitivity
#endif
#ifndef SEN_DECREMENT
#define SEN_DECREMENT 66      // Percent to multiply by when decreasing Sensitivity
#endif
#ifndef DECEL_WIDTH
#define DECEL_WIDTH 40        // Width of precision deceleration curve 
#endif
#ifndef DECEL_STRENGTH
#define DECEL_STRENGTH 20     // Deceleration factor (higher is more extreme)
#endif
uint16_t current_dpi = PMW33XX_CPI;
uint16_t first_dpi = 0;
uint16_t init_dpi = 1;
uint16_t detected_dpi = 1;
bool reported = false;
uint16_t current_sen = SEN_INITIAL;
uint8_t  current_decel_width = DECEL_WIDTH;
uint8_t  current_decel_strength = DECEL_STRENGTH; 
// Some of the variables above are initiated at pointing_device_init_user defined near the bottom of this file.

#include <math.h> // Needed for the floor, fmin, and fmax functions below

// Custom keycodes for mouse functions 
bool process_record_user(uint16_t keycode, keyrecord_t* record) {
    switch (keycode) {
              
        // DPI / CPI - affects how the trackball sensor tracks/reports motion
        case DPI_INC:
            if (record->event.pressed) {
                if (!reported) {
                    dprintf("First DPI: %u. After Initialization: %u\n", first_dpi, init_dpi);
                    reported = true;
                }
                detected_dpi = pointing_device_get_cpi();
                wait_ms(50); 
                dprintf("DPI_INC was pressed. Original DPI configured: %u. Original DPI detected: %u\n", current_dpi, detected_dpi);
                current_dpi = fmin(PMW33XX_CPI_MAX, floor(((current_dpi * DPI_INCREMENT / 100) / PMW33XX_CPI_STEP) + 0.5) * PMW33XX_CPI_STEP);
                pointing_device_set_cpi(current_dpi);
                wait_ms(50); 
                detected_dpi = pointing_device_get_cpi();
                wait_ms(50); 
                dprintf("New DPI configured: %u. New DPI detected: %u\n", current_dpi, detected_dpi);
            }
            return false;
        case DPI_DEC:
            if (record->event.pressed) {
                dprintf("DPI_DEC was pressed. Original DPI: %u.\n", current_dpi);
                current_dpi = fmax(PMW33XX_CPI_MIN, floor(((current_dpi * DPI_DECREMENT / 100) / PMW33XX_CPI_STEP) + 0.5) * PMW33XX_CPI_STEP);
                dprintf("New DPI: %u.\n", current_dpi);
                pointing_device_set_cpi(current_dpi);
            }
            return false;
        
        // Sensitivity - mathematically adjust how sensitive we are to what the sensor reports
        case SEN_INC:
            if (record->event.pressed) {
                dprintf("SEN_INC was pressed. Original SEN: %u.\n", current_sen);
                current_sen = fmin(65535, (uint16_t)current_sen * SEN_INCREMENT / 100);
                dprintf("New SEN: %u.\n", current_sen);
            }
            return false;
        case SEN_DEC:
            if (record->event.pressed) {
                dprintf("SEN_DEC was pressed. Original SEN: %u.\n", current_sen);
                current_sen = fmax(2, (uint16_t)current_sen * SEN_DECREMENT / 100);
                dprintf("New SEN: %u.\n", current_sen);
            }
            return false;
        
        // Width of the decel curve... IE do only super slow movements track more precise, or do some medium movements get reduced sensitivity as well?
        case DW_DEC:
              if (record->event.pressed) {
                dprintf("DW_DEC was pressed. Original Decel Width: %u.\n", current_decel_width);
                current_decel_width -= 1;
                dprintf("New Decel Width: %u.\n", current_decel_width);
            }
            return false;    
        case DW_INC:
              if (record->event.pressed) {
                dprintf("DW_INC was pressed. Original Decel Width: %u.\n", current_decel_width);
                current_decel_width += 1;
                dprintf("New Decel Width: %u.\n", current_decel_width);
            }
            return false;      
        
        // How significantly should cursor movement be desensitized when trying to move the trackball slowly?
        case DECEL_DEC:
              if (record->event.pressed) {
                dprintf("DECEL_DEC was pressed. Original Decel Strength: %u.\n", current_decel_strength);
                current_decel_strength -= 1;
                dprintf("New Decel Strength: %u.\n", current_decel_strength);
            }
            return false;    
        case DECEL_INC:
              if (record->event.pressed) {
                dprintf("DECEL_INC was pressed. Original Decel Strength: %u.\n", current_decel_strength);
                current_decel_strength += 1;
                dprintf("New Decel Strength: %u.\n", current_decel_strength);
            }
            return false;    
    }
    return true; // Normal handling for all other keycodes not returned above.
}

// Customize Auto Mouse to treat back and forward browser buttons as mouse keys
bool is_mouse_record_user(uint16_t keycode, keyrecord_t* record) {
    switch(keycode) {
        case KC_WBAK:
            return true;
        case KC_WFWD:
            return true;
        default:
            return false;
    }
    return false;
}


// Decel Algorithm
float decel(int16_t d) {
    if (d > 0) {
        return d*(1/(1+exp(-((float)d/current_decel_width*10-current_decel_strength/10))));
    }
    else {
        return d*(1/(1+exp(-((float)-d/current_decel_width*10-current_decel_strength/10))));
    }
    return 0;
}

// Variables to store accumulated scroll and precise movement values
float precision_accumulated_x = 0;
float precision_accumulated_y = 0;
float scroll_accumulated_h = 0;
float scroll_accumulated_v = 0;
float sniping_accumulated_x = 0;
float sniping_accumulated_y = 0; 
float movement_accumulated_x = 0;
float movement_accumulated_y = 0; 

// Manipulate mouse reports
report_mouse_t pointing_device_task_user(report_mouse_t mouse_report) {
    
    // Skip everything if there is no movement to manipulate
    if (mouse_report.x == 0 && mouse_report.y == 0) {
        return mouse_report;
    }

    dprintf("Initial: %3d,%3d;  ", mouse_report.x, mouse_report.y);

    // Precision Decelleration
    // Calculate and accumulate precise movement
    precision_accumulated_x += decel(mouse_report.x);
    precision_accumulated_y += decel(mouse_report.y);
    // Assign integer parts of accumulated movement values to the mouse report
    mouse_report.x = (int16_t)precision_accumulated_x;
    mouse_report.y = (int16_t)precision_accumulated_y;
    dprintf("Decel: %3d,%3d;  ", mouse_report.x, mouse_report.y);
    // Update accumulated movement values by subtracting the integer parts
    precision_accumulated_x -= (int16_t)precision_accumulated_x;
    precision_accumulated_y -= (int16_t)precision_accumulated_y;


    // Scrolling while in the _FN layer (which is just better than dedicating a separate key for that!)
    if (layer_state_is(_FN)) {
        // Calculate and accumulate scroll values based on mouse movement and divisors
        #ifdef POINTING_DEVICE_INVERT_Y
            scroll_accumulated_v -= (float)mouse_report.y / SCROLL_DIVISOR_V;
        #else     
            scroll_accumulated_v += (float)mouse_report.y / SCROLL_DIVISOR_V;
        #endif // POINTING_DEVICE_INVERT_Y
        #ifdef POINTING_DEVICE_INVERT_X
            scroll_accumulated_h -= (float)mouse_report.x / SCROLL_DIVISOR_H;
        #else
            scroll_accumulated_h += (float)mouse_report.x / SCROLL_DIVISOR_H;
        #endif // POINTING_DEVICE_INVERT_X 
        // Assign integer parts of accumulated scroll values to the mouse report
        mouse_report.h = (int16_t)scroll_accumulated_h;
        mouse_report.v = (int16_t)scroll_accumulated_v;
        dprintf("Scroll: %3d,%3d;  ", mouse_report.h, mouse_report.v);
        // Update accumulated scroll values by subtracting the integer parts
        scroll_accumulated_h -= (int16_t)scroll_accumulated_h;
        scroll_accumulated_v -= (int16_t)scroll_accumulated_v;
        // Clear the X and Y values of the mouse report
        mouse_report.x = 0;
        mouse_report.y = 0;
    }

    // And we'll also do sniping mouse movements when in the _NUM layer.
    else if (layer_state_is(_NUM)) {
        // Calculate and accumulate precise movement
        sniping_accumulated_x += (float)mouse_report.x / SNIPING_DIVISOR;
        sniping_accumulated_y += (float)mouse_report.y / SNIPING_DIVISOR;
        // Assign integer parts of accumulated movement values to the mouse report
        mouse_report.x = (int16_t)sniping_accumulated_x;
        mouse_report.y = (int16_t)sniping_accumulated_y;
        dprintf("Prec: %3d,%3d;  ", mouse_report.x, mouse_report.y);
        // Update accumulated movement values by subtracting the integer parts
        sniping_accumulated_x -= (int16_t)sniping_accumulated_x;
        sniping_accumulated_y -= (int16_t)sniping_accumulated_y;
    }

    // Sensitivity Multiplier
    movement_accumulated_x += (float)mouse_report.x * current_sen / 1000;
    movement_accumulated_y += (float)mouse_report.y * current_sen / 1000;    
    // Assign integer parts of accumulated movement values to the mouse report
    mouse_report.x = (int16_t)movement_accumulated_x;
    mouse_report.y = (int16_t)movement_accumulated_y;
    dprintf("Sens: %3d,%3d;  ", mouse_report.x, mouse_report.y);
    // Update accumulated movement values by subtracting the integer parts
    movement_accumulated_x -= (int16_t)movement_accumulated_x;
    movement_accumulated_y -= (int16_t)movement_accumulated_y;
    
    // DONE
    dprintf("Final: %3d,%3d\n", mouse_report.x, mouse_report.y);
    return mouse_report;
}
#endif // POINTING_DEVICE_ENABLE


// ************
// OLED Control
// ************
#ifdef OLED_ENABLE

// Set up the OLED
static bool oled_logo_on = true;
oled_rotation_t oled_init_user(oled_rotation_t rotation) { 
    return OLED_ROTATION_180;
}

static uint32_t oled_logo_timer;
void kpiu_oled_timer(void) { oled_logo_timer = timer_read32(); }

// Logo Definition
static void render_logo(void) {
    static const char PROGMEM qmk_logo[] = {
        0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8A, 0x8B, 0x8C, 0x8D, 0x8E, 0x8F, 0x90, 0x91, 0x92, 0x93, 0x94,
        0xA0, 0xA1, 0xA2, 0xA3, 0xA4, 0xA5, 0xA6, 0xA7, 0xA8, 0xA9, 0xAA, 0xAB, 0xAC, 0xAD, 0xAE, 0xAF, 0xB0, 0xB1, 0xB2, 0xB3, 0xB4,
        0xC0, 0xC1, 0xC2, 0xC3, 0xC4, 0xC5, 0xC6, 0xC7, 0xC8, 0xC9, 0xCA, 0xCB, 0xCC, 0xCD, 0xCE, 0xCF, 0xD0, 0xD1, 0xD2, 0xD3, 0xD4, 0x00
    };

    oled_write_P(qmk_logo, false);
}

// Runtime
bool oled_task_user(void) {
    
    // Logo on boot
    if (timer_elapsed32(oled_logo_timer) < 2000 && oled_logo_on == true) {
        oled_set_brightness(255);
        render_logo();
    }

    else if (timer_elapsed32(oled_logo_timer) < 10000 && oled_logo_on == true) {
        oled_set_brightness(32);
        render_logo();
    }
    
    // Host Keyboard Layer Status
    else {
        if (oled_logo_on) {
            void oled_clear(void);
            oled_write_P(PSTR("\n\n\n\n"), false);
            oled_set_brightness(128);
            oled_logo_on = false;
        }

        oled_write_P(PSTR("Layer: "), false);

        switch (get_highest_layer(layer_state | default_layer_state)) {
            case _QWERTY:
                oled_write_P(PSTR("Default\n"), false);
                break;
            case _COLEMAK: 
                oled_write_P(PSTR("Colemak\n"), false);
                break;
            case _FN:
                oled_write_P(PSTR("Function\n"), false);
                break;
            case _NUM:
                oled_write_P(PSTR("10-Key\n"), false);
                break;
            case _GAME:
                oled_write_P(PSTR("Gaming\n"), false);
                break;
            case _MOUSE:
                oled_write_P(PSTR("Mouse\n"), false);
                break;
            default:
                oled_write_P(PSTR("Undefined\n"), false);
                break;
        }
        
        // Macro Recording
        #ifdef DYNAMIC_MACRO_ENABLE
        if (macro_1_recording && macro_2_recording) {
            oled_write_P(PSTR("MACROS BOTH RECORDING\n"), false);
            // oled_write_P(PSTR("       WOW!\n"), false);
        }
        else if (macro_1_recording) {
            oled_write_P(PSTR("MACRO 1 RECORDING\n"), false);
        }
        else if (macro_2_recording) {
            oled_write_P(PSTR("MACRO 2 RECORDING\n"), false);
        }
        #endif // DYNAMIC_MACRO_ENABLE

        // Trackball DPI Reporting
        #ifdef POINTING_DEVICE_ENABLE
        oled_write_P(PSTR("DPI:"), false);
        oled_write_P(PSTR(get_u16_str(current_dpi, ' ')), false);
        oled_write_P(PSTR(" SEN:"), false);
        oled_write_P(PSTR(get_u16_str((uint16_t)current_sen / 10, ' ')), false);
        oled_write_P(PSTR("\n"), false);
        #endif
        
        // Host Keyboard LED Status (mostly)
        led_t led_state = host_keyboard_led_state();
        if (!led_state.num_lock) {
            oled_write_P(PSTR("Num lock OFF\n"), false);
        }
        if (is_caps_word_on()) {
            oled_write_P(PSTR("CAPS WORD ON\n"), false);
        }
        if (led_state.caps_lock || led_state.scroll_lock) { // two on one row
            oled_write_P(led_state.caps_lock ? PSTR("CAPS LOCK  ") : PSTR(""), false);
            oled_write_P(led_state.scroll_lock ? PSTR("SCR\n") : PSTR("\n"), false);
        }

        // Clear the rest of the page
        oled_advance_page(true);
    }
    return false;
}
#endif // OLED_ENABLE


// custom function for temporary sensor troubleshooting
uint8_t motion_found = 0x00;
uint8_t motion_stored = 0x00;
uint8_t squal_found = 0x00; 
uint16_t squal_frequency = 1000;
uint16_t squal_timer = 0;
void kpiu_squal_timer(void) { squal_timer = timer_read(); } // To be executed in keyboard_post_init_user.
uint8_t observation_found = 0x00;

void msu_debug_sensor_custom(void) {
    
    // Motion
/*     motion_found = pmw33xx_read(0, REG_Motion);
    if (motion_found != motion_stored) {
        dprintf("Motion bit has been set to %x.\n", motion_found);
        motion_stored = motion_found;
    } */

    // Squal - (measures quality of image capture)
    if (timer_elapsed(squal_timer) > squal_frequency) {
        squal_timer = timer_read(); 
        dprintf("Squal features: %4d; Thresh: %02x; SROM Observation: %02x; SROM_ID: %02x; CPI Read: %5d\n", pmw33xx_read(0, REG_SQUAL) * 8, pmw33xx_read(0, REG_Min_SQ_Run), pmw33xx_read(0, REG_Observation), pmw33xx_read(0, REG_SROM_ID), pointing_device_get_cpi());
        //dprintf("Observation value: %s\n", pmw33xx_read(0, REG_Observation) && 0x20 ? "SROM Running" : "Not running");
        pmw33xx_write(0, REG_Observation, 0x00);
        //dprintf("SROM_ID: %u\n", pmw33xx_read(0, REG_SROM_ID));
        
    }
    
}


// Execute all my custom functions neatly organized above inside the proper API calls
void matrix_scan_user(void) {
    msu_encoder_super_timer();
    msu_debug_sensor_custom();
}

void keyboard_post_init_user(void) {
    // Debug levels
    debug_enable = false;
    debug_matrix = false;
    debug_keyboard = false;
    debug_mouse = false;
    
    kpiu_oled_timer();
    kpiu_squal_timer(); 
}

void pointing_device_init_user(void) { 
    first_dpi = pointing_device_get_cpi();
    pointing_device_set_cpi(current_dpi);
    init_dpi = pointing_device_get_cpi();
    
    //set_auto_mouse_layer(<mouse_layer>); // only required if AUTO_MOUSE_DEFAULT_LAYER is not set to index of <mouse_layer>
    set_auto_mouse_enable(true);         // always required before the auto mouse feature will work

}
