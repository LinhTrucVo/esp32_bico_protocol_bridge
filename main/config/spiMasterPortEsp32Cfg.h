// Hardware configuration of the ESP32 SPI master port. Defaults follow esp32c3_test/esp32_spi_test/with_dma/esp_spi_master.

#ifndef BPB_SPIMASTERPORTESP32CFG_H
#define BPB_SPIMASTERPORTESP32CFG_H

#include "driver/spi_master.h"

#ifndef BPB_SPI_MASTER_HOST
#define BPB_SPI_MASTER_HOST            SPI2_HOST
#endif

#ifndef BPB_SPI_MASTER_MOSI_PIN
#define BPB_SPI_MASTER_MOSI_PIN        10
#endif

#ifndef BPB_SPI_MASTER_MISO_PIN
#define BPB_SPI_MASTER_MISO_PIN        7
#endif

#ifndef BPB_SPI_MASTER_SCLK_PIN
#define BPB_SPI_MASTER_SCLK_PIN        6
#endif

#ifndef BPB_SPI_MASTER_CS_PIN
#define BPB_SPI_MASTER_CS_PIN          3
#endif

#ifndef BPB_SPI_MASTER_DMA_CHANNEL
#define BPB_SPI_MASTER_DMA_CHANNEL     SPI_DMA_CH_AUTO
#endif

#ifndef BPB_SPI_MASTER_MAX_TRANSFER_SIZE
#define BPB_SPI_MASTER_MAX_TRANSFER_SIZE   4096
#endif

#ifndef BPB_SPI_MASTER_QUEUE_SIZE
#define BPB_SPI_MASTER_QUEUE_SIZE      3
#endif

#ifndef BPB_SPI_MASTER_DUTY_CYCLE_POS
#define BPB_SPI_MASTER_DUTY_CYCLE_POS  128
#endif

// Keeps CS low after a transaction so the slave does not miss the last bit.
#ifndef BPB_SPI_MASTER_CS_POST_TRANS_CYCLES
#define BPB_SPI_MASTER_CS_POST_TRANS_CYCLES    3
#endif

// Pull-up on MISO avoids rogue pulses while no slave is connected.
#ifndef BPB_SPI_MASTER_MISO_PULLUP
#define BPB_SPI_MASTER_MISO_PULLUP     true
#endif

// Clock and mode used by the reference test.
#ifndef BPB_SPI_MASTER_DEFAULT_CLOCK_HZ
#define BPB_SPI_MASTER_DEFAULT_CLOCK_HZ    18000000
#endif

#ifndef BPB_SPI_MASTER_DEFAULT_MODE
#define BPB_SPI_MASTER_DEFAULT_MODE    2
#endif

#endif /* BPB_SPIMASTERPORTESP32CFG_H */
