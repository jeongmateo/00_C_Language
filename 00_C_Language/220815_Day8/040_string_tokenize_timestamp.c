#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main_string22()
{
	char s1[30] = "2022-08-10T15:32:18";

	char* ptr = strtok(s1, "-T:");

	while (ptr != NULL)
	{
		printf("%s\n", ptr);
		ptr = strtok(NULL, "-T:");
	}

	return 0;
}