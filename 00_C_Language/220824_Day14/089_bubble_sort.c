#include <stdio.h>

void bubble_sort(int arr[], int count)
{
	int temp;

	for (int i = 0; i < count; i++)
	{
		for (int j = 0; j < count-1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;		//다음 요소로 보냄
			}
		}
	}
}

int main_089()
{
	int numArr[10] = { 8, 4, 2, 5, 3, 7, 10, 1, 6, 9 };   // 정렬되지 않은 배열

	bubble_sort(numArr, sizeof(numArr) / sizeof(int));	//거품 정렬 함수 호출

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", numArr[i]);
	}

	printf("\n");

	return 0;
}