#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main_string6()
{
	char* s1 = malloc(sizeof(char)*10);

	printf("���ڿ��� �Է��ϼ��� : ");
	scanf("%[^\n]s", s1);

	printf("%s\n", s1);

	free(s1);

	return 0;
}