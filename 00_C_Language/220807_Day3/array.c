#include <stdio.h>

int main_array(void)
{
	//�迭
	/*int subway[3] = { 30,40,50 };
	
	for (int i = 0; i < sizeof(subway)/sizeof(int); i++)
	{
		printf("����ö %dȣ���� %d ���� Ÿ�� �ֽ��ϴ�.\n",i, subway[i]);
	}
	return 0;*/

	char str[] = "�����ڵ�";
	/*printf("%s\n", str);*/
	printf("%d\n", sizeof(str));
	/*for (int i = 0; i < sizeof(str); i++)
	{
		printf("%c\n", str[i]);
	}*/


	return 0;

}