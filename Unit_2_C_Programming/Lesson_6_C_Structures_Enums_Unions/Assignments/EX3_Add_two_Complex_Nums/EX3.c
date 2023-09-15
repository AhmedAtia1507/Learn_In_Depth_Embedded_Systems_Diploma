/**
 * @file EX3.c
 * @author Ahmed Atia Said (atiaa6501@gmail.com)
 * @brief: C Program to add two complex numbers by passing structure to a function
 * @version 1.0
 * @date 2023-08-16
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>

struct SComplex
{
    float m_real;
    float m_imaginary;
};

struct SComplex addComplex(struct SComplex A, struct SComplex B);
int main(void)
{
    struct SComplex num1, num2, result;

    printf("******Please enter the first Complex Number******\n");

    printf("Please enter the real part: ");
    fflush(stdin); fflush(stdout);
    scanf("%f", &(num1.m_real));

    printf("Please enter the imaginary part: ");
    fflush(stdin); fflush(stdout);
    scanf("%f", &(num1.m_imaginary));

    printf("******Please enter the second Complex Number******\n");

    printf("Please enter the real part: ");
    fflush(stdin); fflush(stdout);
    scanf("%f", &(num2.m_real));

    printf("Please enter the imaginary part: ");
    fflush(stdin); fflush(stdout);
    scanf("%f", &(num2.m_imaginary));

    result = addComplex(num1, num2);

    printf("The result = %0.2f + %0.2fi\n", result.m_real, result.m_imaginary);
    return 0;
}
struct SComplex addComplex(struct SComplex A, struct SComplex B)
{
    struct SComplex result;
    result.m_real = A.m_real + B.m_real;
    result.m_imaginary = A.m_imaginary + B.m_imaginary;
    return result;
}