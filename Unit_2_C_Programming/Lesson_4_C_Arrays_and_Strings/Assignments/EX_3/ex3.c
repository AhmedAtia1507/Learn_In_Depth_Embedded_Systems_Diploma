/**
 * @file ex3.c
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
    int matrix[10][10] = {{0}};
    int transpose_matrix[10][10] = {{0}};
    int row_num = 0, column_num = 0;
    int index_1 = 0, index_2 = 0;

    printf("Please enter the number of columns (max. 10): ");
    fflush(stdin); fflush(stdout);
    scanf("%d", &column_num);

    printf("Please enter the number of rows (max. 10): ");
    fflush(stdin); fflush(stdout);
    scanf("%d", &row_num);

    if((column_num <= 10) && (row_num <= 10))
    {
        printf("Please enter the elements of the matrix:\n");
        for(index_1 = 0; index_1 < row_num; index_1++)
        {
            for(index_2 = 0; index_2 < column_num; index_2++)
            {
                printf("Please enter the element(%d, %d): ", index_1, index_2);
                fflush(stdin); fflush(stdout);
                scanf("%d",&matrix[index_1][index_2]);
            }
        }

        printf("The matrix entered is:\n");
        for(index_1 = 0; index_1 < row_num; index_1++)
        {
            for(index_2 = 0; index_2 < column_num; index_2++)
            {
                printf("%d\t", matrix[index_1][index_2]);
            }
            printf("\n");
        }

        printf("The transpose of this matrix is:\n");
        for(index_1 = 0; index_1 < row_num; index_1++)
        {
            for(index_2 = 0; index_2 < column_num; index_2++)
            {
                transpose_matrix[index_2][index_1] = matrix[index_1][index_2];
            }
        }

        for(index_1 = 0; index_1 < column_num; index_1++)
        {
            for(index_2 = 0; index_2 < row_num; index_2++)
            {
            	printf("%d\t", transpose_matrix[index_1][index_2]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Wrong Input !!\n");
    }
    return 0;
}
