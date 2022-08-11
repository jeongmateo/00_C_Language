#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main_string14()
{
	char* s1 = malloc(sizeof(char) * 20);
	char* s2 = "Hello";
	char* s3 = "World";

	strcpy(s1, s2);
	strcat(s1, s3);

	printf("%s\n", s1);

	free(s1);

	return 0;
}