#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main_string13()
{
	char *s1 = "Hello World";
	char *s2 = malloc(sizeof(char)*15);

	strcpy(s2, s1);
	printf("%s\n", s2);

	free(s2);
	return 0;
}