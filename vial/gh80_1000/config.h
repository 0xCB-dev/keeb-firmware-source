#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x046a
#define PRODUCT_ID      0x1000
#define DEVICE_VER      0x0001
#define MANUFACTURER    Cherry GmbH
#define PRODUCT         GH80-1000

/* key matrix size */
#define MATRIX_ROWS 11
#define MATRIX_COLS 11

/* key matrix pins */
#define MATRIX_ROW_PINS { F4, F1, F0, F5, F6, F7, D4, D5, D3, D2, D0 }
#define MATRIX_COL_PINS { C7, C6, B4, D7, B3, B2, B0, E6, B1, D1, D6 }
#define UNUSED_PINS

/* Lock LEDs */
#define LED_NUM_LOCK_PIN B5
#define LED_CAPS_LOCK_PIN B6
#define LED_SCROLL_LOCK_PIN B7
#define LED_PIN_ON_STATE 0

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* EEPROM too smol */
#define DYNAMIC_KEYMAP_LAYER_COUNT 2