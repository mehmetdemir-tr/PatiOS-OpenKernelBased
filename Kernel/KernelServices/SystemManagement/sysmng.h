#ifndef SYSMNG_H
#define SYSMNG_H

#include "../../../SystemLib/Std/types.h"
#include "../../../SystemLib/SystemIO/io.h"
#include "../../../SystemLib/TimeMng/time.h"
#include "../../../Drivers/Vga/vga.h"

void sys_next_status(const char *mode, uint32_t seconds);
void exit_program(const char *mode, const char *message);

#endif