#ifndef PANIC_H
#define PANIC_H

#include <OpenKernel/Drivers/Vga/vga.h>

void kernel_panic(const char *msg, const char *error_code);

#endif