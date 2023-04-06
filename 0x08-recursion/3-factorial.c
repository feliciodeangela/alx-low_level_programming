#include "main.h"
/**
 * factorial - Entry point
 * Description: Return factorial of @n.
 * @n: Factorial to make.
 * Return: 0 | n | x
 */
int factorial(int n)
{
	if (n == 1)
	{
		return (1);
	}
	else
	{
		return (n - 1);
	}
}
