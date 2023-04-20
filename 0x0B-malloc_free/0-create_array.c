#include "main.h"
/**
 * create_array - Entry point.
 * Description: Create an array of chars and initialize with a char.
 * @size: Size of the array.
 * @c: CHaracter to initialize array with.
 * Return: NULL if size=0 or if allocation fails | pointer to array.
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i, s;

	p = malloc(sizeof(*p) * size);
	if (size == 0 || p == NULL)
	{
		return ('\0');
	}
	s = size - 1;
	for (i = 0; i < s; i++)
	{
		p[i] = c;
	}
	p[i] = '\0';
	return (p);
}
