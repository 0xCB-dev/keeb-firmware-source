# MCU name
MCU = atmega32u4

# Bootloader selection
BOOTLOADER = qmk-dfu

# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = lite	# Virtual DIP switch configuration
MOUSEKEY_ENABLE = yes	# Mouse keys
EXTRAKEY_ENABLE = yes	# Audio control and System control
CONSOLE_ENABLE = no		# Console for debug
COMMAND_ENABLE = no		# Commands for debug and configuration
# Do not enable SLEEP_LED_ENABLE. it uses the same timer as BACKLIGHT_ENABLE
SLEEP_LED_ENABLE = no	# Breathing sleep LED during USB suspend
# if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
NKRO_ENABLE = no		# USB Nkey Rollover
BACKLIGHT_ENABLE = yes	# Enable keyboard backlight functionality on B7 by default
RGBLIGHT_ENABLE = yes	# Enable keyboard RGB underglow
UNICODE_ENABLE = no		# Unicode
BLUETOOTH_ENABLE = no	# Enable Bluetooth
AUDIO_ENABLE = no		# Audio output

LTO_ENABLE = yes

# Use either the OLED or the Encoder as both use the same pins by default as no pins are left from the 65% matrix (or wire a duplex matrix to free up pins :D)
OLED_DRIVER_ENABLE = no	# Enables OLED support - connects to I²C
ENCODER_ENABLE = no		# Enables Encoder support - connects to the same pins as I²C
