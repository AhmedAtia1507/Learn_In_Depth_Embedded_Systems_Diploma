/**
 * @file Platform_Types.h
 * @author Ahmed Atia Said (atiaa6501@gmail.com)
 * @brief: Header File to define Datatypes Specified by AUTOSAR Standards "Refer to AUTOSAR_SWS_PlatformTypes" 
 * @version 1.0
 * @date 2023-09-15
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#ifndef _PLATFORM_TYPES_H_
#define _PLATFORM_TYPES_H_

#include <stdbool.h>
#include <stdint.h>

#ifndef _Bool
#define _Bool                           uint8_t
#endif /*_Bool*/

typedef enum
{
    CPU_TYPE_8,
    CPU_TYPE_16,
    CPU_TYPE_32,
    CPU_TYPE_64
}CPU_TYPE_t;

#define CPU_TYPE                        CPU_TYPE_64

typedef enum
{
    MSB_FIRST,
    LSB_FIRST
}CPU_BIT_ORDER_t;

#define CPU_BIT_ORDER                   LSB_FIRST

typedef enum
{
    HIGH_BYTE_FIRST,
    LOW_BYTE_FIRST
}CPU_BYTE_ORDER_t;

#define CPU_BYTE_ORDER                  LOW_BYTE_FIRST

#ifndef TRUE
#define TRUE                            (boolean)true
#endif /*TRUE*/

#ifndef FALSE
#define FALSE                           (boolean)false
#endif /*FALSE*/

typedef _Bool                           boolean;
typedef uint8_t                         uint8;
typedef uint16_t                        uint16;
typedef uint32_t                        uint32;
typedef uint64_t                        uint64;

typedef int8_t                          sint8;
typedef int16_t                         sint16;
typedef int32_t                         sint32;
typedef int64_t                         sint64;

typedef volatile uint8                  vuint8_t;
typedef volatile uint16                 vuint16_t;
typedef volatile uint32                 vuint32_t;
typedef volatile uint64                 vuint64_t;

typedef volatile sint8                  vsint8_t;
typedef volatile sint16                 vsint16_t;
typedef volatile sint32                 vsint32_t;
typedef volatile sint64                 vsint64_t;

typedef int_least8_t                    sint8_least;
typedef int_least16_t                   sint16_least;
typedef int_least32_t                   sint32_least;

typedef uint_least8_t                   uint8_least;
typedef uint_least16_t                  uint16_least;
typedef uint_least32_t                  uint32_least;

typedef float                           float32;
typedef double                          float64;

typedef void*                           VoidPtr;
typedef const void*                     ConstVoidPtr;


#endif /*_PLATFORM_TYPES_H_*/