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
    int a = 0;
    int b = 0;
    int temp = 0;

    printf("Please enter the value of a: ");
    fflush(stdin); fflush(stdout);
    scanf("%d", &a);

    printf("Please enter the value of b: ");
    fflush(stdin); fflush(stdout);
    scanf("%d", &b);

    temp = a; 
    a = b; 
    b = temp;

    printf("The new value of a = %d\nThe new value of b = %d\n", a, b);
    return 0;
}