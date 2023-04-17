#include <stdio.h>
/**
 * main - Entry point.
 * Description: Print the result of the multiplication of two numbers.
 * @argc: number of arguments.
 * @argv: Array of arguments.
 * Return: Success 0 | Failure 1.
 */
int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc > 2)
	{
		printf("Error\n");
		return (mul);
	}
	for (i = 0; i < argc; i++)
	{
		mul = mul * argv[i];
	}
	printf("%d\n", mul);
	return (0);
}
