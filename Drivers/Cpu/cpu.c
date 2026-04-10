#include "cpu.h"

uint32_t cpuinfo_data(uint32_t *eax, uint32_t *ebx, uint32_t *ecx, uint32_t *edx, uint32_t function_id) {
    __asm__ __volatile__ ("cpuid": "=a"(*eax), "=b"(*ebx), "=c"(*ecx), "=d"(*edx): "a"(function_id));
}

void cpu_status(const char *mode) {
    if (mode[0] == 'S') {
        __asm__ __volatile__ ("hlt");
    }
    if (mode[0] == 'A') {
        __asm__ __volatile__ ("sti");
    }
}