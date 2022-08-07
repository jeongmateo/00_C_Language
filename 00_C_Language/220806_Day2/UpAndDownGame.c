#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main_UpDownGame(void)
{
	// Up and down game
	//Variable: Chance , Answer, randowm number

	srand(time(NULL));
	int num = rand() % 100 + 1;
	int Answer = 0;
	int Chance = 5;

	while (1)
	{
		if (Chance == 0)
		{
			printf("정답을 맞추지 못하셨군요. 벌칙을 준비하시죠^^\n 정답은 %d 였습니다.", num);
			break;
		}
		else 
		{
			printf("1~100 사이의 숫자입니다. 답: ");
			scanf_s("%d", &Answer);

			if (num == Answer)
			{
			printf("축합합니다. 정답입니다.\n");
			break;
			}
			else if (num > Answer)
			{
			printf("Up\n");
			}
			else
			{
			printf("Down\n");
			}
		}

		printf("남은기회: %d\n", --Chance);
	}	
	
	

}