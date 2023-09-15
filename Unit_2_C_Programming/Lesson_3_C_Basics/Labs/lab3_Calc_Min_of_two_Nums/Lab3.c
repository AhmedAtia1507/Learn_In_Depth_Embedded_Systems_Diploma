/**
 * @file lab3.c
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
    int num1 = 0, num2 = 0;
    int largest_num = 0;
    printf("Enter two numbers: \n");
    fflush(stdin); fflush(stdout);

    scanf("%d %d", &num1, &num2);

    largest_num = (num1 > num2)? num1 : num2;

    printf("The largest number = %d\n", largest_num);
    return 0;
}
