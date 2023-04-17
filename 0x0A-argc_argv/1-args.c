#include <stdio.h>
/**
 * main - Entry point.
 * Description: Print number of arguments.
 * @argc: number of arguments.
 * @argv: Array of arguments.
 * rETURN: Success 0 | Failure 1.
 */
int main(int argc, char *argv[])
{
	argv++;
	printf("%d\n", argc--);
	return (0);
}
