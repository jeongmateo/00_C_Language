#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main_string23()
{
	char s1[30] = "The Little Prince";
	char* sArr[10] = { NULL, };	
	int i = 0;
	char* ptr = strtok(s1, " ");	//���� ���ڿ��� �������� s1 ���ڿ��� �ڸ�

	while (ptr != NULL)
	{
		sArr[i] = ptr;				// ���ڿ��� �ڸ� �� �޸� �ּҸ� ���ڿ� ������ �迭�� ����
		i++;						// �ε����� ���� ���� �ڸ� ���ڿ��� �ϳ��� �迭�� ����
		
		ptr = strtok(NULL, " ");	// ���� ���ڿ��� �߶� �����͸� ��ȯ
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