#include "main.h"
/**
 * _print_rev_recursion - Entry point.
 * Description: Print string in reverse.
 * @s: String to print.
 */
void _print_rev_recursion(char *s)
{
	int end = 0;
	int *pEnd = &end;

	if (end == 0)
	{
		if (*s != '\0')
		{
			*pEnd = 1;
		}
		s++;
		_print_rev_recursion(s);
	}
	else
	{
		if (*s != '\n')
		{
			_putchar(*s);
			s--;
			_print_rev_recursion(s);
		}
		_putchar(*s);
	}
}
