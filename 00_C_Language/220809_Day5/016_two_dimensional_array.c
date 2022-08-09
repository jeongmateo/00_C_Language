#include <stdio.h>

int main_2D_array()
{
	int numArr[3][4] = {
		{11,12,13,14},
		{21,22,23,24},
		{31,32,33,34}
	};
	int col = sizeof(numArr[0]) / sizeof(int);
	int row = sizeof(numArr) / sizeof(numArr[0]);
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf("%d ", numArr[i][j]);
		}
		printf("\n");
	}
}