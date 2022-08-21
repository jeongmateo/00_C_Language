#define _CRT_SECURE_NO_WARNINGS    // strcpy ���� ���� ���� ������ ���� ����
#include <stdio.h>
#include <string.h>    // strcpy �Լ��� ����� ��� ����

struct Person {
    char name[20];
    int age;
    char address[100];
};

struct Person getPerson(int index)    // Person ����ü�� ��ȯ�ϴ� getPerson �Լ� ����
{
    struct Person p;
    if (index == 1)
    {
        strcpy(p.name, "ȫ�浿");
        p.age = 30;
        strcpy(p.address, "����� ��걸 �ѳ���");
    }
    else if (index == 2)
    {
        strcpy(p.name, "LoganJ");
        p.age = 31;
        strcpy(p.address, "��⵵ ������ �д絿");
    }
    else
    {
        strcpy(p.name, "N/A");
        p.age = 0;
        strcpy(p.address, "N/A");
    }
    

    return p;    // ����ü ���� ��ȯ
}

int main_071()
{
    struct Person p1;
    int index = 2;

    p1 = getPerson(index);    // ��ȯ�� ����ü ������ ������ p1�� ��� �����

    // getPerson���� ������ ���� ��µ�
    printf("�̸�: %s\n", p1.name);       // ȫ�浿
    printf("����: %d\n", p1.age);        // 30
    printf("�ּ�: %s\n", p1.address);    // ����� ��걸 �ѳ���

    return 0;
}