#include "main.h"

/**
 * puts2 - Entry point
 * Description: prints chars + new line between them
 * @str: string to print
 *
 * Return: void
 */

void puts2(char *str)
{
	int i, j;

	for (j = 0; str[j] != '\0';)
	{
		j++;
	}
	for (i = 0; i < j; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
