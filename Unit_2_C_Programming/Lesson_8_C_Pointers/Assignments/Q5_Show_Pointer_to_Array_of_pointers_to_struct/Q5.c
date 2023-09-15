/**
 * @file Q5.c
 * @author Ahmed Atia Said (atiaa6501@gmail.com)
 * @brief 
 * @version 1.0
 * @date 2023-09-07
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>

typedef struct employee
{
    char* m_Name;
    int m_ID;
}Semployee;

int main(void)
{
    Semployee* arr_struct[5] = {NULL};
    Semployee* (*ptr_to_arr)[5] = &arr_struct;

    Semployee Sstudent = {"Ahmed Atia Said", 1001};
    (*ptr_to_arr)[0] = &Sstudent;

    printf("Employee Name: %s\n", (*ptr_to_arr)[0] -> m_Name);
    printf("Employee Name: %d\n", (*ptr_to_arr)[0] -> m_ID);
    return 0;
}