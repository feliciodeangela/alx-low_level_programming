#include "main.h"
/**
 * array_range - Entry point.
 * Description: Create an array of integers.
 * @min: First and smallest element of the array.
 * @max: Last and biggest element of the array.
 * Return: The array | NULL.
 */
int *array_range(int min, int max)
{
	int *res;
	int i, in = 0, ax = 0;

	in = min;
	ax = max;
	if (in > ax)
	{
		return (NULL);
	}
	res = malloc(sizeof(*res) * (ax - in) + 1);
	if (res == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ((ax - in) + 1); i++)
	{
		res[i] = in + i;
	}
	return (res);
}
