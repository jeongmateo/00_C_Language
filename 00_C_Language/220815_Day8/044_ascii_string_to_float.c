#include <stdio.h>
#include <stdlib.h>		//atof 함수가 선언된 헤더 파일

int main_044()
{
    char* s1 = "35.283672 3.e5 9.281772 7.e-5";  // "35.283672"은 문자열
    float num1;
    float num2;
    float num3;
    float num4;
    char* end;

    num1 = strtof(s1,&end);         // 문자열을 실수로 변환하여 num1에 할당
    num2 = strtof(end, &end);
    num3 = strtof(end, &end);
    num4 = strtof(end, NULL);
    
    printf("%f\n",num1);    // 35.283672
    printf("%e\n", num2);    // 35.283672
    printf("%f\n", num3);    // 35.283672
    printf("%e\n", num4);    // 35.283672

    return 0;
}