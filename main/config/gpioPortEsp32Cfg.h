// Hardware configuration of the ESP32 GPIO port. Defaults follow esp32c3_test/esp32_gpio_test.

#ifndef BPB_GPIOPORTESP32CFG_H
#define BPB_GPIOPORTESP32CFG_H

// GPIO used by the reference test (LED on ESP32-C3 boards).
#ifndef BPB_GPIO_DEFAULT_PIN
#define BPB_GPIO_DEFAULT_PIN   8
#endif

// Flags passed to gpio_install_isr_service().
#ifndef BPB_GPIO_ISR_FLAGS
#define BPB_GPIO_ISR_FLAGS     0
#endif

// Highest drive strength level supported by the chip (gpio_drive_cap_t GPIO_DRIVE_CAP_3).
#ifndef BPB_GPIO_MAX_DRIVE_LEVEL
#define BPB_GPIO_MAX_DRIVE_LEVEL   3U
#endif

#endif /* BPB_GPIOPORTESP32CFG_H */
