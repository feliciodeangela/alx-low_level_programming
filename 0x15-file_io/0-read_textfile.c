#include "main.h"
/**
 * read_textfile - Read a file and print it to stdout.
 * @filename: Path to file.
 * @letters: Number of letters in file.
 * Return: Number of letters printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fileDesc, writenLet, readLet;
	char *c;

	if (filename == NULL)
		return (0);
	c = malloc(letters + 1);
	if (c == NULL)
		return (0);
	fileDesc = open(filename, O_RDONLY);
	if (fileDesc < 0)
		return (0);
	readLet = read(fileDesc, c, letters);
	if (readLet < 0)
	{
		free(c);
		return (0);
	}
	c[readLet] = '\0';
	writenLet = write(STDOUT_FILENO, c, readLet);
	if (writenLet != readLet)
		writenLet = 0;
	free(c);
	close(fileDesc);
	return (writenLet);
}

