#include "main.h"

/**
 * print_rev - Entry point
 * @s: value to print
 *
 * Description: prints value in reverse
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	for (i -= 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
