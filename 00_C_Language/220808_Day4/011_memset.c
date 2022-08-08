#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main_memsetTest()
{
	long long* numPtr3 = malloc(sizeof(long long));

	/* memset 함수는 메모리에 저장되어 있는 값을 0으로 Reset할 때 사용한다*/
	memset(numPtr3, 0, sizeof(long long));

	printf("0x%llx\n", *numPtr3);

	free(numPtr3);

	return 0;
}