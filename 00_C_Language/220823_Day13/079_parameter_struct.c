#define _CRT_SECURE_NO_WARNINGS   // strcpy 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>
#include <string.h>               // strcpy 함수가 선언된 헤더 파일

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

	strcpy(p1.name,"한숙이");
	p1.age = 31;
	strcpy(p1.address, "경기도 성남시 분당구");

	printPerson(&p1);

	return 0;
}