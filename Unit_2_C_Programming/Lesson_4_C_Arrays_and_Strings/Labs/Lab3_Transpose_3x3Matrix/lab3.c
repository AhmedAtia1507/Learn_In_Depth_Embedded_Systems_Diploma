/**
 * @file lab3.c
 * @author Ahmed Atia (atiaa6501@gmail.com)
 * 
 * @version 1.0
 * @date 2023-07-19
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>

int main(int argc, char** argv)
{
    float matrix[3][3] = {{0.0}};
    float transpose_matrix[3][3] = {{0.0}};
    int index_1 = 0;
    int index_2 = 0;

    printf("Please enter the elements of the 3x3 matrix you wish to get the transpose of:\n");
    for(index_1 = 0; index_1 < 3; index_1++)
    {
        printf("Please enter the elements of row %d:\n", index_1);
        fflush(stdin); fflush(stdout);
        scanf("%f %f %f", &matrix[index_1][0], &matrix[index_1][1], &matrix[index_1][2]);
    }

    fflush(stdin); fflush(stdout);
    printf("The matrix you entered is:\n");
    
    for(index_1 = 0; index_1 < 3; index_1++)
    {
        for(index_2 = 0; index_2 < 3; index_2++)
        {
            printf("%.2f\t", matrix[index_1][index_2]);
        }
        printf("\n");
    }
    for(index_1 = 0; index_1 < 3; index_1++)
    {
        for(index_2 = 0; index_2 < 3; index_2++)
        {
            transpose_matrix[index_1][index_2] = matrix[index_2][index_1];
        }
    }

    printf("The transpose of the matrix is:\n");
    
    for(index_1 = 0; index_1 < 3; index_1++)
    {
        for(index_2 = 0; index_2 < 3; index_2++)
        {
            printf("%.2f\t", transpose_matrix[index_1][index_2]);
        }
        printf("\n");
    }
    return 0;
}
