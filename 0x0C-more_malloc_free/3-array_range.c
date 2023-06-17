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
	int i, t = min;

	if (min > max)
	{
		return (NULL);
	}
	res = malloc(sizeof(*res) * (max - min) + 1);
	if (res == NULL)
	{
		return (NULL);
	}
	for (i = 0; t <= max; i++)
	{
		res[i] = t;
		t++;
	}
	return (res);
}
