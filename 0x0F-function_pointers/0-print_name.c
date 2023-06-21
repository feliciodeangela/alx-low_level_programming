#include "function_pointers.h"
/**
 * print_name - Entry point.
 * Description: Print a name.
 * @name: Name to print.
 * @f: Printer.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
