void hello()
{
    printf("Hello, world!\n");
}

int main_084()
{
    //↓ 반환값 자료형
    void (*fp)();   //반환값과 매개변수가 없는 함수 포인터 fp 선언
    //     ↑   ↖ 매개변수가 없음
    // 함수 포인터 이름
    fp = hello;     //함수 포인터 fp에 hello 메모리 주소 값을 저장
    fp();           //Hello, world! 함수 포인터로 hello 함수 호출

    return 0;
}