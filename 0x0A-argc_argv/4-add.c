#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point.
 * Description: Print the result of the addition of two numbers.
 * @argc: number of arguments.
 * @argv: Array of arguments.
 * Return: Success 0 | Failure 1.
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) < 0)
		{
			printf("Error\n");
			return (1);
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
