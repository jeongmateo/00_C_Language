#include <stdio.h>
#include <string.h>

int main_string11()
{
	char* s1 = "Hello";
	char s2[10] = "Hello";

	printf("%d\n",strcmp(s1, s2));

	s2[0] = 'G';
	printf("%d\n", strcmp(s1, s2));

	s2[0] = 'I';
	printf("%d\n", strcmp(s1, s2));

	
}
