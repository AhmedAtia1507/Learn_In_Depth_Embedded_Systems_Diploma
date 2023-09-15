/**
 * @file Lab1.c
 * @author Ahmed Atia Said (atiaa6501@gmail.com)
 * @brief: Function to add two complex numbers using structures
 * @version 1.0
 * @date 2023-08-14
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>

struct SComplex
{
    double m_R; //Real Part
    double m_I; //Imaginary Part
};

struct SComplex ReadComplex(char name[]);
struct SComplex AddComplex(struct SComplex A, struct SComplex B);
void PrintComplex(char name[], struct SComplex C);

int main(void)
{
    struct SComplex A = ReadComplex("A");
    struct SComplex B = ReadComplex("B");

    struct SComplex C = AddComplex(A, B);

    PrintComplex("A", A);
    PrintComplex("B", B);
    PrintComplex("C", C);
    return 0;
}

struct SComplex ReadComplex(char name[])
{
    struct SComplex Data = {0.0};
    
    printf("Please enter the real part of complex number %s: ", name);
    fflush(stdin); fflush(stdout);
    scanf("%lf", &Data.m_R);

    printf("Please enter the Imaginary part of complex number %s: ", name);
    fflush(stdin); fflush(stdout);
    scanf("%lf", &Data.m_I);

    return Data;
}
struct SComplex AddComplex(struct SComplex A, struct SComplex B)
{
    struct SComplex C = {0.0};
    C.m_R = A.m_R + B.m_R;
    C.m_I = A.m_I + B.m_I;
    return C;
}
void PrintComplex(char name[], struct SComplex C)
{
    printf("The Complex Number %s is: %lf + %lf i\n", name, C.m_R, C.m_I);
}