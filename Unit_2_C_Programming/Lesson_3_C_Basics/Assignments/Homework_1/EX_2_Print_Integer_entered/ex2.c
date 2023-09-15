/**
 * @file ex2.c

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
    int number = 0;
    printf("Please enter a number: ");
    fflush(stdin); fflush(stdout);

    scanf("%d", &number);
    fflush(stdin); fflush(stdout);
    printf("The number you entered is %d", number);
    return 0;
}