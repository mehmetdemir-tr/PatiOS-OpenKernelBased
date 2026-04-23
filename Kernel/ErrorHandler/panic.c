#include "panic.h"

void kernel_panic(const char *msg) {
    vga_clear_screen("F");
    vga_set_color_scheme(VGA_COLOR_RED, VGA_COLOR_WHITE);
    vga_print_scr(msg);
    while (1) {
        __asm__ __volatile__ ("hlt");
    } 
}