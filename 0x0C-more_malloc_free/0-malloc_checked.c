#include "main.h"
/**
 * malloc_checked - Entry point.
 * Description: Checks and allocates memory.
 * @b: Amount of memory to allocate.
 * Return: Pointer to allocated memory | 98
 */
void *malloc_checked(unsigned int b)
{
	void *checked;

	checked = malloc(b);
	if (checked == NULL)
	{
		exit(98);
	}
	return (checked);
}
