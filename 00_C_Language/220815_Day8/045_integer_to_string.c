#define _CRT_SECURE_NO_WARNINGS    // sprintf ���� ���� ���� ������ ���� ����
#include <stdio.h>     // sprintf �Լ��� ����� ��� ����

int main_045()
{
    //char s1[10];       // ��ȯ�� ���ڿ��� ������ �迭
    //int num1 = 283;    // 283�� ����

    //sprintf(s1, "0x%X", num1);    // %d�� �����Ͽ� ������ ���ڿ��� ����

    //printf("%s\n", s1);         // 283

    char s1[20];
    float num1 = 38.95230f;

    sprintf(s1, "%e", num1);

    printf("%s\n", s1);

    return 0;
}