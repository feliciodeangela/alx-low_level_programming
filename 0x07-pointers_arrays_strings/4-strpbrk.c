#include "main.h"
/**
 * *_strpbrk - search string for any set of bytes in @accept.
 * @accept: set of bytes to search.
 * @s: string to search in.
 * Return: pointer to first occurence | NULL.
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0;

	while (accept[i] >= '\0')
	{
		while (s[j] >= '\0')
		{
			if (accept[j] == s[j])
			{
				return (&s[j]);
			}
			j++;
		}
		i++;
	}
	return ('\0');
}
