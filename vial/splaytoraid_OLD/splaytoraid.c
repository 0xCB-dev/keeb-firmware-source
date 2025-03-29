// Copyright 2024 Conor Burns (@Conor-Burns)
/* SPDX-License-Identifier: GPL-2.0-or-later */

#include QMK_KEYBOARD_H

uint32_t startup_time = 0;

void keyboard_post_init_kb(void) {
    // Enable RGB current limiter and wait for a bit before allowing RGB to continue
    setPinOutput(RGB_ENABLE_PIN);
    writePinHigh(RGB_ENABLE_PIN);
    wait_ms(20);

    // Record the current time
    startup_time = timer_read32();

    // Offload to the user func
    keyboard_post_init_user();
}
