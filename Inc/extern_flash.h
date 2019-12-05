#ifndef EXTERN_FLASH_H
#define EXTERN_FLASH_H

#include "mystdio.h"
#include "spi.h"

#define FLASH_CMD_WRITEENABLE 0x06
#define FLASH_CMD_WRITEREG 0x01
#define FLASH_CMD_READREG1 0x05
#define FLASH_CMD_READREG2 0x35
#define FLASH_CMD_SECTORERASE 0x35
#define FLASH_CMD_READBYTE 0x03
#define FLASH_CMD_WRITEPAGE 0x02

int32_t ExternFlashInit();
#endif
