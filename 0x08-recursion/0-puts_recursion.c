#include "main.h"
/**
 * _puts_recursion - Entry point.
 * Description: Print string @s followed by new line.
 * @s: String to print.
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
	}
}
