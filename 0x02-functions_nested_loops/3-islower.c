#include "main.h"

/**
 * _islower - Entry point
 *@c: argument for the function
 *
 * Description: Checks for lowercase
 * Return: Always 0
 */

int _islower(int c)
{
	if ('a' <= c && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
