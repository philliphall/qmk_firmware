// Copyright 2022 Stefan Kerkmann (KarlK90)
// Copyright 2021 Alabastard (@Alabastard-64)
// Copyright 2020 Christopher Courtney, aka Drashna Jael're  (@drashna) <drashna@live.com>
// Copyright 2019 Sunjun Kim
// Copyright 2020 Ploopy Corporation
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include <stdint.h>
#include "keyboard.h"
#include "spi_master.h"
#include "util.h"
#include "pmw3389.h"

#if !defined(PMW33XX_CPI)
#    define PMW33XX_CPI 2000
#endif

#define PMW33XX_CPI_STEP 50
#define PMW33XX_CPI_MIN 50
#define PMW33XX_CPI_MAX 16000

#define PMW33XX_FIRMWARE_LENGTH 4094

// PMW3389 register addresses
// clang-format off
#define REG_Product_ID                 0x00
#define REG_Revision_ID                0x01
#define REG_Motion                     0x02
#define REG_Delta_X_L                  0x03
#define REG_Delta_X_H                  0x04
#define REG_Delta_Y_L                  0x05
#define REG_Delta_Y_H                  0x06
#define REG_SQUAL                      0x07
#define REG_RawData_Sum                0x08
#define REG_Maximum_RawData            0x09
#define REG_Minimum_RawData            0x0a
#define REG_Shutter_Lower              0x0b
#define REG_Shutter_Upper              0x0c
#define REG_Ripple_Control             0x0d
#define REG_Resolution_L               0x0e
#define REG_Resolution_H               0x0f
#define REG_Config2                    0x10
#define REG_Angle_Tune                 0x11
#define REG_Frame_Capture              0x12
#define REG_SROM_Enable                0x13
#define REG_Run_Downshift              0x14
#define REG_Rest1_Rate_Lower           0x15
#define REG_Rest1_Rate_Upper           0x16
#define REG_Rest1_Downshift            0x17
#define REG_Rest2_Rate_Lower           0x18
#define REG_Rest2_Rate_Upper           0x19
#define REG_Rest2_Downshift            0x1a
#define REG_Rest3_Rate_Lower           0x1b
#define REG_Rest3_Rate_Upper           0x1c
#define REG_Observation                0x24
#define REG_Data_Out_Lower             0x25
#define REG_Data_Out_Upper             0x26
#define REG_SROM_ID                    0x2a
#define REG_Min_SQ_Run                 0x2b
#define REG_RawData_Threshold          0x2c
#define REG_Control2                   0x2d
#define REG_Config5_L                  0x2e
#define REG_Config5_H                  0x2f
#define REG_Power_Up_Reset             0X3a
#define REG_Shutdown                   0x3b
#define REG_Inverse_Product_ID         0x3f
#define REG_LiftCutoff_Cal3            0x41
#define REG_Angle_Snap                 0x42
#define REG_LiftCutoff_Cal1            0x4a
#define REG_Motion_Burst               0x50
#define REG_SROM_Load_Burst            0x62
#define REG_Lift_Config                0x63
#define REG_RawData_Burst              0x64
#define REG_LiftCutoff_Cal2            0x65
#define REG_LiftCutoff_Cal_Timeout     0x71
#define REG_LiftCutoff_Cal_Min_Length  0x72
#define REG_PWM_Period_Cnt             0x73
#define REG_PWM_Width_Cnt              0x74
// clang-format on

typedef struct __attribute__((packed)) {
    union {
        struct {
            bool    capture_from_raw_data : 1;     // FRAME_RData_1st
            uint8_t operation_mode : 2;            // OP_MODE
            bool    is_lifted : 1;                 // Lift_stat
            bool    raw_data_grab_is_raw_data : 1; // RData_1st
            uint8_t _reserved : 2;                 // 1 + Reserved
            bool    is_motion : 1;                 // MOT
        } b;
        uint8_t w;
    } motion;
    uint8_t observation;
    int16_t delta_x; // displacement on x directions. Unit: Count. (CPI * Count = Inch value)
    int16_t delta_y; // displacement on y directions.
} pmw33xx_report_t;

_Static_assert(sizeof(pmw33xx_report_t) == 6, "pmw33xx_report_t must be 6 bytes in size");
_Static_assert(sizeof((pmw33xx_report_t){0}.motion) == 1, "pmw33xx_report_t.motion must be 1 byte in size");

#if !defined(PMW33XX_CLOCK_SPEED)
#    define PMW33XX_CLOCK_SPEED 2000000
#endif

#if !defined(PMW33XX_SPI_DIVISOR)
#    ifdef __AVR__
#        define PMW33XX_SPI_DIVISOR (F_CPU / PMW33XX_CLOCK_SPEED)
#    else
#        define PMW33XX_SPI_DIVISOR 64
#    endif
#endif

#if !defined(PMW33XX_LIFTOFF_DISTANCE)
#    define PMW33XX_LIFTOFF_DISTANCE 0x02
#endif

