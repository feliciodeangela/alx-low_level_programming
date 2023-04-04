#include "main.h"
/**
 * rev_string - Entry point
 * Description: reverse a string
 * @s: string to reverse
 */
void rev_string(char *s)
{
	int i = 0, j = sizeof(s) - 1;
	char c[sizeof(s) - 1];
	char *p = s;

	while (i < j)
	{
		c[i] = *p;
		i++;
		p++;
	}
	i--;
	p--;
	while (i < j)
	{
		*s = c[i];
		i--;
		s++;
	}

}
