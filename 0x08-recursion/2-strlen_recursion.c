#include "main.h"
/**
 * _strlen_recursion - Entry point.
 * Description: Return length of string.
 * @s: string to count.
 * Return: string length.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		size++;
		s++;
		_strlen_recursion(s);
	}
	return (size);
}
