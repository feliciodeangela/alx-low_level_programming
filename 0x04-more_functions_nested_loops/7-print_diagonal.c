#include "main.h"
/**
 * print_diagonal - Entry point.
 * Description: print (\) @n times.
 * @n: Times to print.
 */
void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar(92);
		}
	}
	_putchar('\n');
}
