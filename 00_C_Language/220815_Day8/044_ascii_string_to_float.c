#include <stdio.h>
#include <stdlib.h>		//atof �Լ��� ����� ��� ����

int main_044()
{
    char* s1 = "35.283672 3.e5 9.281772 7.e-5";  // "35.283672"�� ���ڿ�
    float num1;
    float num2;
    float num3;
    float num4;
    char* end;

    num1 = strtof(s1,&end);         // ���ڿ��� �Ǽ��� ��ȯ�Ͽ� num1�� �Ҵ�
    num2 = strtof(end, &end);
    num3 = strtof(end, &end);
    num4 = strtof(end, NULL);
    
    printf("%f\n",num1);    // 35.283672
    printf("%e\n", num2);    // 35.283672
    printf("%f\n", num3);    // 35.283672
    printf("%e\n", num4);    // 35.283672

    return 0;
}