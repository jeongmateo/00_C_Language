#include <stdio.h>

int main_print(void)
{
	/*	
	Desciption : printf example 
	int age;
	printf("%d + %d = %d", 3, 7, 3 + 7);*/

	//scanf
	//키보드 입력을 받아서 저장
	
	/*int input;
	scanf_s("%d", &input);
	printf("입력값 : %d\n", input);
	*/

	//one character . string(multi charactor)
	//char c = 'H';
	//char str[256];
	//printf("%c\n", c);
	//scanf_s("%s", str, sizeof(str)); //크기를 명시해 줘야한다.
	//printf("%s\n", str);

	//프로젝트
	//경찰관이 범죄자의 정보를 입수 (조서 작성)
	//이름?나이?몸무게?키?범죄명?
	char name[256];
	printf("이름이 뭐에요? ");
	scanf_s("%s", name, sizeof(name));

	int age;
	printf("몇살이에요?");
	scanf_s("%d", &age);

	float weight;
	printf("몸무게가 몇이에요?");
	scanf_s("%f", &weight);

	double tall;
	printf("키가 몇이에요?");
	scanf_s("%lf", &tall);

	char crime[256];
	printf("범죄명이 뭐에요?");
	scanf_s("%s", crime, sizeof(crime));

	//조서 내용 출력
	printf("\n\n---- 범죄 조서 내용 ----\n");
	printf("이름:	 %d\n",name);
	printf("나이:	 %d\n",age);
	printf("몸무게:	 %.2f kg\n",weight);
	printf("키 :	 %.2lf cm\n",tall);
	printf("범죄명:	 %s\n",crime);
	


	return 0;
}