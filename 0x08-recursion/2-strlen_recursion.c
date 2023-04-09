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

	if (*s >= '\0')
	{
		size++;
		_strlen_recursion(*(s + 1));
	}
	return (size);
}
