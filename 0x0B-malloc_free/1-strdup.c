#include "main.h"
/**
 * _strdup - Entry point.
 * Description: Creates a duplicate of a given string.
 * @str: String to duplicate.
 * Return: Pointer to new string.
 */
char *_strdup(char *str)
{
	int i, j = 0;
	char *newstr;

	if (str == NULL)
	{
		return (NULL);
	}
	while (*(str + j) != '\0')
	{
		j++;
	}
	newstr = malloc(sizeof(*newstr) * j);
	for (i = 0; i <= j; i++)
	{
		newstr[i] = str[i];
	}
	return (newstr);
}
