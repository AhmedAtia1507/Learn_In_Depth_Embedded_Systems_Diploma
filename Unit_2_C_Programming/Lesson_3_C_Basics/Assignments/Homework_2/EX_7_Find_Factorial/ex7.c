/**
 * @file ex7.c

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
    int num = 0;
    int factorial = 1;

    printf("Please enter a number you wish to get the factorial of: ");
    fflush(stdin); fflush(stdout);
    scanf("%d", &num);

    if(num >= 0)
    {
        if(num == 0)
        {
            factorial = 1;
        }
        else
        {
            int index = 0;
            for (index = num; index > 0; index--)
            {
                factorial *= index;
            }
        }
        printf("The factorial of %d is %d", num, factorial);
    }
    else
    {
        printf("Error! The number you entered is negative\n");
    }
    return 0;
}