#define OLED_FADE_OUT
#define OLED_FADE_OUT_INTERVAL 5
#define OLED_BRIGHTNESS 128
#define OLED_UPDATE_INTERVAL 100
#define TAPPING_TERM 160
#define CAPS_WORD_INVERT_ON_SHIFT
#define POINTING_DEVICE_AUTO_MOUSE_ENABLE
#define AUTO_MOUSE_DEFAULT_LAYER 5
#define AUTO_MOUSE_TIME 750

/* Custom Trackball Features */
#define SCROLL_DIVISOR_H 15.0 // Modify these values to adjust the scrolling speed (horizontal). In windows, I recoomend also updating mouse settings to scroll only one line at a time (default is 3) for smoother scrolling performance. 
#define SCROLL_DIVISOR_V 30.0 // Modify these values to adjust the scrolling speed (vertical)
#define PRECISION_DIVISOR 10  // When in precision mode, how much slower to go
#define PMW33XX_CPI 12000     // Default 2000
#define DPI_INCREMENT 150     // Percent increase when increasing DPI
#define DPI_DECREMENT 66      // Percent to multiply by when decreasing DPI
#define SEN_INITIAL 150       // Initial Sensitivity (percent times 10 - so I can use an int)
#define SEN_INCREMENT 150     // Percent increase when increasing Sensitivity
#define SEN_DECREMENT 66      // Percent to multiply by when decreasing Sensitivity
#define DECEL_WIDTH 70        // Width of precision deceleration curve 1-255 (0 breaks the pointer)
#define DECEL_STRENGTH 23     // Deceleration factor (higher is more extreme) 0-255
