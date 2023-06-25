#include "main.h"
/**
 * read_textfile - function that reads and prints out to std output
 * @filename: name of file to read
 * @letters: number of characters printed
 * Return: number of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t file_descriptor;
	ssize_t write_fd;
	ssize_t count;

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	count = read(file_descriptor, buffer, letters);
	write_fd = write(STDOUT_FILENO, buffer, count);
	free(buffer);
	close(file_descriptor);
	return (write_fd);
}
