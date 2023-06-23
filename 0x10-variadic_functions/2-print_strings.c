#include "variadic_functions.h"
/**
 * print_strings - Entry point.
 * Description: Prints Strings then a new line.
 * @separator: Stands between numbers.
 * @n: amount of strings/arguments passed to print.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (separator != NULL)
		{
			s = va_arg(args, char *);
			if (s)
			{
				printf("%s", s);
				if (i < (n - 1))
				{
					printf("%s", separator);
				}
			}
			else
			{
				printf("(nil)");
				if (i < (n - 1))
				{
					printf("%s", separator);
				}
			}
		}
		else
		{
			s = va_arg(args, char *);
			printf("%s", s);
		}
	}
	printf("\n");
	va_end(args);
}
