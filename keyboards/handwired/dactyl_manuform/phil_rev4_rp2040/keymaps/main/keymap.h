// keymap.h

#ifndef KEYMAP_H
#define KEYMAP_H

#include <stdint.h>
#include <stdbool.h>
#include "quantum.h"
#include "unicode_map_khmer.h"

enum my_keycodes {
  DPI_INC = SAFE_RANGE,
  DPI_DEC,
  SEN_INC,
  SEN_DEC,
  DW_INC,
  DW_DEC,
  DECEL_INC,
  DECEL_DEC,
  EE_SAVE,
  EE_LOAD,
  EE_INIT
};

#ifdef OLED_ENABLE
void set_display_message(const char* message);
#endif

#ifdef EEPROM_ENABLE
typedef union {
    uint8_t raw[EECONFIG_USER_DATA_SIZE];
    struct {
        uint16_t dpi;
        uint16_t sen;
        uint8_t decel_width;
        uint8_t decel_strength;
        uint8_t scroll_divisor_h;
        uint8_t scroll_divisor_v;
    };
} user_config_t;

extern user_config_t user_config;

void print_user_config(const char* prefix, void* config, size_t size, const char* suffix);
void kpiu_read_config_from_eeprom(void);
#endif

#ifdef POINTING_DEVICE_ENABLE
extern uint16_t first_dpi;
extern uint16_t init_dpi;
extern uint16_t detected_dpi;
extern bool reported;
float decel(int16_t d);
#endif

#endif // KEYMAP_H
