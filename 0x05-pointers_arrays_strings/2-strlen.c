#include "main.h"

/**
 * _strlen - Entry point
 * @s: value to count
 *
 * Description: Length of a string
 * Return: String length
 */

int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}
	return (c);
}
