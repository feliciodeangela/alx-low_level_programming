#include "main.h"
/**
 * transfer - Entry point.
 * Description: Transfers content from one file to the other.
 * @fdf: Source.
 * @fdt: Destination.
 * @fileDescFrom: Src.
 * @fileDescTo: Dest.
 */
void transfer(int fdf, int fdt, char *fileDescFrom, char *fileDescTo)
{
	int writenLen, total, readLen = 1;
	char buffr[1024];

	while (readLen != 0)
	{
		readLen = read(fdf, buffr, sizeof(buffr));
		if (fdf < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s", fileDescFrom);
			exit(98);
		}
		writenLen = 0;
		while (writenLen < readLen)
		{
			total = write(fdt, buffr + writenLen, readLen - writenLen);
			if (fdt < 0)
			{
				dprintf(STDERR_FILENO, "Error: Can't write to %s", fileDescTo);
				exit(99);
			}
			writenLen = writenLen + total;
		}
	}
}
/**
 * main - Copy a file to another.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 * Return: 97 | 98 | 99 | 100 | 0.
 */
int main(int argc, char *argv[])
{
	int fileDescTo, fileDescFrom;

	if (argc != 3)
	{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fileDescFrom = open(argv[1], O_RDONLY);
	if (fileDescFrom < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", argv[1]);
		exit(98);
	}
	fileDescTo = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fileDescTo < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s", argv[2]);
		exit(99);
	}
	transfer(fileDescFrom, fileDescTo, argv[1], argv[2]);
	if ((close(fileDescTo)) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i", fileDescTo);
		exit(100);
	}
	if ((close(fileDescFrom)) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i", fileDescFrom);
		exit(100);
	}
	return (0);
}

