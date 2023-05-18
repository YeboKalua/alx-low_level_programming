#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer of new string
 */
char *str_concat(char *s1, char *s2)
{
	char *new_str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 == "";
	}
	int i = 0;
	int n = 0;

	while (s1[i] != '\0')
		i++;

	while (s2[n] != '\0')
		n++;
	new_str = malloc(sizeof(char) * (i + n + 1));

	if (new_str == NULL)
		return (NULL);

	i = n = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[n] != '\0')
		i++, n++;
	new_str[i] = '\0';
	return (new_str);
}
