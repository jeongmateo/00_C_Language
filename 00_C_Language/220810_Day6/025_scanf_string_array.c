#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main_string5()
{
	char s1[12];

	printf("���ڿ��� �Է��ϼ���: ");
	scanf("%[^\n]s", s1);

	printf("%s\n", s1);

	return 0;
}