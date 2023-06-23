#include "variadic_functions.h"
/**
 * sum_them_all - Entry point.
 * Desription: Sum of all parameters.
 * @n: Number of parameters.
 * Return: Sum of all elements.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
