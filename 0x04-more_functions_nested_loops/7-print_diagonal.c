#include "main.h"
/**
 * print_diagonal - Entry point.
 * Description: print (\) @n times.
 * @n: Times to print.
 */
void print_diagonal(int n)
{
	int i, times;

	if (n > 0)
	{
		times = n;
	}
	else
	{
		times = 0;
	}
	for (i = 0; i < times; i++)
	{
		_putchar('\\');
	}
	_putchar('\n');
}
