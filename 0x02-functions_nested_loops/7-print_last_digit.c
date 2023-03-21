#include "main.h"
/**
 * print_last_digit - Entry point.
 * Description: Prints last digit of a number.
 * @a: number to evaluate.
 * Return: Last digit.
 */
int print_last_digit(int a)
{
	int b = a % 10;

	if (b < 0)
	{
		b = b * -1;
	}
	_putchar(b + '0');
	return (b);
}
