#define _CRT_SECURE_NO_WARNINGS    // strcpy 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>
#include <string.h>    // strcpy 함수가 선언된 헤더 파일
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