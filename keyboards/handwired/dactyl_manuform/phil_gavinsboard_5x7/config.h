// This is a split keybooard. Whichever side I plug in is considered the master. 
#define MASTER_LEFT
#undef SOFT_SERIAL_PIN
#define SOFT_SERIAL_PIN D3

// RGB LED Support
#undef RGB_DI_PIN
#undef RGBLED_NUM
#define RGB_DI_PIN F4
#define RGBLED_NUM 30
#define RGBLIGHT_SPLIT
#define RGBLED_SPLIT { 15, 15 }
#define RGBLIGHT_LIMIT_VAL 255
#define RGBLIGHT_SLEEP
#define RGBLIGHT_EFFECT_BREATHING
#define RGBLIGHT_EFFECT_RAINBOW_MOOD
#define RGBLIGHT_EFFECT_RGB_TEST

// OLED Support
#define OLED_FADE_OUT
#define OLED_FADE_OUT_INTERVAL 5
#define OLED_BRIGHTNESS 128
#define OLED_UPDATE_INTERVAL 100
