#include <stdio.h>

// 덧셈 함수
int add2(int a, int b)    // int형 반환값, int형 매개변수 두 개
{
    return a + b;
}

// 곱셈 함수
int mul2(int a, int b)    // int형 반환값, int형 매개변수 두 개
{
    return a * b;
}

int main_085()
{
    int (*fpointer)(int, int);
    //↓ 반환값 자료형
    int (*fp)(int, int);    // int형 반환값, int형 매개변수 두 개가 있는 함수 포인터 fp 선언
    //    ↑      ↖ int형 매개변수 두 개
    // 함수 포인터 이름
    fpointer = add2;
    printf("%d\n", fpointer(20,30));
    fpointer = mul2;
    printf("%d\n", fpointer(20,30));

    return 0;
}