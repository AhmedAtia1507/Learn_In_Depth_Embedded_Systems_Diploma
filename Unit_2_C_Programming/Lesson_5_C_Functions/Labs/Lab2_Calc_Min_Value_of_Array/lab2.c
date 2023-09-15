/**
 * @file lab2.c
 * @author Ahmed Atia Said (atiaa6501@gmail.com)
 * @brief: Code to find the minimum value of a given array using functions
 * @version 1.0
 * @date 2023-08-10
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>

int min_value(int values[], int n);
int main(void)
{
    int arr[4] = {9, -7, 1, 5};
    printf("Minimum Value is %d\n", min_value(arr, 4));
    return 0;
}
int min_value(int values[], int n)
{
    int min_value = values[0];
    int index = 0;
    for(index = 1; index < n; index++)
    {
        if(min_value > values[index])
        {
            min_value = values[index];
        }
    }
    return min_value;
}