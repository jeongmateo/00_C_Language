#include <stdio.h>
#include <stdlib.h>

int main_mallocTest()
{
	int num1 = 20;
	int* numPtr1;

	numPtr1 = &num1;

	int* numPtr2;

	numPtr2 = malloc(sizeof(int));
	numPtr2 = &num1;
	*numPtr2 = num1;
	printf("%p\n", numPtr1);
	printf("%p\n", numPtr2);

	free(numPtr2);

	return 0;
}