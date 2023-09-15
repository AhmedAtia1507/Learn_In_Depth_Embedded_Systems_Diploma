/**
 * @file ex3.c

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
    float num1 = 0.0;
    float num2 = 0.0;
    float num3 = 0.0;

    printf("Please enter three numbers:\n");
    fflush(stdin); fflush(stdout);
    scanf("%f %f %f", &num1, &num2, &num3);

    if(num1 > num2)
    {
        if(num1 > num3) 
        {
            printf("The largest number = %0.2f", num1);
        }
        else
        {
            printf("The largest number = %0.2f", num3);
        }
    }
    else
    {
        if(num2 > num3) 
        {
            printf("The largest number = %0.2f", num2);
        }
        else
        {
            printf("The largest number = %0.2f", num3);
        }
    }
    return 0;
}