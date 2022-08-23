#include <stdio.h>
#include <stdarg.h>

void printValues(char* type, ...)
{
	va_list ap;
	int i = 0;

	va_start(ap, type);
	while (type[i] != '\0')
	{
		switch (type[i])
		{
		case 'i':
			printf("%d ", va_arg(ap, int));
			break;
		case 'd':
			printf("%f ", va_arg(ap, double));
			break;
		case 'c':
			printf("%c ", va_arg(ap, char));
			break;
		case 's':
			printf("%s ", va_arg(ap, char *));
			break;
		default:
			break;
		}
		i++;
	}
	va_end(ap);

	printf("\n");
}

int main_082()
{
	printValues("i", 10);
	printValues("ci", 'a', 10);
	printValues("dci", 1.234567, 'a', 10);
	printValues("scid", "Hello world",'a',10,3.1592);
	return 0;
}