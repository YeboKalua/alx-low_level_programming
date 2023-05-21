#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - concatenates strings
 * @ac: argument count
 * @av: argument vector
 * Return: pointer to string
 */
char *argstostr(int ac, char **av)
{
	int i, n, length, x;
	char *str;

	x = 0;
	length = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			length++;
		}
	}
	length += ac;

	str = malloc(sizeof(char) * (length + 1));

	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			str[x] = av[i][n];
			x++;
		}
		str[x++] = '\n';
	}
	str[length] = '\0';

	return (str);
}





