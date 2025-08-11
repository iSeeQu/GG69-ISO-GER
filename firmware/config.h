// config.h - Enthält die wichtigsten Konfigurationsoptionen für die Firmware.
// Hier definieren wir den Mikrocontroller, die Matrix-Größe und andere Hardware-Details.

#pragma once

// Name des Tastaturmodells
#define KEYBOARD_NAME "GG69-ISO-GER"

// Mikrocontroller-Definition
// Der Schaltplan identifiziert den STM32F072C8T6
#define MICROCONTROLLER_STM32F072C8T6

// Matrix-Größe
// Wir haben 5 Zeilen (Rows) und 15 Spalten (Columns)
#define MATRIX_ROWS 5
#define MATRIX_COLS 15

// Pin-Definitionen für die Matrix
// ROWS_PER_ROW ist für QMK spezifisch und hier nicht zwingend notwendig
// Wir definieren die Pins direkt in info.json, aber es ist gut, sie hier zur
// Referenz zu haben. Die Reihenfolge ist wichtig und muss zur physischen
// Verkabelung passen.
#define MATRIX_ROW_PINS { B7, B6, B5, B4, B3 }
#define MATRIX_COL_PINS { PC13, PA15, PA14, PA13, PA12, PA11, PA10, PA9, PA8, PA7, PA6, PA5, PA4, PA3, PA2 }

// Diodenrichtung (DIODE_DIRECTION)
// COL2ROW oder ROW2COL, je nachdem, wie die Dioden in der Matrix verdrahtet sind.
// Der Schaltplan zeigt, dass die Dioden von den Columns zu den Rows fließen,
// daher ist COL2ROW korrekt.
#define DIODE_DIRECTION COL2ROW

// Ein- oder Ausschalten des DEBUG-Modus.
// Der DEBUG-Modus hilft beim Testen, sollte aber für die finale Firmware deaktiviert werden.
#define DEBUG_TOGGLE_ENABLE

// Aktiviert das Numpad, falls vorhanden.
#define NUMPAD_ENABLE
