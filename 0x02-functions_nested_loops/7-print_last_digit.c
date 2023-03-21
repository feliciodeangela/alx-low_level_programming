#include "main.h"
/**
 * print_last_digit - Entry point.
 * Description: Prints last digit of a number.
 * @a: number to evaluate.
 * Return: Last digit.
 */
int print_last_digit(int a)
{
	if (a == 0)
	{
		return (0);
	}
	a = a % 10;
	return (a);
}
