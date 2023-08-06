/**
 * @file ex1.c
 * @author Ahmed Atia Said (atiaa6501@gmail.com)
 * @brief: Code to print the prime numbers between the two intervals given by user
 * @version 1.0
 * @date 2023-08-06
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>

void print_prime_number(int lim1, int lim2);

int main(int argc, char** argv)
{
    int num1 = 0, num2 = 0;
    
    printf("Please enter the interval you wish to print the prime numbers within:\n");
    fflush(stdin); fflush(stdout);
    scanf("%d %d", &num1, &num2);

    print_prime_number(num1, num2);
    return 0;
}

void print_prime_number(int lim1, int lim2)
{
    int index_1 = 0, index_2 = 0, not_prime = 0;
    printf("The prime numbers between %d and %d are:\n", lim1, lim2);
    
    for(index_1 = lim1; index_1 <= lim2; index_1++)
    {
        if(index_1 == 0 || index_1 == 1)
        {
            continue;
        }
        for(index_2 = 2; index_2 < index_1; index_2++)
        {
            if(index_1 == index_2)
            {
                continue;
            }
            
            if((index_1 % index_2) == 0)
            {
                not_prime = 1;
                break;
            }
        }
        if(not_prime == 0)
        {
            printf("%d\t", index_1);
        }
        not_prime = 0;
    }
}