#include "main.h"
/**
 * buffer_function - creates a buffer
 * @filename: name of file
 * Return: pointer to buffer
 */
char *buffer_function(char *filename)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (buffer);
}
/**
 * close_file - closes file descriptor
 * @fd: file desciptor
 */
void close_file(int fd)
{
	int n;

	n = close(fd);
	if (n == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - copies files
 * @argc: number of arguments
 * @argv: array of pointers to arguments
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int source, dest, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = buffer_function(argv[2]);
	source = open(argv[1], O_RDONLY);
	r = read(source, buffer, 1024);
	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	while (r > 0)
	{
		if (source == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		w = write(dest, buffer, r);
		if (dest == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		r = read(source, buffer, 1024);
		dest = open(argv[2], O_WRONLY | O_APPEND);
	}
	free(buffer);
	close_file(source);
	close_file(dest);
	return (0);
}
