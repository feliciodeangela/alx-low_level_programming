#include <stdio.h>
/**
 * main - Entry point.
 * Description: print number of arguments.
 * @argc: Number of arguments.
 * @argv: Array containning all arguments.
 * Return: 0.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
