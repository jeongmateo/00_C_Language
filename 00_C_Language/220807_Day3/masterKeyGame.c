#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int funcCalculator(int a, int b);
int main_functionGame(void)
{
	int num1;
	int num2;
	int answerO;
	int answer;
	int count=0;

	while (1)
	{
		srand(time(NULL));
		num1 = rand() % 999 + 1;
		num2 = rand() % 99 + 1;
		answerO = funcCalculator(num1, num2);

		printf("MasterKey�� �ڰ��� ��� ���ؼ��� ���� ������ ����ؾ� �մϴ�.\n");
		printf("%d X %d = ? ", num1, num2);
		scanf_s("%d", &answer);
		


		if (answer == answerO)
		{
			printf("�����Դϴ�!\n");
			printf("����Ƚ��: %d\n", ++count);
		}
		else 
		{
			printf("GameOver\n");
			break;
		}
		if (count == 5)
		{
			printf("����� �������� �ڰ��� ȹ���߽��ϴ�. �����մϴ�.");
			break;
		}
		else {}

	
	}

	return 0;

}

int funcCalculator(int a, int b)
{
	return a * b;
}