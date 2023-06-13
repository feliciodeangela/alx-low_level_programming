#include "main.h"
/**
 * str_concat - Entry point.
 * Description: Concatenate two strings.
 * @s1: String to concatenate.
 * @s2: String to concatenate.
 * Return: Pointer to concatenated string | NULL if not possible to allocate.
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k, n;
	char *restr;

	while (*(s1 + i) != '\0')
	{
		i++;
	}
	while (*(s2 + j) != '\0')
	{
		j++;
	}
	if (i == 0 && j > 0)
	{
		j++;
	}
	else if (i > 0 && j == 0)
	{
		i++;
	}
	restr = malloc(sizeof(*restr) * (i + j));
	if (restr == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < i; k++)
	{
		restr[k] = s1[k];
	}
	for (n = 0; n < j; n++)
	{
		restr[k] = s2[n];
		k++;
	}
	return (restr);
}
