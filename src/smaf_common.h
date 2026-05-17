#ifndef SMAF_COMMON_H
#define SMAF_COMMON_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

/* Shared result codes */
#ifndef SMAF_RESULT_DEFINED
#define SMAF_RESULT_DEFINED
typedef enum {
    SMAF_OK = 0,
    SMAF_ERR_MEMORY,
    SMAF_ERR_INVALID,
    SMAF_ERR_PARSE,
    SMAF_ERR_FORMAT,
    SMAF_ERR_NOT_FOUND,
    SMAF_ERR_BUSY
} smaf_result_t;
#endif

#ifndef SMAF_MAX_FM_CHANNELS
#define SMAF_MAX_FM_CHANNELS   16
#endif
#ifndef SMAF_MAX_WT_CHANNELS
#define SMAF_MAX_WT_CHANNELS    8
#endif

#endif /* SMAF_COMMON_H */
