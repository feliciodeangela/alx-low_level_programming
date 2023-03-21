#include "main.h"
/**
 * print_alphabet - Enty point.
 * Description: Prints the alphabet.
 * Return: Always 0 (Success).
 */
void print_alphabet(void)
{
	char abcd[27];
	int i = 0;

	while (i < 26)
	{
		abcd[i] = 'a' + i;
		_putchar(i);
		i++;
	}
	abcd[i] = '\n';
	_putchar(abcd[i]);
}
