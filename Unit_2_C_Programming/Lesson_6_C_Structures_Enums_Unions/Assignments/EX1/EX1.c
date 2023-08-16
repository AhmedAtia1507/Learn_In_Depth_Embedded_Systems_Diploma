/**
 * @file EX1.c
 * @author Ahmed Atia Said (atiaa6501@gmail.com)
 * @brief: C Program to store information of a student using structs
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
}s;

int main(void)
{
    printf("*******Please enter information of Student*******\n");

    printf("Please enter his/her name: ");
    fflush(stdin); fflush(stdout);
    gets(s.m_name);

    printf("Please enter his/her roll number: ");
    fflush(stdin); fflush(stdout);
    scanf("%d", &(s.m_roll));

    printf("Please enter his/her mark: ");
    fflush(stdin); fflush(stdout);
    scanf("%f", &(s.m_marks));

    printf("The information you entered is:\n");
    printf("Student Name: %s\n", s.m_name);
    printf("Student Roll Number: %d\n", s.m_roll);
    printf("Student Mark: %.2f\n", s.m_marks);
    return 0;
}