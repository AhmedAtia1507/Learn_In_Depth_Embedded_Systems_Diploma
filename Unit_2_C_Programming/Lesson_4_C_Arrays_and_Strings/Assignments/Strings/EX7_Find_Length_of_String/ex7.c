/**
 * @file ex7.c
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
    char arr_char[50] = {0};
    int num_char = 0, index = 0;;

    printf("Enter a string: ");
    fflush(stdin); fflush(stdout);
    gets(arr_char);

    while(arr_char[index] != '\0')
    {
        num_char++;
        index++;
    }

    printf("The length of this string is %d\n", num_char);
    return 0;
}