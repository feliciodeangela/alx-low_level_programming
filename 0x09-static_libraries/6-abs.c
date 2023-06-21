#include "main.h"
/**
 * _abs - Entry point.
 * Description: computes the absolute value of an integer.
 * @a: parameter data type.
 * Return: the absolute value.
 */
int _abs(int a)
{
	if (a < 0)
	{
		return (a * -1);
	}
	else
	{
		return (a);
	}
}
