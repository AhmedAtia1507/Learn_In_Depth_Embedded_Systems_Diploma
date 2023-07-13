/**
 * @file ex5.c

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
    char input_char = 0;

    printf("Please enter a character: ");
    fflush(stdin); fflush(stdout);
    scanf("%c", &input_char);

    if(((input_char >= 'a') && (input_char <= 'z')) || ((input_char >= 'A') && (input_char <= 'Z')))
    {
        printf("The character %c is an alphabet\n", input_char);
    }
    else
    {
        printf("The character %c is not an alphabet\n", input_char);
    }
    return 0;
}