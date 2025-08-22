#pragma once

#include "config_common.h"

/* USB Device descriptor */
#define VENDOR_ID       0x6969
#define PRODUCT_ID      0x0069
#define DEVICE_VER      0x0001
#define MANUFACTURER    "GG69"
#define PRODUCT         "GG69-ISO-GER"
#define DESCRIPTION     "ISO keyboard STM32F072CBT6 based"

/* Matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 14

/* Pin configuration */
#define DIODE_DIRECTION COL2ROW
#define MATRIX_ROW_PINS { B5, B4, B3, A15, A14 }
#define MATRIX_COL_PINS { A7, A6, A5, A4, A3, A2, A1, A0, B9, B8, B7, B6, C13, C14 }

/* Define encoder support (falls benötigt) */
// #define ENCODERS_PAD_A { B0 }
// #define ENCODERS_PAD_B { B1 }
// #define ENCODER_RESOLUTION 4

/* Define debounce settings */
#define DEBOUNCE 5

/* FN-Taste auf der WIN-Taste */
#define QMK_KEYS_PER_SCAN 1
