#include "main.h"

/**
 * times_table - Entry point
 *
 * Description: prints the times table starting from 0
 * Return: 0
 */

void times_table(void)
{
	int n, m, res;

	for (n = 0; n <= 9; n++)
	{
		for (m = 1; m <= 9 ; m++)
		{
			res = n * m;
			_putchar(res + '0');
			if ((n != 9) && (m != 9))
			{
				if (res >= 10)
				{
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
