/*
Copyright 2021 0xCB - Conor Burns

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#pragma once

#include "config_common.h"
// clang-format off
/* USB Device descriptor parameter (U+00B5 ;)) */
#define VENDOR_ID       0xCB00
#define PRODUCT_ID      0x00B5
#define DEVICE_VER      0x0001
#define MANUFACTURER    0xCB
#define PRODUCT         micro

/* key matrix size */
#define MATRIX_ROWS 16
#define MATRIX_COLS 5


/*
 * Keyboard Matrix Assignments
 *
 * Change this to how you wired your keyboard
 * COLS: AVR pins used for columns, left to right
 * ROWS: AVR pins used for rows, top to bottom
 * DIODE_DIRECTION: COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
 *                  ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode)
 *
*/
#define MATRIX_ROW_PINS { B0, B1, B2, B3, F0, C7, C6, B6, B5, B4, D7, D6, D4, D2, D3, D5 }
#define MATRIX_COL_PINS { F1, F4, F5, F6, F7 }
#define UNUSED_PINS
// clang-format on

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW

#ifdef ENCODER_ENABLE
#define TAP_CODE_DELAY 10
#define ENCODER_DIRECTION_FLIP /* Try this out */
#define ENCODER_RESOLUTION 4
#define ENCODERS_PAD_A { D0 }
#define ENCODERS_PAD_B { D1 }
#endif

#ifdef OLED_DRIVER_ENABLE
/* Oled Size */
#define OLED_DISPLAY_128X64
/* Custom font */
#define OLED_FONT_END 255
#define OLED_FONT_H "gfxfont.c"
#endif

#define BACKLIGHT_PIN B7
#define BACKLIGHT_BREATHING
#define BACKLIGHT_LEVELS 7

#define RGB_DI_PIN E6
#define RGBLED_NUM 1 /* Change according to your added underglow to the RGB breakout (undef in your keymap and define the new number) */
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
#define RGBLIGHT_LIMIT_VAL 255 /* The maximum brightness level */
#define RGBLIGHT_SLEEP  /* If defined, the RGB lighting will be switched off when the host goes to sleep */
#define RGBLIGHT_ANIMATIONS /* enables all animations */
/* default setup after eeprom reset */
#define RGBLIGHT_DEFAULT_MODE RGBLIGHT_EFFECT_BREATHING + 2
#define RGBLIGHT_DEFAULT_HUE 152
#define RGBLIGHT_DEFAULT_SAT 232
#define RGBLIGHT_DEFAULT_VAR 255
#define RGBLIGHT_DEFAULT_SPD 2

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* bootmagic */
#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 0
