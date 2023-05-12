#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * description: prints number
 * @argv : command line input
 * @argc : number of commands
 * Return: 0 if successful
 */
int main(int argc, char **argv)
{
	int i = argc - 1;

	printf("%d\n", i);

	return (0);
}
