#include <stdio.h>

int main()
{
	int* numPtr1 = NULL;
	int num1 = 20;
	printf("%p\n", numPtr1);

	/*실무에서는 주로 NULL Pointer 인지를 확인하여 메모리를 할당하는 방식을 많이 사용함*/
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