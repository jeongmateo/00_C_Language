#define _CRT_SECURE_NO_WARNINGS    // strcpy 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>
#include <string.h>    // strcpy 함수가 선언된 헤더 파일

struct Person {
    char name[20];
    int age;
    char address[100];
};

struct Person getPerson(int index)    // Person 구조체를 반환하는 getPerson 함수 정의
{
    struct Person p;
    if (index == 1)
    {
        strcpy(p.name, "홍길동");
        p.age = 30;
        strcpy(p.address, "서울시 용산구 한남동");
    }
    else if (index == 2)
    {
        strcpy(p.name, "LoganJ");
        p.age = 31;
        strcpy(p.address, "경기도 성남시 분당동");
    }
    else
    {
        strcpy(p.name, "N/A");
        p.age = 0;
        strcpy(p.address, "N/A");
    }
    

    return p;    // 구조체 변수 반환
}

int main_071()
{
    struct Person p1;
    int index = 2;

    p1 = getPerson(index);    // 반환된 구조체 변수의 내용이 p1로 모두 복사됨

    // getPerson에서 저장한 값이 출력됨
    printf("이름: %s\n", p1.name);       // 홍길동
    printf("나이: %d\n", p1.age);        // 30
    printf("주소: %s\n", p1.address);    // 서울시 용산구 한남동

    return 0;
}