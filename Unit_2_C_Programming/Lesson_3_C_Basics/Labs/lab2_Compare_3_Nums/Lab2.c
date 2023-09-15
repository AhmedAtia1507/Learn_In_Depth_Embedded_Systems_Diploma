/**
 * @file lab2.c
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
    int num1 = 0, num2 = 0, num3 = 0;
    printf("Please enter the three numbers:\n");
    fflush(stdin); fflush(stdout);
    scanf("%d %d %d", &num1, &num2, &num3);

    if(num1 > num2)
    {
        if(num1 > num3)
        {
            printf("The largest number = %d\n", num1);
        }
        else
        {
            printf("The largest number = %d\n", num3);
        }
    }
    else if(num2 > num1)
    {
        if(num2 > num3)
        {
            printf("the largest number = %d\n", num2);
        }
        else
        {
            printf("The largest number = %d\n", num3);
        }
    }
    return 0;
}
