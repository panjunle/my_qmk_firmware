BOOTMAGIC_ENABLE = yes      # Enable Bootmagic Lite
MOUSEKEY_ENABLE = yes       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration
# if firmware size over limit, try this option
# LTO_ENABLE = yes

SPLIT_KEYBOARD = yes
SERIAL_DRIVER = vendor

OLED_ENABLE     = yes
OLED_DRIVER     = SSD1306
OPT_DEFS += -DHAL_USE_I2C=TRUE

WPM_ENABLE = yes

# POINTING_DEVICE_ENABLE 	= yes
# POINTING_DEVICE_DRIVER = analog_joystick

VIA_ENABLE = yes
