#include <stdio.h>
#include "main.h"

/**
 * main - Print program name
 * @argc: # of arguments
 * @argv: Arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i = 0;

	if (argc > 0)
	{
		while (i < argc)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
