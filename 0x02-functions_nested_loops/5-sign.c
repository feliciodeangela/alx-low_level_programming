#include "main.h"

/**
 * print_sign - Entry point
 * @n: function parameter
 *
 * Description: Prints the sign of the number
 * Return: 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}
