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


#ifndef _Bool
#define _Bool                           unsigned char
#endif /*_Bool*/

typedef enum
{
    CPU_TYPE_8,     //8-bit architecture
    CPU_TYPE_16,    //16-bit architecture
    CPU_TYPE_32,    //32-bit architecture
    CPU_TYPE_64     //64-bit architecture
}CPU_TYPE_t;

#define CPU_TYPE                        CPU_TYPE_32

typedef enum
{
    MSB_FIRST,      //Big-endian
    LSB_FIRST       //Little-endian
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
typedef unsigned char                   uint8;
typedef unsigned short                  uint16;
typedef unsigned long                   uint32;
typedef unsigned long long              uint64;

typedef signed char                     sint8;
typedef signed short                    sint16;
typedef signed long                     sint32;
typedef signed long long                sint64;

typedef volatile uint8                  vuint8_t;
typedef volatile uint16                 vuint16_t;
typedef volatile uint32                 vuint32_t;
typedef volatile uint64                 vuint64_t;

typedef volatile sint8                  vsint8_t;
typedef volatile sint16                 vsint16_t;
typedef volatile sint32                 vsint32_t;
typedef volatile sint64                 vsint64_t;

typedef signed char                     sint8_least;
typedef signed short                    sint16_least;
typedef signed long                     sint32_least;

typedef unsigned char                   uint8_least;
typedef unsigned short                  uint16_least;
typedef unsigned long                   uint32_least;

typedef float                           float32;
typedef double                          float64;

typedef void*                           VoidPtr;
typedef const void*                     ConstVoidPtr;


#endif /*_PLATFORM_TYPES_H_*/