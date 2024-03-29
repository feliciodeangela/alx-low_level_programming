#include "main.h"
/**
 * _memset - Entry point.
 * Description:  fills the first @n bytes of the memory area pointed to by @s
 * with the constant byte @b.
 * @n: bytes to fill.
 * @s: area of memory to fill.
 * @b: character to fill.
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
