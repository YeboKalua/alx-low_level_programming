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
	char *new_str;

	if (str == NULL)
		return (NULL);

	while (str[n] != '\0')
	{
		n++;
	}

	new_str = malloc(sizeof(char) * n + 1);

	if (new_str == NULL)
		return (NULL);

	for (int i = 0; str[i]; i++)
		str[i] == new_str[i];

	return (new_str);
}
