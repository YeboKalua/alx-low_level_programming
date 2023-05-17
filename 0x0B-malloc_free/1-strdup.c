#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * _strdup - copies string
 * @str: string
 * Return: pointer if success
 * otherwise, return null
 */
char *_strdup(char *str)
{
	int n = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[n] != '\0')
		n++;

	char *new_str = malloc(sizeof(char) * n + 1);

	if (new_str != NULL)
	{
		int i;

		i = 0;

		while (str[i] != '\0')
		{
			new_str[i] = str[i];
			i++;
		}
		new_str[i] = '\0';
	}
	else
	{
		return (NULL);
	}
	free(new_str);
	return (new_str);
}
