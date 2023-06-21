#include "function_pointers.h"
/**
 * int_index - Entry point.
 * Description: Search for an integer.
 * @array: Array to search in.
 * @size: number of elements.
 * @cmp: function that compares.
 * Return: -1 if not found | index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
