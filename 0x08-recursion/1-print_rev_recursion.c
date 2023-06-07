#include "main.h"
/* _print_rev_recursion - entry point.
 * Description: Prints @s in reverse.
 * @s: String to print in reverse.
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		_print_rev_recursion(s);
	}
	s--;
	if (*s != '\n')
	{
		_putchar(*s);
	}
	else
	{
		_putchar(*s);
	}
}
