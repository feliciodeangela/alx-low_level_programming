#include "main.h"

/**
 * _islower - Entry point
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
	else return(0);
}
