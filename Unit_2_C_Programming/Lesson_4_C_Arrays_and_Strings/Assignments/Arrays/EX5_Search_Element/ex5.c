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
    int index = 0;
    int num_to_be_searched = 0;
    int num_found = 0;

    printf("Please enter the number of elements in the array (max. 10): ");
    fflush(stdin); fflush(stdout);
    scanf("%d", &num_elements);

    if((num_elements > 0) && (num_elements <= 10))
    {
        for(index = 0; index < num_elements; index++)
        {
            printf("Please enter element no.%d: ",index + 1);
            fflush(stdin); fflush(stdout);
            scanf("%d", &arr_num[index]);
        }

        printf("Please enter the number to be searched in the array: ");
        fflush(stdin); fflush(stdout);
        scanf("%d", &num_to_be_searched);

        for(index = 0; index < num_elements; index++)
        {
            if(arr_num[index] == num_to_be_searched)
            {
                num_found = 1;
                break;
            }
        }
        if(num_found == 1)
        {
            printf("The number %d is the element no.%d in the array (located at index %d)\n", num_to_be_searched, index + 1, index);
        }
        else
        {
            printf("Sorry. The number %d is not in the array\n", num_to_be_searched);
        }
    }
    else
    {
        printf("The maximum number of elements allowed is 10\n");
    }
    
    return 0;
}
