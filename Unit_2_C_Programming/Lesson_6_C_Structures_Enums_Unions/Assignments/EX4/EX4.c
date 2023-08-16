/**
 * @file EX4.c
 * @author Ahmed Atia Said (atiaa6501@gmail.com)
 * @brief: C Program to store information of student using structures
 * @version 1.0
 * @date 2023-08-16
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>

struct Sstudent
{
    char m_name[30];
    int m_roll;
    float m_marks;
};

struct Sstudent students[10];

int main(void)
{
    printf("******Please enter the information of the students******\n");
    int index = 0;

    for(index = 0; index < 10; index++)
    {
        printf("\nStudent no.%d: \n", (index + 1));
        printf("Please enter his/her name: ");
        fflush(stdin); fflush(stdout);
        gets(students[index].m_name);

        printf("Please enter his/her roll number: ");
        fflush(stdin); fflush(stdout);
        scanf("%d", &(students[index].m_roll));

        printf("Please enter his/her marks: ");
        fflush(stdin); fflush(stdout);
        scanf("%f", &(students[index].m_marks));
    }

    printf("The information you entered is:\n");

    for(index = 0; index < 10; index++)
    {
        printf("Student %d name: %s\n", (index + 1), students[index].m_name);
        printf("Student %d roll number: %d\n", (index + 1), students[index].m_roll);
        printf("Student %d marks: %0.2f\n", (index + 1), students[index].m_marks);
        printf("\n");
    }
    return 0;
}