#include <stdio.h>

int main_test2(void)
{
	//for문
	/*for (int i = 0; i < 10; i++ )
	{
		printf("%d\n", i);
	}*/
	
	//while문
	/*int i = 1;
	while (i <= 10)
	{
		printf("Hello world %d\n", i++);
	}*/

	//구구단
	/*for (int i = 1; i < 10; i++)
	{
		printf("%d단 계산\n", i);
		for(int j = 1; j < 10; j++)
		{
			printf("%d x %d = %d\n", i, j, i * j);
		}
		printf("\n");
	}*/

	//별 피라미드
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

	//피라미드 만들기

	int floor;
	printf("몇 층을 만들고 싶습니까 ?");
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