#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main_string12()
{
	char s1[20];
	char s2[20];

	printf("���ڿ� 2���� �Է��� �ּ���: ");
	scanf("%s %s", s1, s2);

	printf("%s\n", s1);
	printf("%s\n", s2);

	int ret = strcmp(s1, s2);

	switch (ret)
	{
	case 0:
		printf("�� ���ڿ��� ����\n");
		break;
	case 1:
		printf("%s ���� %s�� �� ŭ", s2, s1);
		break;
	case -1:
		printf("%s ���� %s�� �� ŭ", s1, s2);
		break;
	}

	return 0;
}