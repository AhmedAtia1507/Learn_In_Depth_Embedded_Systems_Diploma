/**
 * @file ex2.c
 * @author Ahmed Atia Said (atiaa6501@gmail.com)
 * @brief: C code to print the factorial of a given number using a recursive function
 * @version 1.0
 * @date 2023-08-06
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>

int get_factorial(int num);

int main(int argc, char** argv)
{
    int num = 0;

    printf("Please enter a number: ");
    fflush(stdin); fflush(stdout);
    scanf("%d", &num);

    int fact = get_factorial(num);

    printf("Factorial of %d is %d", num, fact);
    return 0;
}

int get_factorial(int num)
{
    if((num == 0) || (num == 1))
    {
        return 1;
    }
    else
    {
        return (num * get_factorial(num - 1));
    }
}