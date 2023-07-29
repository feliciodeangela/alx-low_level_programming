#include "main.h"
/**
 * binary_to_uint - Convert a binary to decimal.
 * @b: String that represents a binary number.
 * Return: Converted number | 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, j = 0, r = 0, len;

	if (*b == '\0')
		return (0);
	while (*b != '\0')
	{
		i++;
		b++;
	}
	len = i - 1;
	while (j <= len)
	{
		r = r + ow(2, i);
		j++;
		i = i - 1;
	}
	return (i);
}
