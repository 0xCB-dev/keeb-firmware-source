/*
Copyright 2022 0xCB - Conor Burns (Conor-Burns)

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

/* USB Device descriptor parameter */
#define VENDOR_ID       0xCB00
#define PRODUCT_ID      0x2BD3
#define DEVICE_VER      0x0001
#define MANUFACTURER    0xCB
#define PRODUCT         Pluto

/* key matrix size */
#define MATRIX_ROWS 1
#define MATRIX_COLS 25

/* Keyboard Matrix Assignments */
#define DIRECT_PINS { \
    { D6, D3, D2, D1, D0, D4, C6, D7, E6, B4, B5, B7, D5, C7, F1, F0, B6, B2, B3, B1, F7, F6, F5, F4, B0 } \
}
// clang-format on

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE
