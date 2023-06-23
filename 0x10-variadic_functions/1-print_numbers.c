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
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (separator != NULL)
		{
			num = va_arg(args, int);
			printf("%d", num);
			if (i < (n - 1))
			{
				printf("%s", separator);
			}
		}
		else
		{
			num = va_arg(args, int);
			printf("%d", num);
		}
	}
	printf("\n");
	va_end(args);
}
