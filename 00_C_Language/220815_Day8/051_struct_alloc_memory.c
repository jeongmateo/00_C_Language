#define _CRT_SECURE_NO_WARNINGS    // strcpy ���� ���� ���� ������ ���� ����
#include <stdio.h>
#include <string.h>    // strcpy �Լ��� ����� ��� ����
#include <stdlib.h>

struct Person {
	char name[20];
	int age;
	char address[100];
};
int main_051()
{
	struct Person* p1 = malloc(sizeof(struct Person));

	strcpy(p1->name, "������");
	p1->age = 31;
	strcpy(p1->address, "������ �д籸");

	printf("name: %s\n", p1->name);
	printf("age: %d\n", p1->age);
	printf("address: %s\n", p1->address);

	free(p1);

	return 0;
}