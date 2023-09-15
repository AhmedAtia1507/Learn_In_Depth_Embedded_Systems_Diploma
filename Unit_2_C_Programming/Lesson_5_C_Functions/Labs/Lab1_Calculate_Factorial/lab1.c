/**
 * @file lab1.c
 * @author Ahmed Atia Said (atiaa6501@gmail.com)
 * @brief: Code to implement factorial using functions
 * @version 1.0
 * @date 2023-08-10
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>

int factorial(int num);

int main(void)
{
    int num = 0;
    printf("Please enter a number: ");
    fflush(stdin); fflush(stdout);
    scanf("%d", &num);

    printf("The factorial of %d is %d\n", num, factorial(num));
    return 0;
}

int factorial(int num)
{
    if((num == 0) || (num == 1))
    {
        return 1;
    }
    else
    {
        int index = 0, fact = 1;
        for(index = num; index > 0; index--)
        {
            fact *= index;
        }
        return fact;
    }
}