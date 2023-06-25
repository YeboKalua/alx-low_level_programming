#include "main.h"
/**
 * create_file - creates a file and writes content to it
 * @filename: name of file
 * @text_content: content to write to file
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int count = 0;
	int fd = 0;
	int w = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (count = 0; text_content[count];)
			count++;
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, count);

	if (fd == -1 || w == -1)
		return (-1);
	close(fd);
	return (1);
}
