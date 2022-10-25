#ifndef DS18B20_VALIDATOR_H
#define DS18B20_VALIDATOR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#define DS18B20_CRC8_POLYNOMIAL_WITHOUT_MSB  0x8C

#define DS18B20_ROM_SIZE_TO_VALIDATE         7
#define DS18B20_SP_SIZE_TO_VALIDATE          8

bool ds18b20_validate_crc8(uint8_t *data, size_t dataSize, uint8_t polynomialWithoutMsb, uint8_t crcValue);

#endif /* DS18B20_VALIDATOR_H */
