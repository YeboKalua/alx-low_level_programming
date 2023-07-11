#include "main.h"
/**
 * append_text_to_file - adds text to a file
 * @filename: file to append to
 * @text_content: the text to append
 * Return: 1 on success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, towrite, length = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	towrite = write(fd, text_content, length);
	if (fd == -1 || towrite == -1)
		return (-1);
	close(fd);
	return (1);
}
