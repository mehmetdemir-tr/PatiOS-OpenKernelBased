#ifndef SERIAL_H
#define SERIAL_H

#include <OpenKernel/SystemLib/Std/types.h>
#include <OpenKernel/SystemLib/SystemIO/io.h>

#define COM1_PORT 0x3F8

void serial_init();
int serial_is_transmit_empty();
void serial_print_char(char c);
void serial_print_string(const char *string);

#define SERIAL_DRIVER_NAME "OpenKernel Serial (COM1_PORT) Driver"
#define SERIAL_DRIVER_VER "0.1"
#define SERIAL_DRIVER_DESC "A simple VGA text mode driver for OpenKernel"
#define SERIAL_DRIVER_AUTHOR "OpenSoftware-World"
#define SERIAL_DRIVER_KRNL_VER "2.0"

#endif