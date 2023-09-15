/**
 * @file Q2.c
 * @author Ahmed Atia Said (atiaa6501@gmail.com)
 * @brief: C Program to print alphabet using a pointer
 * @version 1.0
 * @date 2023-09-07
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>

int main(void)
{
    char first_char = 'A';
    char* ptr_char = &first_char;

    while(((*ptr_char) >= 'A') && ((*ptr_char) <= 'Z'))
    {
        printf("%c  ", (*ptr_char));
        fflush(stdin); fflush(stdout);
        *ptr_char = (*ptr_char) + 1;
    }
    printf("\n");

    return 0;
}