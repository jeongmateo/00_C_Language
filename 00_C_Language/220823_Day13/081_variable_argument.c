#include <stdio.h>
#include <stdarg.h>

// args�� ���� �Ű�����
void printNumbers(int args, ...)
{
    va_list ap;             //�������� ���. �������� �޸� �ּҸ� �����ϴ� ������
    printf("%d ", args);
    
    va_start(ap, args);     //���� ���ڸ� ������ �� �ֵ��� �����͸� ����
    for (int i = 0; i < args; i++)
    {
        int num = va_arg(ap, int);  //���� ���� �����Ϳ��� Ư�� �ڷ��� ũ�⸸ŭ ���� ������

        printf("%d ", num);
    }
    va_end(ap);         //���� ���� ó���� ������ �� �����͸� NULL�� �ʱ�ȭ

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