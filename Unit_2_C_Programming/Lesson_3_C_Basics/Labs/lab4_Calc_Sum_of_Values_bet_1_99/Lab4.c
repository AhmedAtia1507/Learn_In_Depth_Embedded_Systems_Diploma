/**
 * @file lab4.c
 * @author Ahmed Atia (atiaa6501@gmail.com)
 *
 * @version 1.0
 * @date 2023-07-10
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <stdio.h>

int main(int argc, char** argv)
{
    int index = 0;
    int sum = 0;

    for(index = 1; index <= 99; index++)
    {
        sum += index;
    }
    printf("The summation of values between 1 and 99 equals %d", sum);
    return 0;
}