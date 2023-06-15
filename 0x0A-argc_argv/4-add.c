#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Entry point.
 * Description: Adds numbers.
 * @argc: Number of arguments.
 * @argv: Array containning all arguments.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int i, j, n = 0, result = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			n = atoi(argv[i]);
			result = result + n;
		}
		printf("%d\n", result);
	}
	else if (argc == 1)
	{
		printf("%d\n", result);
	}
	return (0);
}
