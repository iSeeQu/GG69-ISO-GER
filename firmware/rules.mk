# rules.mk - Definiert die Build-Regeln für das Keyboard.
# Hier legen wir fest, welche Funktionen kompiliert werden sollen.

# Name des Mikrocontrollers, wie in QMK bekannt.
MCU = STM32F072

# Compiler-Einstellungen
# Aktiviert die Optimierung für kleinere Firmware-Größen.
OPT_DEFS += -Os -I.

# QMK-Funktionen, die aktiviert werden sollen
# Aktiviert die Funktionalität für eine einfache Tastatur.
SRC += matrix.c
SRC += debounce.c
SRC += raw_hid.c

# KEYMAP_C_SRC wird benötigt, um die keymap.c Datei zu kompilieren
KEYMAP_C_SRC = keymap.c

# Aktiviert das BOOTLOADER-Flashing.
# Wird benötigt, um die Firmware auf den Controller zu laden.
BOOTLOADER = stm32-dfu

# USB-Konfiguration
# Wird für die Kommunikation mit dem Host-Computer benötigt.
# VCOM wird benötigt, um serielle Daten an den Host zu senden (hilfreich fürs Debugging)
# Und HID muss auch aktiviert werden.
SRC += usb_cdc.c
SRC += usb_hid.c

# Um QMK zu sagen, dass der VCOM Port auf den COM Port der Tastatur gemapped werden soll,
# müssen wir diesen Flag hinzufügen.
SRC += usb_serial_vcp.c

