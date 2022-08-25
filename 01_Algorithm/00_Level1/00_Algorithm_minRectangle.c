#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// sizes_rows는 2차원 배열 sizes의 행 길이, sizes_cols는 2차원 배열 sizes의 열 길이입니다.
int solution(int** sizes, size_t sizes_rows, size_t sizes_cols) {
    int answer = 0;
    int temp = 0;
    int minSet, maxSet = 0;

    for (int i = 0; i < sizes_rows; i++)
    {
        temp = sizes[i][0];
        if (temp < sizes[i][1])
        {
            sizes[i][0] = sizes[i][1];
            sizes[i][1] = temp;
        }
    }

    minSet = sizes[0][1];
    maxSet = sizes[0][0];
    for (int k = 1; k < sizes_rows; k++)
    {
        if (maxSet < sizes[k][0])
            maxSet = sizes[k][0];
        if (minSet < sizes[k][1])
            minSet = sizes[k][1];
    }
    answer = minSet * maxSet;
    return answer;
}