/**
 * @file Q3.c
 * @author Ahmed Atia Said (atiaa6501@gmail.com)
 * @brief: C Program to reverse a string using pointers
 * @version 1.0
 * @date 2023-09-07
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[40] = {0};
    char* ptr_char = str;
    char temp;
    int index = 0;
    int string_length = 0;

    printf("Please enter a string: ");
    fflush(stdin); fflush(stdout);
    gets(str);
    string_length = strlen(str);

    for(index = 0; index < (string_length / 2); index++)
    {
        temp = *(ptr_char + index);
        *(ptr_char + index) = *(ptr_char + (string_length - index - 1));
        *(ptr_char + (string_length - index - 1)) = temp;
    }

    printf("The string after reversing is : %s", str);
    return 0;
}