#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main_string20()
{
	char s1[30] = "The Little Prince";

	char* ptr = strtok(s1, " ");

	while (ptr != NULL)
	{
		printf("%s\n", ptr);
		ptr = strtok(NULL, " ");
	}

	return 0;
}