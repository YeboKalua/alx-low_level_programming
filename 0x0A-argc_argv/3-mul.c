#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @argc: count of arguments
 * @argv: arguments
 * description: prints input
 * Return: 0 if successful
 */
int main(int argc, char **argv)
{
	if (argc == 3)
	{
		int i = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", i);

		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
