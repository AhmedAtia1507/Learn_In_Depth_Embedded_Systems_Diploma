/**
 * @file ex3.c
 * @author Ahmed Atia Said (atiaa6501@gmail.com)
 * @brief: C code to reverse a given sentence using a recursive function
 * @version 1.0
 * @date 2023-08-06
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>
#include <string.h>
void reverse_string(char* arr_char, int arr_len);

int main(int argc, char** argv)
{
    char arr_char[50] = {0};

    printf("Please enter a sentence: ");
    fflush(stdin); fflush(stdout);
    gets(arr_char);

    reverse_string(arr_char, strlen(arr_char));

    printf("The sentence after reversing is: %s", arr_char);
    return 0;
}

void reverse_string(char* arr_char, int arr_len)
{
    if(arr_char != NULL)
    {
        if(!(arr_len == 0 || arr_len == 1))
        {
            char temp = arr_char[arr_len - 1];
            arr_char[arr_len - 1] = arr_char[0];
            arr_char[0] = temp;
            reverse_string((arr_char + 1), (arr_len - 2));
        }
        else
        {
            /*Do nothing*/
        }
    }
    else
    {
        printf("Error!!\n");
    }
}