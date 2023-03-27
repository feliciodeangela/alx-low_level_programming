#include "main.h"

/**
 * swap_int - Entry point
 * @a: value to swap
 * @b: value to swap
 *
 * Description: swaps two variables values
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
