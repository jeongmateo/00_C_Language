#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main_string23()
{
	char s1[30] = "The Little Prince";
	char* sArr[10] = { NULL, };	
	int i = 0;
	char* ptr = strtok(s1, " ");	//공백 문자열을 기준으로 s1 문자열을 자름

	while (ptr != NULL)
	{
		sArr[i] = ptr;				// 문자열을 자른 뒤 메모리 주소를 문자열 포인터 배열에 저장
		i++;						// 인덱스를 증가 시켜 자름 문자열을 하나씩 배열에 저장
		
		ptr = strtok(NULL, " ");	// 다음 문자열을 잘라서 포인터를 반환
	}

	for (int j = 0; j < i; j++)
	{
		if (sArr[j] != NULL)
		{
			printf("%s\n", sArr[j]);
		}
	}

	return 0;
}