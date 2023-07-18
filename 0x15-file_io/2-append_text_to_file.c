#include "main.h"
/**
 * append_text_to_file - Append text to end of a file.
 * @filename: is the name of the file.
 * @text_content: is the NULL terminated string to add at the end of the file
 * Return: 1 | -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fileDesc;

	if (filename == NULL)
		return (-1);
	fileDesc = open(filename, O_WRONLY | O_APPEND);
	if (fileDesc < 0)
		return (-1);
	if (text_content == NULL)
	{
		write(fileDesc, "", 0);
		close(fileDesc);
		return (1);
	}
	dprintf(fileDesc, "%s", text_content);
	close(fileDesc);
	return (1);
}
