/**
 * @file ex6.c
 * @author Ahmed Atia (atiaa6501@gmail.com)
 *  
 * @version 1.0
 * @date 2023-07-21
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>

int main(int argc, char** argv)
{
    char str[50] = {0};
    char searched_char = 0;
    int index = 0, freq = 0;
    printf("Enter a string: ");
    fflush(stdin); fflush(stdout);
    scanf("%[^\n]",str); // read the input until newline character is encountered

    printf("Please enter a character to find frequency: ");
    fflush(stdin); fflush(stdout);
    scanf("%c", &searched_char);

    while(str[index] != '\0')
    {
        if(str[index] == searched_char)
        {
            freq++;
        }
        index++;
    }
    printf("Frequency of %c = %d", searched_char, freq);
    return 0;
}
