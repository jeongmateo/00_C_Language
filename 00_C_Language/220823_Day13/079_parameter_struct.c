#define _CRT_SECURE_NO_WARNINGS   // strcpy ���� ���� ���� ������ ���� ����
#include <stdio.h>
#include <string.h>               // strcpy �Լ��� ����� ��� ����

struct Person 
{
	char name[20];
	int age;
	char address[30];
};

void printPerson(struct Person *p)
{
	printf("%s\n", p->name);
	printf("%d\n", p->age);
	printf("%s\n", p->address);
}

int main_079()
{
	struct Person p1;

	strcpy(p1.name,"�Ѽ���");
	p1.age = 31;
	strcpy(p1.address, "��⵵ ������ �д籸");

	printPerson(&p1);

	return 0;
}