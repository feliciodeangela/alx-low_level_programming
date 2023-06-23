#include "variadic_functions.h"
/**
 * print_numbers - Entry point.
 * Description: Prints numbers then a new line.
 * @separator: Stands between numbers.
 * @n: amount of numbers passed to print.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	char *s;
	va_list args;

	s = malloc(strlen(separator) + 1);
	if (s == NULL)
	{
		free(s);
	}
	else
	{
		strcpy(s, separator);
	}
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (*s != '\0')
		{
			num = va_arg(args, int);
			printf("%d", num);
			if(i < (n - 1))
			{
				printf("%s", s);
			}
		}
		else
		{
			num = va_arg(args, int);
			printf("%d", num);
		}
	}
	printf("\n");
	free(s);
	va_end(args);

}
