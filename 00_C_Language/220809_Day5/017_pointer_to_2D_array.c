#include <stdio.h>

int main()
{
	int numArr[3][4] = {
		{11,12,13,14},
		{21,22,23,24},
		{31,32,33,34}
	};

	//int** numPtr = numArr;
	int(*numPtr)[4] = numArr;
	printf("%p\n", *numPtr);
	printf("%p\n", *numArr);
	printf("%d\n", numPtr[2][1]);
	printf("%d\n", sizeof(numArr));
	printf("%d\n", sizeof(numPtr));


	return 0;
}