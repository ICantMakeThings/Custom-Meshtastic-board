#ifndef _VARIANT_ESP32C3_SUPER_MINI_
#define _VARIANT_ESP32C3_SUPER_MINI_

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

#define WIRE_INTERFACES_COUNT (1)
#define I2C_SDA (6)
#define I2C_SCL (7)

#define USE_SSD1306 // Enable OLED display support

#undef GPS_RX_PIN
#undef GPS_TX_PIN
#define GPS_RX_PIN (20)
#define GPS_TX_PIN (21)
#define GPS_UBLOX

#define BUTTON_PIN (8)
#define BUTTON_NEED_PULLUP // Active low boot button

#define USE_RF95 // Use the RFM95 / SX127x LoRa module

#undef LORA_SCK
#define LORA_SCK  (0)
#undef LORA_MISO
#define LORA_MISO (1)
#undef LORA_MOSI
#define LORA_MOSI (2)
#undef LORA_CS
#define LORA_CS   (3)

#define LORA_RESET (5)
#define LORA_DIO0  (4)
#define LORA_DIO1  (8)

#define LORA_DIO2
#define LORA_DIO3

#define BATTERY_PIN (4)
#define ADC_CHANNEL ADC1_GPIO4_CHANNEL
#define BATTERY_SENSE_SAMPLES 30

#define ADC_MULTIPLIER 2.0

#ifdef __cplusplus
}
#endif

/*----------------------------------------------------------------------------
 *        Arduino objects - C++ only
 *----------------------------------------------------------------------------*/

#endif /* _VARIANT_ESP32C3_SUPER_MINI_ */
