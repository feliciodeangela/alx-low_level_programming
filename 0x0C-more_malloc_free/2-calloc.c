#include "main.h"
/**
 * _calloc - Entry point.
 * Description: Create an array and initialize with 0.
 * @nmemb: Number of units in the array.
 * @size: Size of each unit in the array.
 * Return: Array initialized with 0 | NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *res;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	res = malloc(size * nmemb);
	if (res == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (size * nmemb); i++)
	{
		res[i] = 0;
	}
	return (res);
}
