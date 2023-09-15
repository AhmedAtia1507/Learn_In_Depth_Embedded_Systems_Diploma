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
    printf("Enter a character: ");
    fflush(stdin); fflush(stdout);
    scanf("%c", &input_char);

    printf("The ASCII Code of the character %c is %d", input_char, input_char);
    return 0;
}
