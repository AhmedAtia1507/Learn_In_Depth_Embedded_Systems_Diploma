/*
 * test.c
 *
 *  Created on: Jul 21, 2023
 *      Author: hp
 */
#include<stdio.h>

int main(int argc, char** argv) {
  // Print the number of command-line arguments.
  printf("There are %d command-line arguments.\n", argc);

  // Print the command-line arguments.
  for (int i = 0; i < argc; i++) {
    printf("The %dth command-line argument is: %s\n", i + 1, argv[i]);
  }

  return 0;
}
//int main()
//{
////	char x[7];
////	x[0] = 'H';
////	x[1] = 'e';
////	x[2] = 0;
////	x[3] = 'l';
////	x[4] = 'l';
////	x[5] = 0;
////
////	printf("%s\n", x);
////	printf("%s\n", &x[0]);
////	printf("%s\n", &x[1]);
////	printf("%s\n", &x[3]);
////
////	//Implementing %s
////	int index = 0;
////	for(index = 0; (index < sizeof(x)) && (x[index] != '\0'); index++)
////	{
////		printf("%c", x[index]);
////	}
////	char arr_char[] = "Hello";
////	char* ptr = "Hi";
////	arr_char[2] = 'm';
////	ptr[0] = 'm';
////	printf("%s\n%s\n", arr_char, ptr);
//	return 0;
//}
