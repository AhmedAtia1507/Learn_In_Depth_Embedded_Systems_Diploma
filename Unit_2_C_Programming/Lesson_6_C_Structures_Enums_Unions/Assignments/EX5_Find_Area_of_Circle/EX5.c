/**
 * @file EX5.c
 * @author Ahmed Atia Said (atiaa6501@gmail.com)
 * @brief: C Program to find area of a circle "Passing Arguments to Macros"
 * @version 1.0
 * @date 2023-08-16
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>
#define PI                      3.14159
#define CIRCLE_AREA(RADIUS)     (PI * RADIUS * RADIUS)

int main(void)
{
    float radius = 0.0;

    printf("Please enter the radius of the circle: ");
    fflush(stdin); fflush(stdout);
    scanf("%f", &radius);

    printf("The area of the circle whose radius equals %0.2f is %0.2f\n", radius, CIRCLE_AREA(radius));
    return 0;
}