#include "main.h"
/**
 * factorial - Entry level.
 * Description: Returns factorial of @n.
 * @n: number to calculate the factorial.
 * Return: Result of @n!
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n--));
}
