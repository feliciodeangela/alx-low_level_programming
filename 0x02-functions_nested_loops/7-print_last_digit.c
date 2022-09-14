#include "main.h"

/**
 * print_last_digit - Entry point
 * @n: function parameter
 *
 * Description: Prints last digit of n
 * Return: 0
 */

int print_last_digit(int n)
{
	int c = n % 10;

	if (c < 0)
		c *= -1;
	_putchar(c + '0');
	return (c);
}
