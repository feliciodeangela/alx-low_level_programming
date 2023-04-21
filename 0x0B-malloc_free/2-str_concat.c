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

	if (s1 == NULL || s2 == NULL)
	{
		return ('\0');
	}
	for (i = 0; s1 > '\0'; i++)
	{
		aux1++;
		p1++;
	}
	for (i = 0; s2 > '\0'; i++)
	{
		aux2++;
		p2++;
	}
	sz = p1 + p2;
	s = malloc(sizeof(*s) * sz);
	while (s1 > '\0')
	{
		s[i] = s1;
		i++;
		s1++;
	}
	while (s2 > '\0')
	{
		s[i] = s2;
		i++;
		s2++;
	}
	s[i] = '\0';
	return (s);
}