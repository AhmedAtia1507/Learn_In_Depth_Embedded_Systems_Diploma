/**
 * @file ex8.c
 * @author Ahmed Atia (atiaa6501@gmail.com)
 *  
 * @version 1.0
 * @date 2023-07-21
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>
#include <string.h>

int main(int argc, char** argv)
{
    char arr_char[50] = {0};
    char rev_arr_char [50] = {0};
    int index = 0;

    printf("Please enter a string: ");
    fflush(stdin); fflush(stdout);
    gets(arr_char);
    int arr_length = strlen(arr_char);

    for(index = 0; index < arr_length; index++)
    {
        rev_arr_char[index] = arr_char[arr_length - index - 1];
    }

    rev_arr_char[index] = '\0';

    printf("The string after reverse is: %s\n", rev_arr_char);
    return 0;
}