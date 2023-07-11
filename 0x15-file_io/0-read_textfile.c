#include "main.h"
/**
 * read_textfile - reds from file nd writes to STDOUT
 * @filename: the file to be read
 * @letters: number of letters to read
 * Return: number fo characters read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd;
	ssize_t towrite;
	ssize_t toread;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	toread = read(fd, buffer, letters);
	towrite = write(STDOUT_FILENO, buffer, toread);

	free(buffer);
	close(fd);
	return (towrite);

}
