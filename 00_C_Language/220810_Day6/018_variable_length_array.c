#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main_malloc_array()
{
	/*int numArr[10];
	int *numPtr = malloc(sizeof(int)*10);

	numArr[0] = 10;
	numPtr[0] = 10;
	numPtr[9] = 30;

	printf("%d\n", numPtr[0]);
	printf("%d\n", numPtr[9]);

	free(numPtr);*/

	int size;

	scanf("%d", &size);

	int* numPtr = malloc(sizeof(int) * size);

	for (int i = 0; i < size; i++)
	{
		numPtr[i] = i + 1;
		printf("%d\n", numPtr[i]);
	}

	free(numPtr);

	return 0;
}