#include "main.h"
/**
 * append_text_to_file - adds text to file
 * @filename: name of file to append to
 * @text_content: text to add to file
 * Return: 1 on success. -1 otherwise.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd = 0;
	int w = 0;
	int count = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (count = 0; text_content[count];)
			count++;
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	w = write(fd, text_content, count);
	if (fd == -1 || w == -1)
		return (-1);
	close(fd);
	return (1);
}
