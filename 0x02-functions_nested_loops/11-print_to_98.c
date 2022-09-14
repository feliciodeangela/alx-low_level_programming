#include <stdio.h>

/**
* print_to_98 - Entry point
* @n: function parameter
* 
* Description: print numbers until 98
* Return:0
*/

void print_to_98(int n)
{
	if (n >= 98)
	{
		for (n; n > 98; n--)
			printf("%d, ", n);
	}
	else
	{
		for (n < 98; n< 98; n--)
			printf("%d, ",n);
	}
}
