#include <stdio.h>

int main_string2()
{
	char* s1 = "Hello";

	//s1[0] = 'A';  Error   Can't write character

	printf("%c\n", s1[1]);
	printf("%c\n", s1[4]);
	printf("%c\n", s1[5]);



	return 0;
}