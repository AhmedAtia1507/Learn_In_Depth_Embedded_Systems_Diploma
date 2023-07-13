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
    int number_1 = 0;
    int number_2 = 0;
    int sum = 0;

    printf("Please enter two numbers:\n");
    fflush(stdin); fflush(stdout);
    scanf("%d %d", &number_1, &number_2);

    sum = number_1 + number_2;

    printf("The sum of the two numbers you entered = %d", sum);
    return 0;
}