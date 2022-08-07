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

		printf("MasterKey의 자격을 얻기 위해서는 다음 문제를 통과해야 합니다.\n");
		printf("%d X %d = ? ", num1, num2);
		scanf_s("%d", &answer);
		


		if (answer == answerO)
		{
			printf("정답입니다!\n");
			printf("맟춘횟수: %d\n", ++count);
		}
		else 
		{
			printf("GameOver\n");
			break;
		}
		if (count == 5)
		{
			printf("당신은 마스터의 자격을 획득했습니다. 축하합니다.");
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