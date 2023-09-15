/**
 * @file lab2.c
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
    float x[5] = {5, 16, 22, 3.5, 15};
    float y[5] = {0.0};

    int index = 0;
    for(index = 0; index < 5; index++)
    {
        y[index] = 5 * x[index] * x[index] + 3 * x[index] + 2;
        printf("y(%f) = %f\n", x[index], y[index]);
    }
    return 0;
}