#include "main.h"
/**
 * print_numbers - Entry point.
 * Description: Print from 0 to 9 (followed by new line).
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
