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

	// �ڷ����� ���� Pointer
	// �ߴ��� ����: F9 --> F5�� Debugging , ���� TAB �� apahfl TAB���� �޸� ��ġ �� �� Ȯ�� ����
	// ������� ���ؼ� ���ϴ� ���� ���� �� �� ����
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

	//void pointer : �Լ����� �پ��� �ڷ����� ���� �� ����, �ڷ����� ����� ���� �� ���, ���� ������ �� �� ����
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