#include "main.h"
/**
 * ow - Calculates exponentiation.
 * @a: Base.
 * @b: Exponent.
 * Return: Total result of exponentiation.
 */
unsigned int ow(unsigned int a, unsigned int b)
{
        unsigned int r = a;

	if (b == 0)
		return (1);
	if (b == 1)
		return (a);
	while (b > 1)
	{
		r = r * a;
		b--;
	}
	return (r);
}
