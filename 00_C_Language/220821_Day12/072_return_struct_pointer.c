#define _CRT_SECURE_NO_WARNINGS    // strcpy ���� ����� ���� ������ ���� ����
#include <stdio.h>
#include <string.h>    // strcpy �Լ��� ����� ��� ����
#include <stdlib.h>    // malloc, free �Լ��� ����� ��� ����

struct Person {
    char name[20];
    int age;
    char address[100];
};

struct Person* allocPerson()    // Person ����ü �����͸� ��ȯ�ϴ� allocPerson �Լ� ����
{
    struct Person* p = malloc(sizeof(struct Person));    // ����ü �����Ϳ� ���� �޸� �Ҵ�;

    strcpy(p->name, "ȫ�浿");
    p->age = 30;
    strcpy(p->address, "����� ��걸 �ѳ���");

    return p;    // ����ü �����͸� ��ȯ�ϹǷ� ����ü ������ ������ �� ��ȯ�ϴ� �ͺ��� ȿ�� ���̴�.
}

int main_072()
{
    struct Person* p1;

    p1 = allocPerson();    // �����͸� ��ȯ�Ͽ� p1�� �޸� �ּ� ����

    // allocPerson���� ������ ������ ��µ�
    printf("�̸�: %s\n", p1->name);       // ȫ�浿
    printf("����: %d\n", p1->age);        // 30
    printf("�ּ�: %s\n", p1->address);    // ����� ��걸 �ѳ���

    free(p1);    // ���� �޸� ����

    return 0;
}