#if !defined(ROTATIONAL_TRANSFORM_ANGLE)
#    define ROTATIONAL_TRANSFORM_ANGLE 0x00
#endif

#if ROTATIONAL_TRANSFORM_ANGLE > 127 || ROTATIONAL_TRANSFORM_ANGLE < (-127)
#    error ROTATIONAL_TRANSFORM_ANGLE has to be in the range of +/- 127 for all PMW33XX sensors.
#endif

// Support single and plural spellings
#ifndef PMW33XX_CS_PINS
#    ifndef PMW33XX_CS_PIN
#        ifdef POINTING_DEVICE_CS_PIN
#            define PMW33XX_CS_PIN POINTING_DEVICE_CS_PIN
#            define PMW33XX_CS_PINS \
                { PMW33XX_CS_PIN }
#        else
#            error "No chip select pin defined -- missing PMW33XX_CS_PIN or PMW33XX_CS_PINS"
#        endif
#    else
#        define PMW33XX_CS_PINS \
            { PMW33XX_CS_PIN }
#    endif
#endif

// Support single spelling and default to be the same as left side
#if !defined(PMW33XX_CS_PINS_RIGHT)
#    if !defined(PMW33XX_CS_PIN_RIGHT)
#        define PMW33XX_CS_PIN_RIGHT PMW33XX_CS_PIN
#    endif
#    define PMW33XX_CS_PINS_RIGHT \
        { PMW33XX_CS_PIN_RIGHT }
#endif

// Defines so the old variable names are swapped by the appropiate value on each half
#define cs_pins (is_keyboard_left() ? cs_pins_left : cs_pins_right)
#define in_burst (is_keyboard_left() ? in_burst_left : in_burst_right)
#define pmw33xx_number_of_sensors (is_keyboard_left() ? ARRAY_SIZE((pin_t[])PMW33XX_CS_PINS) : ARRAY_SIZE((pin_t[])PMW33XX_CS_PINS_RIGHT))

#if PMW33XX_CPI > PMW33XX_CPI_MAX || PMW33XX_CPI < PMW33XX_CPI_MIN || (PMW33XX_CPI % PMW33XX_CPI_STEP) != 0U
#    pragma message "PMW33XX_CPI has to be in the range of " STR(PMW33XX_CPI_MAX) "-" STR(PMW33XX_CPI_MIN) " in increments of " STR(PMW33XX_CPI_STEP) ". But it is " STR(PMW33XX_CPI) "."
#    error Use correct PMW33XX_CPI value.
#endif

#define CONSTRAIN(amt, low, high) ((amt) < (low) ? (low) : ((amt) > (high) ? (high) : (amt)))

/**
 * @brief Initializes the given sensor so it is in a working state and ready to
 * be polled for data.
 *
 * @param sensor Index of the sensors chip select pin
 * @return true Initialization was a success
 * @return false Initialization failed, do not proceed operation
 */
bool __attribute__((cold)) pmw33xx_init(uint8_t sensor);

/**
 * @brief Gets the currently set CPI value from the sensor. CPI is often
 * refereed to as the sensors sensitivity.
 *
 * @param sensor Index of the sensors chip select pin
 * @return uint16_t Current CPI value of the sensor
 */
uint16_t pmw33xx_get_cpi(uint8_t sensor);

/**
 * @brief Sets the given CPI value for the given PMW33XX sensor. CIP is often
 * refereed to as the sensors sensitivity. Values outside of the allow range are
 * constrained into legal values.
 *
 * @param sensor Index of the sensors chip select pin
 * @param cpi CPI value to set, legal range depends on the PMW sensor type
 */
void pmw33xx_set_cpi(uint8_t sensor, uint16_t cpi);

/**
 * @brief Sets the given CPI value to all registered PMW33XX sensors. CPI is
 * often refereed to as the sensors sensitivity. Values outside of the allow
 * range are constrained into legal values.
 *
 * @param sensor Index of the sensors chip select pin
 * @param cpi CPI value to set, legal range depends on the PMW sensor type
 */
void pmw33xx_set_cpi_all_sensors(uint16_t cpi);

/**
 * @brief Reads and clears the current delta, and motion register values on the
 * given sensor.
 *
 * @param sensor Index of the sensors chip select pin
 * @return pmw33xx_report_t Current values of the sensor, if errors occurred all
 * fields are set to zero
 */
pmw33xx_report_t pmw33xx_read_burst(uint8_t sensor);

/**
 * @brief Read one byte of data from the given register on the sensor
 *
 * @param sensor Index of the sensors chip select pin
 * @param reg_addr Register address to read from
 * @return uint8_t
 */
uint8_t pmw33xx_read(uint8_t sensor, uint8_t reg_addr);

/**
 * @brief Writes one byte of data to the given register on the sensor
 *
 * @param sensor Index of the sensors chip select pin
 * @param reg_addr Registers address to write to
 * @param data Data to write to the register
 * @return true Write was a success
 * @return false Write failed, do not proceed operation
 */
bool pmw33xx_write(uint8_t sensor, uint8_t reg_addr, uint8_t data);
