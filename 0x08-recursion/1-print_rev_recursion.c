#include "main.h"
/* _print_rev_recursion - entry point.
 * Description: Prints @s in reverse.
 * @s: String to print in reverse.
 */
void _print _rev_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		_print_rev_recursion(s);
	}
	s--;
	_putchar(*s);
	if (*s == '\n')
	{
		break;
	}
}