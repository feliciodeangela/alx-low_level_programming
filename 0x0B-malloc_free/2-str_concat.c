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
	char *aux, *s = '\0';
	int i = 0, j = 0, cnt = 0;

	if (s1 == NULL && s2 == NULL)
	{
		return (s);
	}
	if (s1 != NULL && s2 == NULL)
	{
		aux = s1;
		while (*aux >= '\0')
		{
			aux++;
			cnt++;
		}
		cnt++;
		s = malloc(sizeof(*s) * cnt);
		if (s == NULL)
		{
			return ('\0');
		}
		for (i = 0; i < cnt; i++)
		{
			s[i] = s1[i];
		}
		s[cnt] = '\0';
		return (s);
	}
	if (s1 == NULL && s2 != NULL)
	{
		aux = s2;
		while (*aux >= '\0')
		{
			aux++;
			cnt++;
		}
		cnt++;
		s = malloc(sizeof(*s) * cnt);
		if (s == NULL)
		{
			return ('\0');
		}
		for (j = 0; j < cnt; j++)
		{
			s[j] = s2[j];
		}
		s[cnt] = '\0';
		return (s);
	}
	return (s);
}
