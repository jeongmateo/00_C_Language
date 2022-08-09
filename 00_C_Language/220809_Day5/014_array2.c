#include <stdio.h>

int main_array3()
{
	int numArr[10] = {0,};

	for (int i = 0; i < sizeof(numArr) / sizeof(int); i++)
	{
		numArr[i] = 11 * (i + 1);
		printf("%d\n", numArr[i]);
	}
	/*for (int j = 0; j < sizeof(numArr) / sizeof(int); j++)
	{
		numArr[j] *= 2;
		printf("%d\n", numArr[j]);
	}*/


	int* numPtr = numArr;

	printf("%d\n", sizeof(numArr));
	printf("%d\n", sizeof(numPtr));

	
}