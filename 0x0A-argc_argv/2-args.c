#include <stdio.h>
/**
 * main - Entry point.
 * Description: print all arguments.
 * @argc: Number of arguments.
 * @argv: Array containning all arguments.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int i = 0;
	for (i; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
