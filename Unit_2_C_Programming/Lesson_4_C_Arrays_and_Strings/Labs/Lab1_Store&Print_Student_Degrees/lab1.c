/**
 * @file lab1.c
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
    float students_degrees[10] = {0.0};
    int index = 0;

    for(index = 0; index < 10; index++)
    {
        printf("Please enter the degree of student no.%d: ", index + 1);
        fflush(stdin); fflush(stdout);
        scanf("%f", &students_degrees[index]);
    }

    for(index = 0; index < 10; index++)
    {
        printf("Student no.%d's degree is %f\n", index + 1, students_degrees[index]);
    }
    return 0;
}