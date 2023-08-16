/**
 * @file EX2.c
 * @author Ahmed Atia Said (atiaa6501@gmail.com)
 * @brief: C Program to add two distances in inch-feet system using structures
 * @version 1.0
 * @date 2023-08-16
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>

struct Sdistance
{
    int m_feet;
    float m_inch;
};

struct Sdistance add_Distances(struct Sdistance d1, struct Sdistance d2);

int main(void)
{
    struct Sdistance distance_1, distance_2, total_distance;
    printf("******Please enter information of the first distance******\n");

    printf("Enter Feet: ");
    fflush(stdin); fflush(stdout);
    scanf("%d", &(distance_1.m_feet));

    printf("Enter Inch: ");
    fflush(stdin); fflush(stdout);
    scanf("%f", &(distance_1.m_inch));

    printf("******Please enter information of the second distance******\n");

    printf("Enter Feet: ");
    fflush(stdin); fflush(stdout);
    scanf("%d", &(distance_2.m_feet));

    printf("Enter Inch: ");
    fflush(stdin); fflush(stdout);
    scanf("%f", &(distance_2.m_inch));

    total_distance = add_Distances(distance_1, distance_2);

    printf("The total distance = %dft %0.2f\"", total_distance.m_feet, total_distance.m_inch);
    return 0;
}

struct Sdistance add_Distances(struct Sdistance d1, struct Sdistance d2)
{
    struct Sdistance result;

    result.m_feet = d1.m_feet + d2.m_feet + ((int)(d1.m_inch + d2.m_inch) / 12);
    result.m_inch = (d1.m_inch + d2.m_inch) - 12 * ((int)(d1.m_inch + d2.m_inch)/ 12);

    return result;
}