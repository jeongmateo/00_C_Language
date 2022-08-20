#include <stdio.h>
#include <stdlib.h>

int main()
{
	short* numPtr1 = malloc(sizeof(short));
	int* numPtr2;
	int* numPtr = malloc(sizeof(int));
	char* cPtr;

	*numPtr1 = 0x1234;
	numPtr2 = (int*)numPtr1;

	*numPtr = 0x12345678;

	cPtr = (char*)numPtr;	//int 포인터 numPtr을 char 포인터로 변환. 메모리 주소만 저장됨
	
	printf("0x%x\n", *cPtr);	//0x78: 낮은 자릿수 1바이트를 가져오므로 0x78
	printf("0x%x\n", *numPtr2);	//0x78: 낮은 자릿수 1바이트를 가져오므로 0x78

	free(numPtr);	//동적 메모리 해제
	free(numPtr1);

	return 0;
		
}