#include "function_pointers.h"
/**
 * array_iterator - Entry point.
 * Description: Execute the function on every element of the array.
 * @array: Array to iterate.
 * @size: Size(memory) of the array.
 * @action: function to execute.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
