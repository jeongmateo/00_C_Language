#define _CRT_SECURE_NO_WARNINGS    // strcpy ���� ���� ���� ������ ���� ����
#include <stdio.h>
#include <string.h>    // strcpy �Լ��� ����� ��� ����
#include <stdlib.h>

struct Person {
	char name[20];
	int age;
	char address[100];
};
int main_053()
{
	struct Person p1;
	struct Person* ptr;

	ptr = &p1;

	ptr->age = 30;

	printf("age: %d\n", p1.age);
	printf("age: %d\n", ptr->age);

	return 0;
}