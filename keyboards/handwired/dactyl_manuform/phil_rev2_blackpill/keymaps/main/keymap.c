#include QMK_KEYBOARD_H

enum my_keycodes {
  DPI_INC = SAFE_RANGE,
  DPI_DEC
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_5x7(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_LBRC, CW_TOGG, KC_A, KC_S, KC_D, KC_F, KC_G, KC_LPRN, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_LCTL, KC_LGUI, KC_LEFT, KC_RGHT, KC_LSFT, LT(3,KC_DEL), KC_LCTL, KC_LALT, KC_ENT, DM_PLY1, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_GRV, KC_RBRC, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSLS, KC_RPRN, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_BTN1, KC_BTN2, KC_PSCR, LGUI(KC_L), LT(2,KC_ENT), KC_SPC, KC_INS, MO(2), DM_PLY2, KC_WREF),
	[1] = LAYOUT_5x7(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_TAB, KC_Q, KC_W, KC_F, KC_P, KC_B, KC_LBRC, CW_TOGG, KC_A, KC_R, KC_S, KC_T, KC_G, KC_LPRN, KC_LSFT, KC_Z, KC_X, KC_C, KC_D, KC_V, KC_LCTL, KC_LGUI, KC_LEFT, KC_RGHT, KC_LSFT, LT(3,KC_DEL), KC_LCTL, KC_LALT, KC_ENT, DM_PLY1, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_GRV, KC_RBRC, KC_J, KC_L, KC_U, KC_Y, KC_SCLN, KC_BSLS, KC_RPRN, KC_M, KC_N, KC_E, KC_I, KC_O, KC_QUOT, KC_K, KC_H, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_BTN1, KC_BTN2, KC_PSCR, LGUI(KC_L), LT(2,KC_ENT), KC_SPC, KC_INS, MO(2), DM_PLY2, KC_WREF),
	[2] = LAYOUT_5x7(KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_TRNS, KC_ACL2, DPI_INC, KC_MS_U, KC_TRNS, KC_BRIU, TO(4), KC_TRNS, KC_ACL1, KC_MS_L, KC_MS_D, KC_MS_R, KC_BRID, DF(0), KC_TRNS, KC_ACL0, DPI_DEC, KC_MS_D, KC_TRNS, KC_TRNS, KC_MSTP, KC_MPLY, KC_MPRV, KC_MNXT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, DM_REC1, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_TRNS, TO(3), LCTL(KC_BSPC), KC_BSPC, KC_UP, KC_DEL, LCTL(KC_DEL), KC_TRNS, DF(1), LCTL(KC_LEFT), KC_LEFT, KC_DOWN, KC_RGHT, LCTL(KC_RGHT), KC_TRNS, KC_PGUP, KC_HOME, KC_DOWN, KC_END, KC_PGDN, KC_TRNS, KC_VOLD, KC_VOLU, KC_MUTE, QK_BOOT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, DM_REC2, KC_TRNS),
	[3] = LAYOUT_5x7(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NUM, KC_CALC, LSFT(KC_5), KC_PSLS, KC_PMNS, KC_EQL, KC_TRNS, KC_TRNS, KC_LPRN, KC_7, KC_8, KC_9, KC_PAST, KC_TRNS, KC_TRNS, KC_RPRN, KC_4, KC_5, KC_6, KC_PPLS, KC_TRNS, KC_COLN, KC_1, KC_2, KC_3, KC_ENT, KC_TRNS, KC_0, KC_PDOT, KC_COMM, TO(0), KC_TRNS, KC_P0, LSFT(KC_4), LSFT(KC_5), KC_TRNS, KC_TRNS),
	[4] = LAYOUT_5x7(KC_TRNS, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_TRNS, KC_CAPS, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_TRNS, KC_LSFT, KC_A, KC_S, KC_D, KC_F, KC_G, KC_TRNS, KC_LCTL, KC_Z, KC_X, KC_C, KC_V, KC_LCTL, KC_NO, KC_I, KC_M, KC_SPC, KC_ESC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, TO(0), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)
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
	_GAME
};


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
        SEND_STRING("So sorry, I am running just a few minutes late.");
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
void matrix_scan_user(void) {
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
        if (clockwise) {
            
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

// DPI
#define STARTING_DPI 1200
#define DPI_UPPER_BOUND 16000
#define DPI_LOWER_BOUND 50
#define DPI_INCREMENT 1.5
#define DPI_DECREMENT .66666
uint16_t current_dpi = STARTING_DPI;
void pointing_device_init_user(void) { // set starting DPI
    pointing_device_set_cpi(current_dpi);
}

// Wouldn't you know C doesn't implement min and max?
#ifndef min
#define min(a,b) (((a) < (b)) ? (a) : (b))
#endif
#ifndef max
#define max(a,b) (((a) > (b)) ? (a) : (b))
#endif
#include <math.h> // Needed for the floor function

// Finally we can make DPI increment and decrement buttons work. 
bool process_record_user(uint16_t keycode, keyrecord_t* record) {
    switch (keycode) {
        case DPI_INC:
            if (record->event.pressed) {
                current_dpi = min(DPI_UPPER_BOUND, 50.0 * floor(((current_dpi * DPI_INCREMENT)/50.0)+0.5));
                pointing_device_set_cpi(current_dpi);
            }
            return false;
        case DPI_DEC:
            if (record->event.pressed) {
                current_dpi = max(DPI_LOWER_BOUND, 50.0 * floor(((current_dpi * DPI_INCREMENT)/50.0)+0.5));
                pointing_device_set_cpi(current_dpi);
            }
            return false;
    }
    return false; // Don't think this should be necessary... but compiler seems to disagree.
}

// Scrolling while in the _FN layer (which is just better than dedicating a separate key for that!)
// And we'll also do precision mouse movements when in the _NUM layer.
// Modify these values to adjust the scrolling speed and tracking precision.
#define SCROLL_DIVISOR_H 8.0
#define SCROLL_DIVISOR_V 8.0
#define PRECISION_DIVISOR 10

// Variables to store accumulated scroll and precise movement values
float scroll_accumulated_h = 0;
float scroll_accumulated_v = 0;
float movement_accumulated_x = 0;
float movement_accumulated_y = 0; 

// Function to handle mouse reports and perform drag scrolling
report_mouse_t pointing_device_task_user(report_mouse_t mouse_report) {
    if (layer_state_is(_FN)) {
        // Calculate and accumulate scroll values based on mouse movement and divisors
        scroll_accumulated_h += (float)mouse_report.x / SCROLL_DIVISOR_H;
        scroll_accumulated_v += (float)mouse_report.y / SCROLL_DIVISOR_V;

        // Assign integer parts of accumulated scroll values to the mouse report
        mouse_report.h = (int8_t)scroll_accumulated_h;
        mouse_report.v = (int8_t)scroll_accumulated_v;

        // Update accumulated scroll values by subtracting the integer parts
        scroll_accumulated_h -= (int8_t)scroll_accumulated_h;
        scroll_accumulated_v -= (int8_t)scroll_accumulated_v;

        // Clear the X and Y values of the mouse report
        mouse_report.x = 0;
        mouse_report.y = 0;
    }
    else if (layer_state_is(_NUM)) {
        // Calculate and accumulate precise movement
        movement_accumulated_x += (float)mouse_report.x / PRECISION_DIVISOR;
        movement_accumulated_y += (float)mouse_report.y / PRECISION_DIVISOR;

        // Assign integer parts of accumulated movement values to the mouse report
        mouse_report.x = (int8_t)movement_accumulated_x;
        mouse_report.y = (int8_t)movement_accumulated_y;

        // Update accumulated movement values by subtracting the integer parts
        movement_accumulated_x -= (int8_t)movement_accumulated_x;
        movement_accumulated_y -= (int8_t)movement_accumulated_y;

        // Clear the X and Y values of the mouse report
        mouse_report.x = 0;
        mouse_report.y = 0;
    }
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
void keyboard_post_init_user(void) {
    oled_logo_timer = timer_read32();
}

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
            default:
                oled_write_P(PSTR("Undefined\n"), false);
        }
        
        // Macro Recording
        #ifdef DYNAMIC_MACRO_ENABLE
        if (macro_1_recording && macro_2_recording) {
            oled_write_P(PSTR("MACROS BOTH RECORDING\n"), false);
            oled_write_P(PSTR("       WOW!\n"), false);
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
        char current_dpi_str[7];
        #include <stdio.h> // Needed for sprintf
        sprintf(current_dpi_str, "%d", current_dpi);
        oled_write_P(PSTR("DPI: "), false);
        oled_write_P(PSTR(current_dpi_str), false);
        oled_write_P(PSTR("\n"), false);
        #endif
        
        // Host Keyboard LED Status (mostly)
        led_t led_state = host_keyboard_led_state();
        if (!led_state.num_lock) { // Turn NUMLOCK on, always.
            register_code(KC_NUM);
            unregister_code(KC_NUM);
            led_state = host_keyboard_led_state();
        }
        oled_write_P(led_state.num_lock ? PSTR("             \n") : PSTR("Num lock OFF \n"), false);
        oled_write_P(is_caps_word_on() ? PSTR("CAPS WORD ON\n") : PSTR("            \n"), false);
        oled_write_P(led_state.caps_lock ? PSTR("CAPS LOCK") : PSTR("         "), false);
        oled_write_P(led_state.scroll_lock ? PSTR("  SCR\n") : PSTR("     \n"), false);
    }
    return false;
}
#endif // OLED_ENABLE