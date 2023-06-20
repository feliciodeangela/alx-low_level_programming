#include <stdio.h>
/**
 * main - Entry point.
 * Description: Print the name of the file (__FILE__) + newLine.
 * Return: 0;
 */
int main(void)
{
	char *c;

	c = __FILE__;
	printf("%s\n", c);
	return (0);
}
