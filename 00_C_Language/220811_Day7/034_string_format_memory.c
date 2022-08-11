#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main()
{
	char* s1 = malloc(sizeof(char) * 20);

	sprintf(s1, "%c %d %f %e", 'a', 12, 13.22f, 1.1231e-21f);

	printf("%s\n", s1);

	free(s1);

	return 0;
}