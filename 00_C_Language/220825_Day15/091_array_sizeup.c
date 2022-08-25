#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *array = (int*)malloc(4 * sizeof(int));

	array[0] = 10;
	array[1] = 20;
	array[2] = 30;
	array[3] = 40;

	int *temp = (int*)malloc(8 * sizeof(int));

	for (int i = 0; i < 4; i++)
	{
		temp[i] = array[i];
	}

	array = temp;

	printf("temp array: ");
	for (int j = 0; j<4; j++)
	{
		printf("%d ", temp[j]);
	}
	printf("\ntemp address : %x\n", temp);
	printf("array address : %x\n", array);
	free(temp);
	
	return 0;
}