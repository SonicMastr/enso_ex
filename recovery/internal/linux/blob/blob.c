#include <inttypes.h>
#include <stddef.h>
#include <stdbool.h>
#include <stdarg.h>
#include <stdio.h>

#include "../../../../core/enso.h"
#include "../../../../core/ex_defs.h"

#define NO_DEBUG_LOGGING
#include "../../../../core/nskbl.h"

int _start(uint32_t get_info_va, uint32_t init_os0_va) {
    void (*init_os0)(int mbr_off) = (void*)init_os0_va;

    init_os0(E2X_RECOVERY_MBR_OFFSET); // Mount our ud0 as os0 (Not my fault if people don't follow instructions)

    return 1;
}