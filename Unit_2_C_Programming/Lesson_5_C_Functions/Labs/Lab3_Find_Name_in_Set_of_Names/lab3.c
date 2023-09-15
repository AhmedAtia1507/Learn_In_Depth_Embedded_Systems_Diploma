/**
 * @file lab3.c
 * @author Ahmed Atia Said (atiaa6501@gmail.com)
 * @brief: Code to find a name in a given set of names
 * @version 1.0
 * @date 2023-08-10
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>
#include <string.h>

int find_name(char names[][14], int num_names, char name[]);
int main(void)
{
    char names[5][14] = {"Ahmed", "Mohamed", "Mahmoud", "Abdallah", "Abdelaziz"};
    char name[14];

    printf("Please enter a name: ");
    fflush(stdin); fflush(stdout);
    gets(name);

    if(find_name(names, 5, name) == 1)
    {
        printf("Found\n");
    }
    else
    {
        printf("Not found\n");
    }
}
int find_name(char names[][14], int num_names, char name[])
{
    int index = 0;
    for(index = 0; index < num_names; index++)
    {
        if(strcmp(names[index], name) == 0)
        {
            return 1;
        }
    }
    return 0;
}