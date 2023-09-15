/**
 * @file Q1.c
 * @author Ahmed Atia Said (atiaa6501@gmail.com)
 * @brief: C Program to demaonstrate how the pointers are handled 
 * @version 1.0
 * @date 2023-09-07
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>

int main(void)
{
    int m = 29;
    int * ab = NULL;

    printf("Address of variable 'm' : 0x%x\n", &m);
    printf("Value of variable 'm' : %d\n", m);
    printf("\n");

    ab = &m;
    printf("Now, the pointer 'ab' is assigned with the address of variable 'm'\n");
    printf("Address of Pointer 'ab' : 0x%x\n", &ab);
    printf("Contents of Pointer 'ab' : 0x%x\n", ab);
    printf("The value the pointer 'ab' is pointing to now : %d\n", *ab);
    printf("\n");
    
    m = 34;
    printf("The value of variable 'm' is assigned to 34 now\n");
    printf("Address of Pointer 'ab' : 0x%x\n", &ab);
    printf("Contents of Pointer 'ab' : 0x%x\n", ab);
    printf("The value the pointer 'ab' is pointing to now : %d\n", *ab);
    printf("\n");
    
    *ab = 7;
    printf("Using Pointer 'ab', the value of variable 'm' is assigned to 7 now\n");
    printf("Address of variable 'm' : 0x%x\n", &m);
    printf("Value of variable 'm' : %d\n", m);
    return 0;
}