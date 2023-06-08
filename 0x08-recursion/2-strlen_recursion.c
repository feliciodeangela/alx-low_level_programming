#include "main.h"
/**
 * _strlen_recursion - Entry point.
 * Description: Return length of @s.
 * @s: String to determine length.
 * Return: @s length.
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s != '\0')
	{
		length++;
		s++;
		return (length + _strlen_recursion);
	}
	return (length);
}
