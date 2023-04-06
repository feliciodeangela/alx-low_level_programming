#include "main.h"
/**
 * _strlen_recursion - Entry point.
 * Description: Return length of string.
 * @s: string to count;
 * Return length;
 */
int _strlen_recursion(char *s)
{
	int size = 0;

	if (*(s + 1))
	{
		s++;
		size;
		_strlen_recursion(s);
	}
	else
	{
		return (size);
	}
}
