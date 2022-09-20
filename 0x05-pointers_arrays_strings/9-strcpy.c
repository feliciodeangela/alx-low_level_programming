#include "main.h"

/**
 * _strcpy - Entry point
 * Description: copies a string to buffer
 * @src: value pointed by string to copy
 * @dest: pointed to
 *
 * Return: void
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
