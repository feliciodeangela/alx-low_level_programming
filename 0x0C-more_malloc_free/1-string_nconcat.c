#include "main.h"
/**
 * string_nconcat - Entry point.
 * Description: Concatenates two strings.
 * @s1: String to concatenate.
 * @s2: String to concatenate.
 * @n: First bytes of s2.
 * Return: pointer to concatenated string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int length1 = 0, length2 = 0, i, j;
	char *restr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	length1 = strlen(s1);
	length2 = strlen(s2);
	if (n >= length2)
	{
		restr = malloc(sizeof(*restr) * (length1 + length2) + 1);
		if (restr == NULL)
			return (NULL);
		for (i = 0; i < length1; i++)
			restr[i] = s1[i];
		for (j = 0; j < length2; j++)
		{
			restr[i] = s2[j];
			i++;
		}
		restr[i] = '\0';
		return (restr);
	}
	else
	{
		restr = malloc(sizeof(*restr) * (length1 + n) + 1);
		if (restr == NULL)
			return (NULL);
		for (i = 0; i < length1; i++)
			restr[i] = s1[i];
		for (j = 0; j < n; j++)
		{
			restr[i] = s2[j];
			i++;
		}
		restr[i] = '\0';
		return (restr);
	}
}
