# MCU name
MCU = SN32F248BF

BOOTLOADER = sn32-dfu

TOP_SYMBOLS = yes

# Build Options
#   comment out to disable the options.
#
BOOTMAGIC_ENABLE = yes      # Enable Bootmagic Lite
MAGIC_ENABLE 			= yes
MAGIC_KEYCODE_ENABLE 	= yes
MOUSEKEY_ENABLE = no        # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration
NKRO_ENABLE = no            # Enable N-Key Rollover
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
AUDIO_ENABLE = no           # Audio output

WAIT_FOR_USB = no
CUSTOM_MATRIX = yes
KEYBOARD_SHARED_EP = yes

BLUETOOTH_ENABLE 		= yes
BLUETOOTH_DRIVER 		= ItonBT
DIP_SWITCH_ENABLE = yes

# Custom RGB matrix handling
RGB_MATRIX_ENABLE = yes
RGB_MATRIX_DRIVER = SN32F24xB

LTO_ENABLE = no
SLEEP_LED_ENABLE = no
RGBLIGHT_ENABLE = no
SERIAL_LINK_ENABLE = no

# Build iso by default
DEFAULT_FOLDER = keychron/k4/rgb/iso

# EEPROM driver
EEPROM_DRIVER = eeprom_sn32

#EEPROM_DRIVER = transient
VIA_ENABLE = yes