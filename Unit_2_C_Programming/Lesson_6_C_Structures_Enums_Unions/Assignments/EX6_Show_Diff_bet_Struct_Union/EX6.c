/**
 * @file EX6.c
 * @author Ahmed Atia Said (atiaa6501@gmail.com)
 * @brief: C Program to clarify the difference between structures and unions
 * @version 1.0
 * @date 2023-08-17
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>

//Here, the union elements share the memory slot whose
//size equals to the size of the largest element of the union which is
//the character array ---> size = 32 bytes
//Therefore, the size of the union = 32 bytes
union job
{
    char name[32];
    float salary;
    int worker_no;
}u;

/*Here, the structure elements are stored in one of the two cases:
    1) If Packing is enabled: then the elements are stored in consecutive form
        ex.
        #pragma pack(1)
        struct SEmployee
        {
            char data1; //0x50
            int data2; //0x51
            short data3; //0x55
        };
        here, all the data are stored consecutively.
        size of the struct = 1 + 4 + 2 = 7 bytes
    2) If Padding is enabled "Default": the elements are stored in their
        natural size boundary address
        struct SEmployee
        {
            char data1; //0x50
            int data2; //0x54
            short data3; //0x58
        };
        size = 16 bytes

    In the case at hand shown below, it won't make a difference as in both cases, the data
    will be stored in their natural size boundary address
    so, the size of the struct below = 32 + 4 + 4 = 40 bytes
*/

struct job1
{
    char name[32];
    float salary;
    int worker_no;
}s;

int main(void)
{
    printf("Size of union = %d\n", sizeof(u));
    printf("Size of structure = %d\n", sizeof(s));
    return 0;
}
