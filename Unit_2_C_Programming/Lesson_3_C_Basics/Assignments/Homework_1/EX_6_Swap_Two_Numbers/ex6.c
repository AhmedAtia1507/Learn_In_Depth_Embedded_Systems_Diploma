/**
 * @file ex6.c

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
    float a = 0;
    float b = 0;
    float temp = 0;

    printf("Please enter the value of a: ");
    fflush(stdin); fflush(stdout);
    scanf("%f", &a);

    printf("Please enter the value of b: ");
    fflush(stdin); fflush(stdout);
    scanf("%f", &b);

    temp = a; 
    a = b; 
    b = temp;

    printf("The new value of a = %f\nThe new value of b = %f\n", a, b);
    return 0;
}
