#include "main.h"
/**
 * main - Entry point.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ptchr[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	int aSize = sizeof(ptchr) / sizeof(ptchr[0]);
	int i = 0;

	while (i < aSize)
	{
		_putchar(ptchr[i]);
		i++;
	}
}
