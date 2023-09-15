/**
 * @file ex2.c
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
    float arr_float[20] = {0.0};
    int data_num = 0;
    int index = 0;
    float data_sum = 0.0;
    float data_average = 0.0;

    printf("Please enter the number of data to be entered: ");
    fflush(stdin); fflush(stdout);
    scanf("%d", &data_num);

    for(index = 0; index < data_num; index++)
    {
        printf("Please enter data no.%d: ", index + 1);
        fflush(stdin); fflush(stdout);
        scanf("%f", &arr_float[index]);
    }

    for(index = 0; index < data_num; index++)
    {
        data_sum += arr_float[index];
    }

    data_average = data_sum / data_num;

    printf("The average of these numbers = %f", data_average);
    return 0;
}