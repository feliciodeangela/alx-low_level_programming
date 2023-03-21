#include "main.h"
/**
 * print_alphabet10x - Entry point.
 * Description: Prints the alphabet ten times.
 */
void print_alphabet10x(void)
{
	char abcd[26];
	char l = 'a';
	int j, i = 0;

	for (j = 0; j < 10; j++)
	{
		while (i <= 26)
		{
			abcd[i] = l;
			_putchar(abcd[i]);
			l++;
			i++;
		}
		_putchar('\n');
	}
}
