#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: integer n
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int s1_s;
	int s2_s;
	int total_s;
	char *cat_str;
	int i, x;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	s1_s = 0;

	while (s1[s1_s] != '\0')
		s1_s++;

	s2_s = 0;

	while (s2[s2_s] != '\0')
		s2_s++;

	if ((int) n >= s2_s)
		n = s2_s;
	total_s = s1_s + n;
	cat_str = malloc(sizeof(char) * (total_s + 1));

	if (cat_str == NULL)
		return (NULL);
	for (i = 0; i < s1_s; i++)
		cat_str[i] = s1[i];
	for (x = 0; x < (int) n; x++)
		cat_str[s1_s + x] = s2[x];
	cat_str[total_s] = '\0';
	return (cat_str);
}
