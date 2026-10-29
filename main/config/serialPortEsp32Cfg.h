// Hardware configuration of the ESP32 serial port. Defaults follow esp32c3_test/esp32_uart_test.

#ifndef BPB_SERIALPORTESP32CFG_H
#define BPB_SERIALPORTESP32CFG_H

#include "driver/uart.h"

// UART0 is used by the console and Arduino Serial, so UART1 is used here.
#ifndef BPB_SERIAL_UART_NUM
#define BPB_SERIAL_UART_NUM    UART_NUM_1
#endif

#ifndef BPB_SERIAL_TX_PIN
#define BPB_SERIAL_TX_PIN      21
#endif

#ifndef BPB_SERIAL_RX_PIN
#define BPB_SERIAL_RX_PIN      20
#endif

#ifndef BPB_SERIAL_RX_BUFFER_SIZE
#define BPB_SERIAL_RX_BUFFER_SIZE  256
#endif

#ifndef BPB_SERIAL_TX_BUFFER_SIZE
#define BPB_SERIAL_TX_BUFFER_SIZE  256
#endif

#endif /* BPB_SERIALPORTESP32CFG_H */
