#include "main.h"
/**
 * _pow_recursion - Entry point.
 * Description: calculate x to the power of y
 * @x: Number to elevate.
 * @y: Power.
 * Return: -1 | 1 | x^y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	y--;
	x = x * _pow_recursion(x, y);
	return (x);
}
