#include <stdio.h>
#include <stdlib.h>    // malloc, free �Լ��� ����� ��� ����

int* ten()    // int �����͸� ��ȯ�ϴ� ten �Լ� ����
{
	int* numPtr = (int*)malloc(sizeof(int));    // int ũ�⸸ŭ ���� �޸� �Ҵ�

	*numPtr = 10;    // �������� 10 ����

	return numPtr;   // ������ ��ȯ. malloc���� �޸𸮸� �Ҵ��ϸ� �Լ��� ������ ������� ����
}

int mai_069()
{
	int* numPtr;

	numPtr = ten();

	printf("%d\n", *numPtr);

	free(numPtr);

	return 0;
}