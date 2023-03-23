#include "main.h"
/**
 * print_most_numbers - Entry point.
 * Description: Print numbers from 0 to 9, except 2 and 4.
 */
void print_most_numbers(void)
{
	int i = 48;

	while (i != 50 || i != 52)
	{
		_putchar(i);
		if (i == 49 || i == 51)
		{
			i = i + 2;
		}
		else
		{
			i++;
		}
		if (i > 57)
		{
			break;
		}
	}
	_putchar('\n');
}
