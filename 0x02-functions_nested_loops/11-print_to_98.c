#include "main.h"
/**
 * print_to_98 - Entry point
 * Description: Print numbers from @n to 98.
 * @n: number to print from.
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		do {
			printf("%d", n);
			n--;
			if (n != 98)
			{
				printf(", ");
			}
		} while (n >= 98);
	}
	else if (n < 98)
	{
		do {
			printf("%d", n);
			n++;
			if (n != 98)
			{
				printf(", ");
			}
		} while (n <= 98);
	}
	else
	{
		printf("%d", n);
	}
}
