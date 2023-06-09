#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point.
 * Description: Multiplies two numbers.
 * @argc: Number of arguments.
 * @argv: Array containning all arguments.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc == 3)
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
