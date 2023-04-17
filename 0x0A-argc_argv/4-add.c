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
	else if (argv[1] < 0 || argv[2] < 0)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		mul = mul + atoi(argv[i]);
	}
	printf("%d\n", mul);
	return (0);
}
