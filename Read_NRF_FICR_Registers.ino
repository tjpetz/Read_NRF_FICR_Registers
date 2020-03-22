/*
 * nRF FICR - read a few Function Registers in the nRF boards (e.g. Nano BLE)
 * 
 * Note, the addresses are documented in the NRF52840 data sheet.
 * 
 */
 
#include <Arduino.h>

#define FICR_BASE         (0x10000000U)
#define FICR_CODEPAGESIZE (FICR_BASE + 0x010U)
#define FICR_CODESIZE     (FICR_BASE + 0x014U)
#define FICR_DEVICEID0    (FICR_BASE + 0x60UL)
#define FICR_DEVICEID1    (FICR_BASE + 0x64UL)
#define FICR_INFO_PART    (FICR_BASE + 0x100UL)
#define FICR_INFO_RAM     (FICR_BASE + 0x10CUL)

void setup() {
  // put your setup code here, to run once:

  Serial.begin(250000);

  while(!Serial) ;

  Serial.println("Hello!");
  
  Serial.print("DeviceID0 = ");Serial.println(*(uint32_t *)FICR_DEVICEID0, HEX);
  Serial.print("DeviceID1 = ");Serial.println(*(uint32_t *)FICR_DEVICEID1, HEX);
  Serial.print("INFO.PART = ");Serial.println(*(uint32_t *)FICR_INFO_PART, HEX);
  Serial.print("INFO.RAM = "); Serial.println(*(uint32_t *)FICR_INFO_RAM, HEX);
  
}

void loop() {
  // put your main code here, to run repeatedly:

}
