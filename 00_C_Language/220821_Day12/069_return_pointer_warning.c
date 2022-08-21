#include <stdio.h>
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일

int* ten()    // int 포인터를 반환하는 ten 함수 정의
{
	int* numPtr = (int*)malloc(sizeof(int));    // int 크기만큼 동적 메모리 할당

	*numPtr = 10;    // 역참조로 10 저장

	return numPtr;   // 포인터 반환. malloc으로 메모리를 할당하면 함수가 끝나도 사라지지 않음
}

int mai_069()
{
	int* numPtr;

	numPtr = ten();

	printf("%d\n", *numPtr);

	free(numPtr);

	return 0;
}