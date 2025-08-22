MCU = STM32F072
BOOTLOADER = stm32-dfu
SERIAL_DRIVER = vendor

# QMK Features
LTO_ENABLE = yes
EXTRAKEY_ENABLE = yes
NKRO_ENABLE = yes
MOUSEKEY_ENABLE = no
CONSOLE_ENABLE = no
COMMAND_ENABLE = no

# Enable RGB Lighting (falls benötigt)
RGBLIGHT_ENABLE = no
RGB_MATRIX_ENABLE = no

# Optimierungen
OPT_DEFS += -flto

# Firmware-Optionen
BOOTMAGIC_ENABLE = no       # Bootmagic deaktivieren
MOUSEKEY_ENABLE = yes        # Maussteuerung aktivieren
EXTRAKEY_ENABLE = yes        # Mediensteuerung aktivieren
CONSOLE_ENABLE = no          # Konsolenausgabe deaktivieren
COMMAND_ENABLE = no          # Befehlsfunktionen deaktivieren
NKRO_ENABLE = yes            # N-Key Rollover aktivieren
RGBLIGHT_ENABLE = no         # RGB-Beleuchtung deaktivieren
UNICODE_ENABLE = no          # Unicode deaktivieren
