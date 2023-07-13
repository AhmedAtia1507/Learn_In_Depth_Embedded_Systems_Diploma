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
    int nIntegers = 0;
    int index = 0;
    int sum = 0;

    printf("Please enter the number of natural numbers you wish to sum: ");
    fflush(stdin); fflush(stdout);
    scanf("%d", &nIntegers);

    for(index = 1; index <= nIntegers; index++)
    {
        sum += index;
    }

    printf("The sum = %d", sum);
    return 0;
}