#include <stdio.h>
#include <string.h>


int main_string18()
{
	char s1[30] = "A Garden Diary";

	char* ptr = strrchr(s1, 'a');

	printf("%s\n", ptr);

	return 0;
}