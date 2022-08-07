#include <stdio.h>

int main_array(void)
{
	//배열
	/*int subway[3] = { 30,40,50 };
	
	for (int i = 0; i < sizeof(subway)/sizeof(int); i++)
	{
		printf("지하철 %d호차에 %d 명이 타고 있습니다.\n",i, subway[i]);
	}
	return 0;*/

	char str[] = "나도코딩";
	/*printf("%s\n", str);*/
	printf("%d\n", sizeof(str));
	/*for (int i = 0; i < sizeof(str); i++)
	{
		printf("%c\n", str[i]);
	}*/


	return 0;

}