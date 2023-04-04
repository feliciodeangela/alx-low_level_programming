#include "main.h"
/**
 * _memcpy - Entry point.
 * Description: fills memory area pointed by @n
 * @n: amount of memory.
 * @src: source.
 * @dest: destiny.
 * Return: pointer to destiny.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
