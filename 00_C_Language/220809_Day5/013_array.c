#include <stdio.h>

int main_array1()
{

	/* �迭�� �ε����� 0���� �����ϴ� ������ �޸� �ּҰ� 0���� �����ϱ� �����Դϴ�.
	�迭�� �������̹Ƿ� �ε����� 0���� �����ϸ� ��� ���ٰ� ���� ������ ��ġ�ϰ� �˴ϴ�*/
	int numArr[10] = { 11,22,33,44,55,66,77,88,99,110};
	int sum = 0;
	/* q�迭�� 0���� ��� �ʱ�ȭ */
	/*int numArr2[10] = { 0,};*/

	/*printf("%d\n", numArr[0]);
	printf("%d\n", numArr[5]);
	printf("%d\n", numArr[9]);*/

	/*for (int i = 0; i < sizeof(numArr)/sizeof(int); i++)
	{
		printf("%d\n", numArr[i]);
	}

	for (int i = sizeof(numArr) / sizeof(int) -1;i>=0; i--)
	{
		printf("%d\n", numArr[i]);
	}*/

	for (int i = 0; i < sizeof(numArr) / sizeof(int); i++)
	{
		sum += numArr[i];
		
	}
	printf("%d\n", sum);

	return 0;
}