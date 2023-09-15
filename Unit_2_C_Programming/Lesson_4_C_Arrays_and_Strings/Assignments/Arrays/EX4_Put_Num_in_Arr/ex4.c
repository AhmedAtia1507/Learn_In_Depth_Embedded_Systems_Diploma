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
    int arr_num[10] = {0};
    int num_elements = 0;
    int inserted_num = 0;
    int inserted_location = 0;
    int index = 0;

    printf("Please enter the number of elements in the array (max. 10): ");
    fflush(stdin); fflush(stdout);
    scanf("%d", &num_elements);

    if((num_elements <= 10) && (num_elements > 0))
    {
        for(index = 0; index < num_elements; index++)
        {
            printf("Please enter element no.%d: ", index + 1);
            fflush(stdin); fflush(stdout);
            scanf("%d", &arr_num[index]);
        }

        printf("Please enter the number you wish to insert: ");
        fflush(stdin); fflush(stdout);
        scanf("%d", &inserted_num);

        printf("Please enter the location you wish for the number to be inserted in the array: ");
        fflush(stdin); fflush(stdout);
        scanf("%d", &inserted_location);

        if((inserted_location > 0) && (inserted_location <= 10) && (num_elements < 10))
        {
            for(index = num_elements; index > inserted_location; index--)
            {
                arr_num[index] = arr_num[index - 1];
            }
            arr_num[inserted_location] = inserted_num;
            num_elements++;

            printf("The new elements of the array are:\n");
            for(index = 0; index < num_elements; index++)
            {
                printf("%d\t", arr_num[index]);
            }
        }
        else
        {
            if(num_elements >= 10)
            {
                printf("Sorry! The number you entered cannot be inserted in the array as the array is full\n");
            }
            else
            {
                printf("Wrong input !!\n");
            }
            printf("The new elements of the array are:\n");
            for(index = 0; index < num_elements; index++)
            {
                printf("%d\t", arr_num[index]);
            }
        }
    }
    else
    {
        printf("Wrong input !!\n");
    }

    return 0;
}
