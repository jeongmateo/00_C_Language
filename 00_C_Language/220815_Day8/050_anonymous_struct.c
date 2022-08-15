#define _CRT_SECURE_NO_WARNINGS    // strcpy 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>
#include <string.h>    // strcpy 함수가 선언된 헤더 파일


typedef struct {
	char name[20];
	int age;
	char address[100];
}Person;
int main_050()
{
	Person p1;

	strcpy(p1.name, "영숙이");
	p1.age = 31;
	strcpy(p1.address, "성남시 분당구");

	printf("name: %s\n", p1.name);
	printf("age: %d\n", p1.age);
	printf("address: %s\n", p1.address);

	return 0;
}