#include "main.h"

/**
 * _isalpha - Entry point
 * @c: function parameter
 *
 * Description: checks for alphabetical carachter
 * Return: Always 0
 */

int _isalpha(int c)
{
	if (('a' >= c && c <= 'z') || ('A' <= c && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
