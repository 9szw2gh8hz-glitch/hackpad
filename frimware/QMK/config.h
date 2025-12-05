#pragma once

#include "config_common.h"

#define MATRIX_ROWS 2
#define MATRIX_COLS 4

#define MATRIX_ROW_PINS { GP0, GP1 }   // Row0 -> GPIO0 (Pin7), Row1 -> GPIO1 (Pin8)

#define MATRIX_COL_PINS { GP2, GP28, GP29, GP27 } // COL1->GP2, COL2->GP28, COL3->GP29, COL4->GP27

#define DIODE_DIRECTION COL2ROW

#define ENCODERS_PAD_A { GP6 }  // Encoder A -> GPIO6 (Pin5)
#define ENCODERS_PAD_B { GP7 }  // Encoder B -> GPIO7 (Pin6)
#define ENCODER_RESOLUTION 4

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
