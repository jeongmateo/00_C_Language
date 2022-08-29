#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define CAPACITY	100
#define BUFFER_SIZE	20

char* name[CAPACITY];
char* numbers[CAPACITY];
int n = 0;
void add()
{
	char buf1[BUFFER_SIZE], buf2[BUFFER_SIZE];
	scanf("%s", buf1);
	scanf("%s", buf2);

	name[n] = _strdup(buf1);
	numbers[n] = _strdup(buf2);
	n++;

	printf("%s was added successfully. \n", buf1);
}
void find()
{
	char buf1[BUFFER_SIZE];
	int find = 0;
	scanf("%s", buf1);

	for (int i = 0; i < n; i++)
	{
		if (strcmp(name[i], buf1)==0) {
			printf("%s phone number is %s\n", name[i], numbers[i]);
			return;
		}
	}
	printf("No person named '%s' exists\n", buf1);
}
void status()
{
	for (int i = 0; i < n; i++)
	{
		printf("%s phone number is %s\n", name[i], numbers[i]);
	}
}
void remove1()
{
	char* buf1[BUFFER_SIZE];
	scanf("%s", buf1);

	if (n == 0)
	{
		printf("Thers is no data to delete\n");
		return;
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			if (strcmp(name[i], buf1) == 0) {
				name[i] = name[n - 1];
				numbers[i] = numbers[n - 1];
				n--;
				printf("%s was deleted successfully\n", buf1);
				return;
			}
		}
	}
	printf("No person named '%s' exist\n", buf1);
}

int main_01()
{
	char command[BUFFER_SIZE];
	while (1) {
		printf("$ ");
		scanf("%s", command);

		if (strcmp(command, "add") == 0)
			add();
		else if (strcmp(command, "find") == 0)
			find();
		else if (strcmp(command, "status") == 0)
			status();
		else if (strcmp(command, "remove") == 0)
			remove1();
		else if (strcmp(command, "exit") == 0)
			break;
	}
	return 0;
}

