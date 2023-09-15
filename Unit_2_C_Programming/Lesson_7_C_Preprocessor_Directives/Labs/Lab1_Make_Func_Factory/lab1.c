/**
 * @file lab1.c
 * @author Ahmed Atia Said (atiaa6501@gmail.com)
 * @brief: C Program to make function factory and use it by macros
 * @version 1.0
 * @date 2023-09-15
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>

/*
    FUN_NAME will combine with "fun_" to form the function name
        ex. FUN_NAME = quadruple -----> function_name = fun_quadruple
*/
#define FUNCTION(FUN_NAME, MUL_NUM)         int fun_##FUN_NAME(int num){\
                                                return num * MUL_NUM;\
                                            }

FUNCTION(quadruple, 4);
FUNCTION(double, 2);

int main(void)
{
    printf("The quadruple of %d is %d\n", 5, fun_quadruple(5));
    printf("The double of %d is %d\n", 5, fun_double(5));
    return 0;
}