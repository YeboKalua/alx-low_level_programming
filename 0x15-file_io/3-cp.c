#include "main.h"
/**
 * make_buffer - create buffer
 * @file: nme of file
 * Return: pointer to buffer
 *
 */
char *make_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}
/**
 * close_file - closes file
 * @fd: descriptor to close
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
 * main - copies from one file to another
 * @argc: argument counter
 * @argv: arg vector
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int source, dest, toread, towrite;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = make_buffer(argv[2]);
	source = open(argv[1], O_RDONLY);
	toread = read(source, buffer, 1024);
	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	while (toread > 0)
	{
		if (source == -1 || toread == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		towrite = write(dest, buffer, toread);
		if (dest == -1 || towrite == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		toread = read(source, buffer, 1024);
		dest = open(argv[2], O_WRONLY | O_APPEND);

	}
	free(buffer);
	close_file(source);
	close_file(dest);
	return (0);
}
