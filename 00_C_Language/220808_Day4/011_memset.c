#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main_memsetTest()
{
	long long* numPtr3 = malloc(sizeof(long long));

	/* memset �Լ��� �޸𸮿� ����Ǿ� �ִ� ���� 0���� Reset�� �� ����Ѵ�*/
	memset(numPtr3, 0, sizeof(long long));

	printf("0x%llx\n", *numPtr3);

	free(numPtr3);

	return 0;
}