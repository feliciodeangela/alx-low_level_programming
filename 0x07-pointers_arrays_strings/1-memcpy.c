#include "main.h"
/**
 * *_memcpy - Entry point.
 * Description:  copies memory area from @src to @dest
 * @dest: destinyu
 * @src: source
 * @n: bytes to use
 * Return: destiny
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
