#include "main.h"
/**
 * print_line - Entry point.
 * Description: Print line (_) @n times.
 * @n: Times to repeat line.
 */
void print_line(int n)
{
	int  i, times;

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
		_putchar('_');
	}
	_putchar('\n');

}
