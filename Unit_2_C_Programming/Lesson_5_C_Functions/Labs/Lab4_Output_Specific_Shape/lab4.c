/**
 * @file lab4.c
 * @author Ahmed Atia Said (atiaa6501@gmail.com)
 * @brief: Code to print a specific frame
 * @version 1.0
 * @date 2023-08-10
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>

void print_frame(int arr[], int num_values);
int main(void)
{
    int arr_int[10] = {0,1,2,3,4,5,6,7,8,9};
    print_frame(arr_int, 10);

    return 0;
}
void print_frame(int arr[], int num_values)
{
    int index_1 = 0, index_2 = 0;
    for(index_1 = 0; index_1 < num_values; index_1++)
    {
        for(index_2 = index_1; index_2 < (num_values); index_2++)
        {
            printf("%d ", arr[index_2]);
        }
        printf("\n");
    }
}