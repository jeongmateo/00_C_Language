#include <stdio.h>

int main_test2(void)
{
	//for��
	/*for (int i = 0; i < 10; i++ )
	{
		printf("%d\n", i);
	}*/
	
	//while��
	/*int i = 1;
	while (i <= 10)
	{
		printf("Hello world %d\n", i++);
	}*/

	//������
	/*for (int i = 1; i < 10; i++)
	{
		printf("%d�� ���\n", i);
		for(int j = 1; j < 10; j++)
		{
			printf("%d x %d = %d\n", i, j, i * j);
		}
		printf("\n");
	}*/

	//�� �Ƕ�̵�
	/*for (int i = 1; i < 5; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}*/

	/*for (int i = 1; i < 6; i++)
	{
		for (int j = 1; j < 6 - i; j++)
		{
			printf(" ");
		}
		for (int k = 1; k <= i; k++)
		{
			printf("*");
		}
		printf("\n");

	}*/

	//�Ƕ�̵� �����

	int floor;
	printf("�� ���� ����� �ͽ��ϱ� ?");
	scanf_s("%d", &floor);

	for (int i = floor; i > 0; i--)
	{
		for (int j = 0; j < (i - 1); j++)
		{
			printf(" ");
		}
		for (int k = 0; k < (2 * floor - 2 * i + 1); k++)
		{
			printf("*");
		}
		printf("\n");
	}


}