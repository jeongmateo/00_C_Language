#define _CRT_SECURE_NO_WARNINGS    // strcpy ���� ���� ���� ������ ���� ����
#include <stdio.h>
#include <string.h>    // strcpy �Լ��� ����� ��� ����


typedef struct {
	char name[20];
	int age;
	char address[100];
}Person;
int main_050()
{
	Person p1;

	strcpy(p1.name, "������");
	p1.age = 31;
	strcpy(p1.address, "������ �д籸");

	printf("name: %s\n", p1.name);
	printf("age: %d\n", p1.age);
	printf("address: %s\n", p1.address);

	return 0;
}