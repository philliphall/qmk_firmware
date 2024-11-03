// This is how the MCU will know which hand it is.
#define SPLIT_HAND_PIN GP29         // By default, if it's high, then the controller assumes it is the left hand, and if it's low, it's assumed to be the right side.
// #define SPLIT_HAND_PIN_LOW_IS_LEFT // Uncomment to reverse behavior

// Split Communication
#define SERIAL_USART_FULL_DUPLEX   // Enable full duplex operation mode.
#define SERIAL_USART_TX_PIN GP0
#define SERIAL_USART_RX_PIN GP1
#define SERIAL_USART_BAUD 1000000  // Start with 1 Mbps

// Split additional data sync
#define SPLIT_LAYER_STATE_ENABLE   // This enables syncing of the layer state between both halves of the split keyboard. The main purpose of this feature is to enable support for use of things like OLED display of the currently active layer
#define SPLIT_LED_STATE_ENABLE     // This enables syncing of the Host LED status (caps lock, num lock, etc) between both halves of the split keyboard. The main purpose of this feature is to enable support for use of things like OLED display of the Host LED status.

// LIGHTING
// None for this version, though there is a RGB LED on the board <shrug>

// I2C config for oleds
#define I2C1_SDA_PIN GP14
#define I2C1_SCL_PIN GP15
#define I2C1_CLOCK_SPEED 400000  // 400 kHz

// OLED config
#define OLED_FADE_OUT
#define OLED_FADE_OUT_INTERVAL 5
#define OLED_BRIGHTNESS 128
#define OLED_UPDATE_INTERVAL 100

// SPI config for trackball sensor
#define SPI_DRIVER SPID0
#define SPI_SCK_PIN GP10
#define SPI_MOSI_PIN GP11
#define SPI_MISO_PIN GP12
#define PMW33XX_CS_PIN GP13

// Trackball sensor config
#define PMW33XX_LIFTOFF_DISTANCE 0x03
#define MOUSE_EXTENDED_REPORT
#define SPLIT_POINTING_ENABLE
#define POINTING_DEVICE_RIGHT
#define POINTING_DEVICE_INVERT_Y
#define POINTING_DEVICE_TASK_THROTTLE_MS 1
//#define POINTING_DEVICE_DEBUG

// Used for checksums of mouse report transactions across split
#define CRC8_USE_TABLE
#define CRC8_OPTIMIZE_SPEED

// Custom Trackball Configs
#define SCROLL_DIVISOR_H 15   // Modify these values to adjust the scrolling speed (horizontal). In windows, I recoomend also updating mouse settings to scroll only one line at a time (default is 3) for smoother scrolling performance.
#define SCROLL_DIVISOR_V 30   // Modify these values to adjust the scrolling speed (vertical)
#define PRECISION_DIVISOR 10  // When in precision mode, how much slower to go
#define PMW33XX_CPI 12000     // Default 2000
#define DPI_INCREMENT 150     // Percent increase when increasing DPI
#define DPI_DECREMENT 66      // Percent to multiply by when decreasing DPI
#define SEN_INITIAL 150       // Initial Sensitivity (percent times 10 - so I can use an int)
#define SEN_INCREMENT 150     // Percent increase when increasing Sensitivity
#define SEN_DECREMENT 66      // Percent to multiply by when decreasing Sensitivity
#define DECEL_WIDTH 70        // Width of precision deceleration curve 1-255 (0 breaks the pointer)
#define DECEL_STRENGTH 23     // Deceleration factor (higher is more extreme) 0-255
#define SNIPING_DIVISOR 10    // When in sniping mode, how much slower should the cursor move?

// EEPROM virtualized size
#define PICO_FLASH_SIZE_BYTES (16 * 1024 * 1024)
#define WEAR_LEVELING_BACKING_SIZE 65536 // Because I have tons of space. This 64kb backing would by default mean a virtualized EEPROM of 32kb.
#define WEAR_LEVELING_LOGICAL_SIZE ((WEAR_LEVELING_BACKING_SIZE) / 8) // 8kb is PLENTY. My use really only involves eeconfig, which only allows 32 BYTES of read/write at a time
