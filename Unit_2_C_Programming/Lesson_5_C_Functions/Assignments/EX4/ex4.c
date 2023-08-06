/**
 * @file ex4.c
 * @author Ahmed Atia Said (atiaa6501@gmail.com)
 * @brief: C code to calculate the power of a given number using a recursive function
 * @version 1.0
 * @date 2023-08-06
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>

int calculate_power(int base_num, int power);

int main(int argc, char** argv)
{
    int base_num = 0, power = 0;

    printf("Please enter the base number: ");
    fflush(stdin); fflush(stdout);
    scanf("%d", &base_num);
    
    printf("Please enter power (positive integer): ");
    fflush(stdin); fflush(stdout);
    scanf("%d", &power);

    int result = calculate_power(base_num, power);

    printf("The result = %d\n", result);
    return 0;
}

int calculate_power(int base_num, int power)
{
    if(power == 1)
    {
        return base_num;
    }
    else if(power == 0)
    {
        return 1;
    }
    else if(power < 0)
    {
        printf("Error!! Only a positive integer power number is valid\n");
    }
    else
    {
        return (base_num * (calculate_power(base_num, (power - 1))));
    }
}