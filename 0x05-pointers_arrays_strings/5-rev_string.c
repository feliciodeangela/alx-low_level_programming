#include "main.h"
/**
 * rev_string - Entry point
 * Description: reverse a string
 * @s: string to reverse
 */
void rev_string(char *s)
{
	int i = 0, j = sizeof(s) - 1;
	char c[j];

	while (i < j)
	{
		c[i] = *s;
		i++;
		s++;
	}
	i--;
	s--;
	while (i < j)
	{
		*s = c[i];
		i++;
		s--;
	}

}
