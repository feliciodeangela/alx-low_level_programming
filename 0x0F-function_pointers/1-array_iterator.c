#include "function_pointers.h"
/**
 * array_iterator - Entry point.
 * Description: Execute the function taken as parameter on every element of the array.
 * @array: Array to iterate.
 * @size: Size(memory) of the array.
 * @action: function to execute.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
