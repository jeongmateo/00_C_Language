#include <stdio.h>
#include <stdarg.h>

// args는 고정 매개변수
void printNumbers(int args, ...)
{
    va_list ap;             //가변인자 목로. 가변인자 메모리 주소를 저장하는 포인터
    printf("%d ", args);
    
    va_start(ap, args);     //가변 인자를 가져올 수 있도록 포인터를 설정
    for (int i = 0; i < args; i++)
    {
        int num = va_arg(ap, int);  //가변 인자 포인터에서 특정 자료형 크기만큼 값을 가져옴

        printf("%d ", num);
    }
    va_end(ap);         //가변 인자 처리가 끝났을 때 포인터를 NULL로 초기화

    printf("\n");
}

int main_81()
{
    printNumbers(1, 10);
    printNumbers(2, 10, 20);
    printNumbers(3, 10, 20, 30);
    printNumbers(4, 10, 20, 30, 40);

    return 0;
}