#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
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
			printf("������ ������ ���ϼ̱���. ��Ģ�� �غ��Ͻ���^^\n ������ %d �����ϴ�.", num);
			break;
		}
		else 
		{
			printf("1~100 ������ �����Դϴ�. ��: ");
			scanf_s("%d", &Answer);

			if (num == Answer)
			{
			printf("�����մϴ�. �����Դϴ�.\n");
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

		printf("������ȸ: %d\n", --Chance);
	}	
	
	

}