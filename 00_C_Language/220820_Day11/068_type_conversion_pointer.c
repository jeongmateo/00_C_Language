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

	cPtr = (char*)numPtr;	//int ������ numPtr�� char �����ͷ� ��ȯ. �޸� �ּҸ� �����
	
	printf("0x%x\n", *cPtr);	//0x78: ���� �ڸ��� 1����Ʈ�� �������Ƿ� 0x78
	printf("0x%x\n", *numPtr2);	//0x78: ���� �ڸ��� 1����Ʈ�� �������Ƿ� 0x78

	free(numPtr);	//���� �޸� ����
	free(numPtr1);

	return 0;
		
}