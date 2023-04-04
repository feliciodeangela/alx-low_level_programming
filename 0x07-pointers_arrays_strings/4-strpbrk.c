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

	while (*(s + i) >= '\0')
	{
		while (*(accept + j) >= '\0')
		{
			if (*(s + i) == *(accept + j))
			{
				return (&(s + i));
			}
			j++;
		}
		i++;
	}
	return ('\0');
}
