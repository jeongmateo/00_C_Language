#include <stdio.h>

// ���� �Լ�
int add2(int a, int b)    // int�� ��ȯ��, int�� �Ű����� �� ��
{
    return a + b;
}

// ���� �Լ�
int mul2(int a, int b)    // int�� ��ȯ��, int�� �Ű����� �� ��
{
    return a * b;
}

int main_085()
{
    int (*fpointer)(int, int);
    //�� ��ȯ�� �ڷ���
    int (*fp)(int, int);    // int�� ��ȯ��, int�� �Ű����� �� ���� �ִ� �Լ� ������ fp ����
    //    ��      �� int�� �Ű����� �� ��
    // �Լ� ������ �̸�
    fpointer = add2;
    printf("%d\n", fpointer(20,30));
    fpointer = mul2;
    printf("%d\n", fpointer(20,30));

    return 0;
}