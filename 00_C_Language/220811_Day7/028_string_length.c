#include <stdio.h>
#include <string.h>

int main_string10()
{
	char* s1 = "Hello Wow";
	char s2[10] = "Hello Wow";

	printf("%d\n", strlen(s1));
	printf("%d\n", strlen(s2));
}