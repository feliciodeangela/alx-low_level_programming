#include "main.h"
/**
 * more_numbers - Entry point.
 * Description: Print numbers from 0 to 14.
 */
void more_numbers(void)
{
	int i, j, k, l;

	for (i = 0; i < 10; i++)
	{
		j = 48;
		k = 48;
		for (l = 1; l <= 15; l++)
		{
			_putchar(j);
			if (l < 10)
			{
				j++;
			}
			else
			{
				j = 49;
				if (l > 10)
				{
					_putchar(k++);
				}
			}
		}
		_putchar('\n');
	}
}
