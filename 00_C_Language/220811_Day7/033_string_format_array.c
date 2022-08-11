#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main_string15()
{
	char s1[20];
	char s2[30];

	sprintf(s1, "Hello,%s", "world!");

	sprintf(s2, "%c %d %f %e", 'a',12,13.22f,1.1231e-21f);

	printf("%s\n", s2);
	printf("%s\n", s1);

	return 0;
}