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
	char *new_str;

	int i, r = 0;

	if (str == NULL)
		return (NULL);

	i = 0;

	while (str[i] != '\0')

		i++;

	new_str = malloc(sizeof(char) * (i + 1));

	if (new_str == NULL)

		return (NULL);

	for (r = 0; str[r]; r++)

		new_str[r] = str[r];
	return (new_str);
}
