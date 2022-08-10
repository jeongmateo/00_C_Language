#include <stdio.h>

int main_string3()
{
	char s1[10] = "Hello";
	//char s2[3] = "Hello"; warning 
	char s3[] = "HellOOO";
	//s1 = "Hello"; Error
	s1[0] = 'H';
	s1[1] = 'A';
	s1[2] = 'L';

	printf("%s\n", s1);
	printf("%s %d\n", s3,sizeof(s3));

	return 0;
}