/**
 * @file Q4.c
 * @author Ahmed Atia Said (atiaa6501@gmail.com)
 * @brief: C Program to print the elements of an array in reverse order
 * @version 1.0
 * @date 2023-09-07
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>

int main(void)
{
    int arr_int[15] = {0};
    int* ptr_int = arr_int;
    int num_elements = 0;
    int index = 0;
    printf("Please enter the number of elements to store in the array (max. 15): ");
    fflush(stdin); fflush(stdout);
    scanf("%d", &num_elements);

    for(index = 0; index < num_elements; index++)
    {
        printf("Please enter the element no.%d: ", index + 1);
        fflush(stdin); fflush(stdout);
        scanf("%d", &arr_int[index]);
    }

    printf("The elements of the array in reverse order are:\n");
    for(index = num_elements - 1; index >= 0 ; index--)
    {
        printf("The element no.%d is: %d\n", index + 1, *(ptr_int + index));
    }
    return 0;
}