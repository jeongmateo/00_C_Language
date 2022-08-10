#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main_pointer2()
{
	int row, col;

	scanf("%d %d", &row, &col);

	int** m = malloc(sizeof(int*) * row);

	for (int i = 0; i < row; i++)
	{
		m[i] = malloc(sizeof(int) * col);
	}

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			m[i][j] = i+j;
			printf("%d ", m[i][j]);
		}
		printf("\n");
	}

	for (int k = 0; k < row; k++)
	{
		free(m[k]);
	}
	free(m);

	return 0;
}