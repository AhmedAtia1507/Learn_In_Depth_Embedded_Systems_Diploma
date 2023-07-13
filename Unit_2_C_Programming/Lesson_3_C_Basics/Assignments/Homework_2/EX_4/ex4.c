/**
 * @file ex4.c

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
    float num = 0.0;

    printf("Please enter a number: ");
    fflush(stdin); fflush(stdout);
    scanf("%f", &num);

    if(num > 0.0)
    {
        printf("The number %f is positive\n", num);
    }
    else if(num < 0.0)
    {
        printf("The number %f is negative\n", num);
    }
    else
    {
        printf("The number you entered is zero\n");
    }
    return 0;
}
