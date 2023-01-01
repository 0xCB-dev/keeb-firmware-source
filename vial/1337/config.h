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

/* key matrix size */
#define MATRIX_ROWS 3
#define MATRIX_COLS 3

/* Keyboard Matrix Assignments */
#define DIRECT_PINS { \
    { B6, C6, B1 }, \
    { B4, B5, B7 }, \
    { D7, D6, D4 } \
}
#define TAP_CODE_DELAY 10
#define ENCODER_RESOLUTION 4
#define ENCODER_RESOLUTION 4
#define ENCODERS_PAD_A { F1 }
#define ENCODERS_PAD_B { F0 }
// clang-format on
#define USB_MAX_POWER_CONSUMPTION 500
#define RGB_DI_PIN B0
#define DRIVER_LED_TOTAL 12
#define LED_FLAG_UNDERGLOW 0x02
#define LED_FLAG_KEYLIGHT 0x04
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 255
#define RGB_DISABLE_WHEN_USB_SUSPENDED false
#define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_BREATHING
#define RGB_MATRIX_STARTUP_HUE 152
#define RGB_MATRIX_STARTUP_SAT 232
#define RGB_MATRIX_STARTUP_VAL RGB_MATRIX_MAXIMUM_BRIGHTNESS
#define RGB_MATRIX_STARTUP_SPD 50

#define ENABLE_RGB_MATRIX_BREATHING
#define ENABLE_RGB_MATRIX_TYPING_HEATMAP
#define RGB_MATRIX_FRAMEBUFFER_EFFECTS

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE
/* Oled Size */
#define OLED_DISPLAY_128X64
#define OLED_FONT_END 223
#define OLED_FONT_H "gfxfont.c"
