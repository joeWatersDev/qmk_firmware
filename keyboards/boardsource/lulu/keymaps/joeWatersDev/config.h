// Copyright 2022 jack (@waffle87)
// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 200U
#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_TX_PIN GP0
#define SERIAL_USART_RX_PIN GP1
#define I2C_DRIVER I2CD1
#define I2C1_SDA_PIN GP22
#define I2C1_SCL_PIN GP23
#define TAPPING_TOGGLE 2
#define SPLIT_USB_TIMEOUT 15000
#define SPLIT_USB_TIMEOUT_POLL 10
// #define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_BAND_SAT
#define RGB_MATRIX_DEFAULT_HUE 20 // Sets the default hue value, if none has been set
#define RGB_MATRIX_DEFAULT_SAT 242 // Sets the default saturation value, if none has been set
#define RGB_MATRIX_DEFAULT_SPD 127 // Sets the default animation speed, if none has been set
#define RGB_MATRIX_DEFAULT_VAL 90