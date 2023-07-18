#include "main.h"
/**
 * create_file - Creates a file.
 * @filename: Name of the file to create.
 * @text_content: String to write into the file.
 * Return: 1 | -1.
 */
int create_file(const char *filename, char *text_content)
{
	int fileDesc;

	if (filename == NULL)
		return (-1);
	fileDesc = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);
	if (fileDesc < 0)
		return (-1);
	if (text_content == NULL)
	{
		dprintf(fileDesc, "%c", '\0');
		close(fileDesc);
		return (1);
	}
	dprintf(fileDesc, "%s", text_content);
	close(fileDesc);
	return (1);
}
