#include <stdio.h>

/**
* print_to_98 - Entry point
* @n: function parameter
* Description: print numbers until 98
* Return: 0
*/

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
