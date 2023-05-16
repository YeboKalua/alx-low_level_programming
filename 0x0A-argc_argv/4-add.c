#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * check_number - checks if input is positive
 * @strn: string to check number
 * Return: 0 if success
 * otherwise return 1.
 */
int check_number(char *strn)
{
	int n;

	n = 0;

	while (n < strlen(strn))
	{
		if (!isdigit(strn[n]))
		{
			return (0);
		}
		n++;
		return (1);
	}
}
/**
 * main - sums up numbers
 * @argc: counts arguments
 * @argv: arguments
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int x;
	int changed_int;
	int sum = 0;

	x = 1;

	while (x < argc)
	{
		if (check_number(argv[x]))
		{
			changed_int = atoi(argv[x]);
			sum += changed_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		x++;
	}
	printf("%d\n", sum);
	return (0);
}



