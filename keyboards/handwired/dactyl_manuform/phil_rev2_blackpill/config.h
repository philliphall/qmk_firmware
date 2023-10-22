// This is how the MCU will know which hand it is. 
#define SPLIT_HAND_PIN B10 // high = left, low = right

// Split Communication
#define SERIAL_USART_FULL_DUPLEX   // Enable full duplex operation mode.
#define SERIAL_USART_TX_PIN A2     // USART TX pin
#define SERIAL_USART_RX_PIN A3     // USART RX pin
#define SERIAL_USART_DRIVER SD2
#define SERIAL_USART_TX_PAL_MODE 7 // Pin "alternate function", see the respective datasheet for the appropriate values for your MCU. default: 7
#define SERIAL_USART_RX_PAL_MODE 7 // Pin "alternate function", see the respective datasheet for the appropriate values for your MCU. default: 7

// LIGHTING
/* #define RGB_DI_PIN A1
#define RGBLED_NUM 30
#define RGBLIGHT_SPLIT
#define RGBLED_SPLIT { 15, 15 }
#define RGBLIGHT_LIMIT_VAL 255
#define RGBLIGHT_SLEEP
#define RGBLIGHT_EFFECT_BREATHING
#define RGBLIGHT_EFFECT_RAINBOW_MOOD
#define RGBLIGHT_EFFECT_RGB_TEST */

/* I2C config for oleds */
#define I2C_DRIVER        I2CD1 //  I2CDn must correspond with mcuconf.h STM32_I2C_USE_I2Cn
#define I2C1_SCL_PIN      B8
#define I2C1_SDA_PIN      B9
#define I2C1_SCL_PAL_MODE 4
#define I2C1_SDA_PAL_MODE 4
#define I2C1_CLOCK_SPEED  400000
#define I2C1_DUTY_CYCLE FAST_DUTY_CYCLE_16_9

/* SPI config for trackball sensor */
#define SPI_DRIVER         SPID1
#define SPI_SCK_PIN        A5
#define SPI_SCK_PAL_MODE   5
#define SPI_MOSI_PIN       A7
#define SPI_MOSI_PAL_MODE  5
#define SPI_MISO_PIN       A6
#define SPI_MISO_PAL_MODE  5

/* Trackball sensor config  */
#define PMW33XX_CS_PIN     B0
#define MOUSE_EXTENDED_REPORT
#define SPLIT_POINTING_ENABLE
#define POINTING_DEVICE_RIGHT
#define POINTING_DEVICE_INVERT_Y

/* Custom Trackball Features */
#define SCROLL_DIVISOR_H 8.0  // Modify these values to adjust the scrolling speed (horizontal)
#define SCROLL_DIVISOR_V 8.0  // Modify these values to adjust the scrolling speed (vertical)
#define PRECISION_DIVISOR 10  // When in precision mode, how much slower to go
#define DPI_INITIAL 1200      // Default 1200
#define DPI_UPPER_BOUND 16000 // Set to what your sensor allows, default 1200
#define DPI_LOWER_BOUND 50    // Set to what your sensor allows, default 100
#define DPI_STEP 50           // Set to the step size your sensor allows, default 100
#define DPI_INCREMENT 150     // Percent increase when increasing DPI
#define DPI_DECREMENT 66      // Percent to multiply by when decreasing DPI
#define SEN_INITIAL 1000      // Initial Sensitivity (percent times 10 - so I can use an int)
#define SEN_INCREMENT 150     // Percent increase when increasing Sensitivity
#define SEN_DECREMENT 66      // Percent to multiply by when decreasing Sensitivity

/* Because someone else did it */
#define CRC8_USE_TABLE
#define CRC8_OPTIMIZE_SPEED
