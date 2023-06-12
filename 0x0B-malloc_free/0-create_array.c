#include "main.h"
/**
 * create_array - Entry point.
 * Description: Create an array of chars and initialize it with a specific one.
 * @size: Size of the array to create.
 * @c: The character to initialize the array with.
 * Return: * to created array | NULL.
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	int i;

	if (size == 0)
	{
		return (NULL);
	}
	ar = malloc(sizeof(*ar) * size);
	if (ar == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			a[i] = c;
		}
	}
	return (ar);
}
