#include <stdio.h>

int main_print(void)
{
	/*	
	Desciption : printf example 
	int age;
	printf("%d + %d = %d", 3, 7, 3 + 7);*/

	//scanf
	//Ű���� �Է��� �޾Ƽ� ����
	
	/*int input;
	scanf_s("%d", &input);
	printf("�Է°� : %d\n", input);
	*/

	//one character . string(multi charactor)
	//char c = 'H';
	//char str[256];
	//printf("%c\n", c);
	//scanf_s("%s", str, sizeof(str)); //ũ�⸦ ����� ����Ѵ�.
	//printf("%s\n", str);

	//������Ʈ
	//�������� �������� ������ �Լ� (���� �ۼ�)
	//�̸�?����?������?Ű?���˸�?
	char name[256];
	printf("�̸��� ������? ");
	scanf_s("%s", name, sizeof(name));

	int age;
	printf("����̿���?");
	scanf_s("%d", &age);

	float weight;
	printf("�����԰� ���̿���?");
	scanf_s("%f", &weight);

	double tall;
	printf("Ű�� ���̿���?");
	scanf_s("%lf", &tall);

	char crime[256];
	printf("���˸��� ������?");
	scanf_s("%s", crime, sizeof(crime));

	//���� ���� ���
	printf("\n\n---- ���� ���� ���� ----\n");
	printf("�̸�:	 %d\n",name);
	printf("����:	 %d\n",age);
	printf("������:	 %.2f kg\n",weight);
	printf("Ű :	 %.2lf cm\n",tall);
	printf("���˸�:	 %s\n",crime);
	


	return 0;
}