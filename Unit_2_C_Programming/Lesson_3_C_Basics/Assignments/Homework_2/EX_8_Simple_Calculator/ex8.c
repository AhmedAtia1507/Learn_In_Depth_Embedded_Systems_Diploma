/**
 * @file ex8.c

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
    char operation = 0;

    printf("Please enter the type of operation you wish to do (+, -, *, /): ");
    fflush(stdin); fflush(stdout);
    scanf("%c", &operation);

    printf("Please enter the two operands:\n");
    fflush(stdin); fflush(stdout);
    scanf("%f %f", &num1, &num2);

    switch(operation)
    {
        case '+':
        {
            printf("The result of the operation (%f %c %f) = %f", num1, operation, num2, num1 + num2);
            break;
        }
        case '-':
        {
            printf("The result of the operation (%f %c %f) = %f", num1, operation, num2, num1 - num2);
            break;
        }
        case '*':
        {
            printf("The result of the operation (%f %c %f) = %f", num1, operation, num2, num1 * num2);
            break;
        }
        case '/':
        {
            printf("The result of the operation (%f %c %f) = %f", num1, operation, num2, num1 / num2);
            break;
        }
        default:
        {
            printf("Wrong input!\n");
            break;
        }
    }
    return 0;
}