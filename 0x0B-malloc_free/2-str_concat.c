#include "main.h"
/**
 * str_concat - Entry point.
 * Description: Return pointer to concatenated string.
 * @s1: String to concatenate.
 * @s2: String to concatenate.
 * Return: NULL | Concatenated String.
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	char *aux1 = s1;
	char *aux2 = s2;
	int i = 0, j = 0, p1 = 0, p2 = 0, sz = 0;

	for (i = 0; *aux1 > '\0'; i++)
	{
		aux1++;
		p1++;
	}
	for (i = 0; *aux2 > '\0'; i++)
	{
		aux2++;
		p2++;
	}
	sz = p1 + p2 + 1;
	s = malloc(sizeof(*s) * sz);
	if (s == NULL)
	{
		return ('\0');
	}
	while (i < p1)
	{
		s[i] = s1[i];
		i++;
	}
	while (i < sz)
	{
		s[i] = s2[j];
		j++;
		i++;
	}
	s[i] = '\0';
	return (s);
}
