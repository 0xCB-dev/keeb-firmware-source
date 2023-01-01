// Copyright 2022 Conor Burns (@Conor-Burns)
// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include "config_common.h"
#define SERIAL_USART_FULL_DUPLEX    // Enable full duplex operation mode.
#define SERIAL_USART_TX_PIN GP13    // USART TX pin
#define SERIAL_USART_RX_PIN GP15    // USART RX pin
#define SERIAL_USART_PIN_SWAP       // Swap TX and RX pins if keyboard is master halve.
#define SELECT_SOFT_SERIAL_SPEED 0  // Sped: 460800 baud :)
#define SPLIT_LED_STATE_ENABLE      // sync host leds (caps lock, ...)


/* default setup after eeprom reset */
#define RGBLIGHT_EFFECT_BREATHING
#define RGBLIGHT_DEFAULT_MODE RGBLIGHT_EFFECT_BREATHING + 2
#define RGBLIGHT_DEFAULT_HUE 152
#define RGBLIGHT_DEFAULT_SAT 232
#define RGBLIGHT_DEFAULT_VAR 100
#define RGBLIGHT_DEFAULT_SPD 2

/* VBUS detect pin */
#define USB_VBUS_PIN GP19

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP17 // Specify a optional status led which blinks when entering the bootloader

#define DEBUG_MATRIX_SCAN_RATE
