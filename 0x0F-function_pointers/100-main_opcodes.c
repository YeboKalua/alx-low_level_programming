#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints opcodes
 * @argc: number of arguments
 * @argv: arguments
 * Return: return int
 */
int main(int argc, char **argv)
{
	int size, n;
	char *ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	size = atoi(argv[1]);

	if (size < 0)
	{
		printf("Error\n");
		exit(2);
	}
	ptr = (char *)main;

	for (n = 0; n < size; n++)
	{
		if (n == (size - 1))
		{
			printf("%02hhx\n", ptr[n]);
			break;
		}
		printf("%02hhx", ptr[n]);
	}
	return (0);
}
