/**
 * @file ex1.c

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
    int num = 0;

    printf("please enter an integer you want to check: ");
    fflush(stdin); fflush(stdout);
    scanf("%d", &num);

    if(num % 2 == 0) //means that number is even
    {
        printf("The number %d is even", num);
    }
    else
    {
        printf("The number %d is odd", num);
    }
    return 0;
}