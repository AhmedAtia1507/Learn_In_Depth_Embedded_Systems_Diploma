/**
 * @file ex1.c
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
    float arr_1[2][2] = {{0.0}};
    float arr_2[2][2] = {{0.0}};
    float result[2][2] = {{0.0}};
    int index_1 = 0;
    int index_2 = 0;

    printf("Please enter the elements of the first array:\n");
    for(index_1 = 0; index_1 < 2; index_1++)
    {
        for(index_2 = 0; index_2 < 2; index_2++)
        {
            printf("Please enter element (%d, %d): ", index_1, index_2);
            fflush(stdin); fflush(stdout);
            scanf("%f", &arr_1[index_1][index_2]);
        }
    }

    printf("Please enter the elements of the second array:\n");
    for(index_1 = 0; index_1 < 2; index_1++)
    {
        for(index_2 = 0; index_2 < 2; index_2++)
        {
            printf("Please enter element (%d, %d): ", index_1, index_2);
            fflush(stdin); fflush(stdout);
            scanf("%f", &arr_2[index_1][index_2]);
        }
    }

    printf("The result is:\n");
    for(index_1 = 0; index_1 < 2; index_1++)
    {
        for(index_2 = 0; index_2 < 2; index_2++)
        {
            result[index_1][index_2] = arr_1[index_1][index_2] + arr_2[index_1][index_2];
            printf("%f\t", result[index_1][index_2]);
        }
        printf("\n");
    }
    return 0;
}