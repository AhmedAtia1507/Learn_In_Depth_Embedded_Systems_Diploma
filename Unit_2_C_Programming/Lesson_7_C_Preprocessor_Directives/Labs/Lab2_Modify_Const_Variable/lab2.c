/**
 * @file lab2.c
 * @author Ahmed Atia Said (atiaa6501@gmail.com)
 * @brief: C Program to modify constant variable using pointers
 * @version 1.0
 * @date 2023-09-15
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>

int main(void)
{
    const int num = 50;
    printf("The value of num before: %d\n", num);

    int* ptr_int = &num;
    *ptr_int = 100;
    printf("The value of num after: %d\n", num);
}