// Hardware configuration of the ESP32 ADC port. Defaults follow esp32c3_test/esp32_analog_test.

#ifndef BPB_ADCPORTESP32CFG_H
#define BPB_ADCPORTESP32CFG_H

#include "esp_adc/adc_oneshot.h"

// ADC1 channels 0..2 are on GPIO0..GPIO2 (ESP32-C3).
#ifndef BPB_ADC_UNIT
#define BPB_ADC_UNIT           ADC_UNIT_1
#endif

#ifndef BPB_ADC_NUM_CHANNELS
#define BPB_ADC_NUM_CHANNELS   3U
#endif

#ifndef BPB_ADC_ATTEN
#define BPB_ADC_ATTEN          ADC_ATTEN_DB_12
#endif

#ifndef BPB_ADC_BITWIDTH
#define BPB_ADC_BITWIDTH       ADC_BITWIDTH_12
#endif

#endif /* BPB_ADCPORTESP32CFG_H */
