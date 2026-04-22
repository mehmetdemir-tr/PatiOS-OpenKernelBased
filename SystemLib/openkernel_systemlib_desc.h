#ifndef OPENKERNEL_SYSTEMLIB_DESC_H
#define OPENKERNEL_SYSTEMLIB_DESC_H

#include <OpenKernel/SystemLib/Std/types.h>

#define OPENKERNEL_SYSTEMLIB_PKG_NAME "OpenKernel System Libraries"
#define OPENKERNEL_SYSTEMLIB_PKG_VER "1.0"

typedef struct {
    const char *module_name;
    const char *module_desc;
    const char *module_ver;
    const char *module_author;
    const char *module_file_name;
    const char *module_krnl_ver;
} openkernel_systemlib_module_information_t;

openkernel_systemlib_module_information_t kernel_func_lib;
openkernel_systemlib_module_information_t memory_lib;
openkernel_systemlib_module_information_t std_lib;
openkernel_systemlib_module_information_t types_lib;
openkernel_systemlib_module_information_t syscalls_lib;
openkernel_systemlib_module_information_t systemio_lib;
openkernel_systemlib_module_information_t timemng_lib;
openkernel_systemlib_module_information_t type_conv_lib;

#endif
