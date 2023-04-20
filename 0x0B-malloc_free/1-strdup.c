#include "main.h"
/**
 * _strdup - Entry point.
 * Description: Return pointer to a location where
 * a copy of the provided string is stored.
 * @str: String to copy.
 * Return: Pointer to duplicate of @str | NULL
 */
char *_strdup(char *str)
{
	char *s;
	char *aux = str;
	unsigned int i, j, sz = 0;

	if (str == NULL)
	{
		return ('\0');
	}
	for (i = 0; *aux > '\0'; i++)
	{
		aux++;
		sz++;
	}
	sz++;
	s = malloc(sizeof(*str) * sz);
	if (s == NULL)
	{
		return ('\0');
	}
	i = 1;
	for (j = 0; j < sz; j++)
	{
		s[j] = str[j];
		i++;
	}
	s[i] = '\0';
	return (s);
}
