#include "main.h"
/**
 * _strchr - Locates a character.
 * @c: character to locate.
 * @s: string to search.
 * Return: pointer to located character | Null
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i) >= '\0')
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
		i++;
	}
	return ('\0');
}
