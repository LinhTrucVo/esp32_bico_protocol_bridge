// Hardware configuration of the ESP32 SPI slave port. Defaults follow esp32c3_test/esp32_spi_test/with_dma/esp_spi_slave.

#ifndef BPB_SPISLAVEPORTESP32CFG_H
#define BPB_SPISLAVEPORTESP32CFG_H

#include "driver/spi_slave.h"
#include "driver/gpio.h"

#ifndef BPB_SPI_SLAVE_HOST
#define BPB_SPI_SLAVE_HOST             SPI2_HOST
#endif

#ifndef BPB_SPI_SLAVE_MOSI_PIN
#define BPB_SPI_SLAVE_MOSI_PIN         10
#endif

#ifndef BPB_SPI_SLAVE_MISO_PIN
#define BPB_SPI_SLAVE_MISO_PIN         7
#endif

#ifndef BPB_SPI_SLAVE_SCLK_PIN
#define BPB_SPI_SLAVE_SCLK_PIN         6
#endif

#ifndef BPB_SPI_SLAVE_CS_PIN
#define BPB_SPI_SLAVE_CS_PIN           3
#endif

#ifndef BPB_SPI_SLAVE_DMA_CHANNEL
#define BPB_SPI_SLAVE_DMA_CHANNEL      SPI_DMA_CH_AUTO
#endif

#ifndef BPB_SPI_SLAVE_QUEUE_SIZE
#define BPB_SPI_SLAVE_QUEUE_SIZE       3
#endif

// Pull-ups on the inputs avoid rogue pulses while no master is connected.
#ifndef BPB_SPI_SLAVE_INPUT_PULLUP
#define BPB_SPI_SLAVE_INPUT_PULLUP     true
#endif

#ifndef BPB_SPI_SLAVE_MISO_DRIVE_CAP
#define BPB_SPI_SLAVE_MISO_DRIVE_CAP   GPIO_DRIVE_CAP_0
#endif

// Mode used by the reference test.
#ifndef BPB_SPI_SLAVE_DEFAULT_MODE
#define BPB_SPI_SLAVE_DEFAULT_MODE     2
#endif

#ifndef BPB_SPI_SLAVE_TASK_STACK_SIZE
#define BPB_SPI_SLAVE_TASK_STACK_SIZE  3072
#endif

#ifndef BPB_SPI_SLAVE_TASK_PRIORITY
#define BPB_SPI_SLAVE_TASK_PRIORITY    5
#endif

#endif /* BPB_SPISLAVEPORTESP32CFG_H */
