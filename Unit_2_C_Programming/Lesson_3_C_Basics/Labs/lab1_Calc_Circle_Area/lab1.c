/**
 * @file lab1.c
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
    float circle_radius = 0; 
    int choice = 0;
    printf("Enter the radius of a Circle: \n");
    fflush(stdin); fflush(stdout);
    scanf("%f", &circle_radius);
    
    printf("Please select whether you want to calculate the area or the circumference of this circle: \n");
    printf("1. Area\n2.Circumference\n");

    fflush(stdin); fflush(stdout);
    scanf("%d", &choice);

    switch(choice)
    {
        case 1: //Area
        {
            float area = 3.14159 * circle_radius * circle_radius;
            printf("The area of the circle = %.2f\n", area);
            break;
        }
        case 2:
        {
            float circumference = 2 * 3.14159 * circle_radius;
            printf("The circumference of the circle = %.2f\n", circumference);
            break;
        }
        default:
        {
            printf("Wrong Choice\n");
            break;
        }
    }
    return 0;
}