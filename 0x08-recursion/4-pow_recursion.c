#include "main.h"
/**
 * _pow_recursion - Entry point.
 * Description: Returns power of @x.
 * @x: number to power
 * @y: Power
 * Return: -1 | 1 | @x
 */
int _pow_recursion(int x, int y)
{
	if (y < x)
	{
		return (-1);
	}
	if (y > 0)
	{
		y--;
		x = x * _pow_recursion(x, y);
		return (x);
	}
	if (y == 0)
	{
		return (1);
	}
	return (0);
}
