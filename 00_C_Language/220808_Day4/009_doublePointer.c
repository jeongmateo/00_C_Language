#include <stdio.h>

int main_doublePointer()
{
	int* numPtr1;
	int** numPtr2;
	int num1 = 10;

	numPtr1 = &num1;
	numPtr2 = &numPtr1;

	printf("%d\n", num1);
	printf("%d\n", *numPtr1);
	printf("%d\n", **numPtr2);

	**numPtr2 = 50;
	printf("%d\n", num1);
	printf("%d\n", *numPtr1);
	printf("%d\n", **numPtr2);


	return 0;
}