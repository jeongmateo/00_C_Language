#include <stdio.h>

int main()
{
	int* numPtr1 = NULL;
	int num1 = 20;
	printf("%p\n", numPtr1);

	/*�ǹ������� �ַ� NULL Pointer ������ Ȯ���Ͽ� �޸𸮸� �Ҵ��ϴ� ����� ���� �����*/
	if (numPtr1 == NULL)
	{
		numPtr1 = malloc(sizeof(int));
		numPtr1 = &num1;
		*numPtr1 = 40;
		printf("allocated memoery");
	}
	printf("%d", *numPtr1);
	printf("%d", num1);

	free(numPtr1);

	return 0;
}