#include "main.h"

/**
 * _abs - Entry point
 * @c: function parameter
 *
 * Description: computes absolute value of an integer
 * Return: 0
 */

int _abs(int c)
{
	if (c > 0 || c == 0)
	{
		return (c);
	}
	else
		return (c * -1);
}
