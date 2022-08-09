#include <stdio.h>

int main_array1()
{

	/* 배열의 인덱스가 0부터 시작하는 이유는 메모리 주소가 0부터 시작하기 때문입니다.
	배열도 포인터이므로 인덱스가 0부터 시작하면 요소 접근과 포인 연산이 일치하게 됩니다*/
	int numArr[10] = { 11,22,33,44,55,66,77,88,99,110};
	int sum = 0;
	/* q배열을 0으로 모두 초기화 */
	/*int numArr2[10] = { 0,};*/

	/*printf("%d\n", numArr[0]);
	printf("%d\n", numArr[5]);
	printf("%d\n", numArr[9]);*/

	/*for (int i = 0; i < sizeof(numArr)/sizeof(int); i++)
	{
		printf("%d\n", numArr[i]);
	}

	for (int i = sizeof(numArr) / sizeof(int) -1;i>=0; i--)
	{
		printf("%d\n", numArr[i]);
	}*/

	for (int i = 0; i < sizeof(numArr) / sizeof(int); i++)
	{
		sum += numArr[i];
		
	}
	printf("%d\n", sum);

	return 0;
}