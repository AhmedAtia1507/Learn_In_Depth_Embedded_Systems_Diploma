/**
 * @file lab5.c
 * @author Ahmed Atia (atiaa6501@gmail.com)
 *
 * @version 1.0
 * @date 2023-07-10
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>

int main(int argc, char** argv)
{
    int students_num = 0;
    float sum = 0;
    int index = 0;
    float degree = 0;
    float average = 0.0;
    printf("Please enter the number of students: ");
    fflush(stdin); fflush(stdout);
    scanf("%d", &students_num);

    for(index = 0; index < students_num; index++)
    {
        printf("Please enter the degree of student no.%d: ",index+1);
        fflush(stdin); fflush(stdout);
        scanf("%f", &degree);

        sum += degree;
    }
    average = sum / students_num;
    printf("The average of the students' degrees = %.2f", average);
    return 0;
}

