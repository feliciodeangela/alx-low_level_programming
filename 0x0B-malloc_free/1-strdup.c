#include "main.h"
/**
 * _strdup - Entry point.
 * Description: Return pointer to a location where a copy of the provided string is stored.
 * @str: String to copy.
 * Return: Pointer to duplicate of @str | NULL
 */
char *_strdup(char *str)
{
	char *s;
	unsigned int i, j sz;

	if (str == NULL)
	{
		return (NULL);
	}
	for (int i = 0; i != '\0'; i++)
	{
		str++;
		sz++;
	}
	s = malloc(sizeof(*s) * sz);
	for (j = 0; j < sz; j++)
	{
		s[j] = str[j];
	}

}
