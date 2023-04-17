#include <stdio.h>
/**
 * main - Entry point.
 * Description: Print one argument per line.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 * Return: Success 0 | Failure 1.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
