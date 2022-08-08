#include <stdio.h>

int main_pointer()
{
	/*int* numPtr1;
	int num1 = 10;

	numPtr1 = &num1;
	printf("%d\n", *numPtr1);
	*numPtr1 = 30;
	printf("%p\n", &num1);
	printf("%p\n", numPtr1);
	printf("%p\n", &numPtr1);
	printf("%d\n", *numPtr1);*/

	// 자료형에 따른 Pointer
	// 중단점 설정: F9 --> F5로 Debugging , 로컬 TAB 및 apahfl TAB에서 메모리 위치 및 값 확인 가능
	// 조사식을 통해서 원하는 변수 값을 볼 수 있음
	/*long long* numPtr1;
	float* numPtr2;
	char* cPtr1;

	long long num1 = 10;
	float num2 = 3.1592f;
	char c1 = 'a';

	numPtr1 = &num1;
	numPtr2 = &num2;
	cPtr1 = &c1;

	printf("%lld\n", *numPtr1);
	printf("%f\n", *numPtr2);
	printf("%c\n", *cPtr1);*/

	//void pointer : 함수에서 다양한 자료형을 받을 수 있음, 자료형을 숨기고 싶을 때 사용, 간접 참조를 할 수 없음
	int* numPtr;
	char* cPtr;
	int num1 = 10;
	char c = 'a';

	numPtr = &num1;
	cPtr = &c;

	void* ptr;
	ptr = numPtr;
	ptr = cPtr;








	return 0;
}