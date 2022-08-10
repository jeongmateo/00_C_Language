#include <stdio.h>

int main_string4()
{
	char s1[10] = "hello";

	printf("%c\n", s1[1]);
	printf("%c\n", s1[4]);
	printf("%c\n", s1[5]);

	s1[0] = 'A';

	printf("%s\n", s1);

	return 0;
}