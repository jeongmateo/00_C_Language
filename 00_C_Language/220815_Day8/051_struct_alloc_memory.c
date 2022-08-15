#define _CRT_SECURE_NO_WARNINGS    // strcpy 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>
#include <string.h>    // strcpy 함수가 선언된 헤더 파일
#include <stdlib.h>

struct Person {
	char name[20];
	int age;
	char address[100];
};
int main_051()
{
	struct Person* p1 = malloc(sizeof(struct Person));

	strcpy(p1->name, "영숙이");
	p1->age = 31;
	strcpy(p1->address, "성남시 분당구");

	printf("name: %s\n", p1->name);
	printf("age: %d\n", p1->age);
	printf("address: %s\n", p1->address);

	free(p1);

	return 0;
}