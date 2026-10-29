// Hardware configuration of the ESP32 I2C master port. Defaults follow esp32c3_test/esp32_i2c_test/esp_i2c_master.

#ifndef BPB_I2CMASTERPORTESP32CFG_H
#define BPB_I2CMASTERPORTESP32CFG_H

#include "driver/i2c_master.h"

#ifndef BPB_I2C_MASTER_PORT
#define BPB_I2C_MASTER_PORT            I2C_NUM_0
#endif

#ifndef BPB_I2C_MASTER_SDA_PIN
#define BPB_I2C_MASTER_SDA_PIN         8
#endif

#ifndef BPB_I2C_MASTER_SCL_PIN
#define BPB_I2C_MASTER_SCL_PIN         9
#endif

#ifndef BPB_I2C_MASTER_GLITCH_IGNORE_CNT
#define BPB_I2C_MASTER_GLITCH_IGNORE_CNT   7
#endif

#ifndef BPB_I2C_MASTER_INTERNAL_PULLUP
#define BPB_I2C_MASTER_INTERNAL_PULLUP true
#endif

// Clock stretching timeout of a slave in microseconds.
#ifndef BPB_I2C_MASTER_SCL_WAIT_US
#define BPB_I2C_MASTER_SCL_WAIT_US     100000
#endif

// Clock frequency and slave address used by the reference test.
#ifndef BPB_I2C_MASTER_DEFAULT_FREQ_HZ
#define BPB_I2C_MASTER_DEFAULT_FREQ_HZ 400000
#endif

#ifndef BPB_I2C_MASTER_DEFAULT_SLAVE_ADDRESS
#define BPB_I2C_MASTER_DEFAULT_SLAVE_ADDRESS   0x6D
#endif

#endif /* BPB_I2CMASTERPORTESP32CFG_H */
