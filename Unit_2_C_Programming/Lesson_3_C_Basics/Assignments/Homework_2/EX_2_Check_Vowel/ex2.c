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
    char input_char = 0;
    printf("Enter an alphabet: ");
    fflush(stdin); fflush(stdout);
    scanf("%c", &input_char);

    //check if the input is an alphabet
    if(((input_char >= 'a') && (input_char <= 'z')) || ((input_char >= 'A') && (input_char <= 'Z')))
    {
        switch (input_char)
        {
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
            {
                printf("The alphabet %c is a vowel\n",input_char);
                break;
            }
            default:
            {
                printf("The alphabet %c is consonant\n", input_char);
                break;
            }
        }
    }
    else
    {
        printf("The character you entered is not an alphabet\n");
    }
    return 0;
}