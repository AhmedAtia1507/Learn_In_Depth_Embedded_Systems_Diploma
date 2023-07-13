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
    float number_1 = 0.0;
    float number_2 = 0.0;

    printf("Please enter two numbers:\n");
    fflush(stdin); fflush(stdout);
    scanf("%f %f", &number_1,&number_2);

    printf("Product = %f", number_1 * number_2);
    return 0;
}