
/**
 * @file
 * @brief Do not use, json-c internal, may be changed or removed at any time.
 */
#ifndef _json_inttypes_h_
#define _json_inttypes_h_

#include "json_config.h"

#ifdef JSON_C_HAVE_INTTYPES_H
/* inttypes.h includes stdint.h */
#include <inttypes.h>
#define PRId64 "I64d"
#define SCNd64 "I64d"
#define PRIu64 "I64u"
#else
#include <stdint.h>

#define PRId64 "I64d"
#define SCNd64 "I64d"
#define PRIu64 "I64u"

#endif

#ifdef  NOT_INCLUDE
#include <BaseTsd.h>
typedef SSIZE_T ssize_t;
#endif

#endif
