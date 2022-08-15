#include <stdio.h>
#include <string.h>

int main_string19()
{
	char s1[100] = "A Garden diary A Garden diary A Garden diary";

	char* ptr = strstr(s1, "den");


	while (ptr != NULL)
	{
		printf("%s\n", ptr);

		ptr = strstr(ptr+1, "den");
	}
	

	return 0;
}