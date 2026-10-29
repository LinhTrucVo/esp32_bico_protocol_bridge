// Hardware configuration of the ESP32 PWM port. Defaults follow esp32c3_test/esp32_pwm_test.

#ifndef BPB_PWMPORTESP32CFG_H
#define BPB_PWMPORTESP32CFG_H

#include "driver/ledc.h"

// GPIO of every PWM channel; the channel index is the position in the list.
#ifndef BPB_PWM_CHANNEL_PINS
#define BPB_PWM_CHANNEL_PINS   { 8 }
#endif

#ifndef BPB_PWM_SPEED_MODE
#define BPB_PWM_SPEED_MODE     LEDC_LOW_SPEED_MODE
#endif

// Duty resolution in bits. The maximum frequency is 80 MHz / 2^bits.
#ifndef BPB_PWM_DUTY_BITS
#define BPB_PWM_DUTY_BITS      8U
#endif

#endif /* BPB_PWMPORTESP32CFG_H */
