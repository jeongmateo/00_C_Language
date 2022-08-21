#include <stdio.h>


void printArray2(int arr[], int sizeOfArr)
{
	for (int i = 0; i < sizeOfArr; i++)
	{
		printf("%d ", arr[i]);
	}
	
}

int main_077()
{
	int numArr[10];

	for(int i=0; i< sizeof(numArr)/sizeof(int);i++)
	{
		numArr[i] = i;
	}
	printArray2(numArr, sizeof(numArr) / sizeof(int));
	
	return 0;
}