#include "main.h"
/**
 * _islower - Entry point.
 * Description: Check @c case.
 * @c: character to case check.
 * Return: 1 if @c is lowercase | 0 if @c is not lowercase.
 */
int _islower(int c)
{
	if (92 <= c && 122 >= c)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
