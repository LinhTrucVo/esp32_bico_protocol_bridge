// Hardware configuration of the ESP32 I2C slave port. Defaults follow esp32c3_test/esp32_i2c_test/esp_i2c_slave.

#ifndef BPB_I2CSLAVEPORTESP32CFG_H
#define BPB_I2CSLAVEPORTESP32CFG_H

#include "driver/i2c_slave.h"

#ifndef BPB_I2C_SLAVE_PORT
#define BPB_I2C_SLAVE_PORT             I2C_NUM_0
#endif

#ifndef BPB_I2C_SLAVE_SDA_PIN
#define BPB_I2C_SLAVE_SDA_PIN          8
#endif

#ifndef BPB_I2C_SLAVE_SCL_PIN
#define BPB_I2C_SLAVE_SCL_PIN          9
#endif

// Address used by the reference test.
#ifndef BPB_I2C_SLAVE_DEFAULT_ADDRESS
#define BPB_I2C_SLAVE_DEFAULT_ADDRESS  0x6D
#endif

// Depth of the driver buffers; must not be smaller than the largest transfer of the driver (256 bytes).
#ifndef BPB_I2C_SLAVE_TX_BUFFER_DEPTH
#define BPB_I2C_SLAVE_TX_BUFFER_DEPTH  256
#endif

#ifndef BPB_I2C_SLAVE_RX_BUFFER_DEPTH
#define BPB_I2C_SLAVE_RX_BUFFER_DEPTH  256
#endif

#ifndef BPB_I2C_SLAVE_INTERNAL_PULLUP
#define BPB_I2C_SLAVE_INTERNAL_PULLUP  GPIO_PULLUP_ENABLE
#endif

#ifndef BPB_I2C_SLAVE_TASK_STACK_SIZE
#define BPB_I2C_SLAVE_TASK_STACK_SIZE  3072
#endif

#ifndef BPB_I2C_SLAVE_TASK_PRIORITY
#define BPB_I2C_SLAVE_TASK_PRIORITY    5
#endif

#endif /* BPB_I2CSLAVEPORTESP32CFG_H */
