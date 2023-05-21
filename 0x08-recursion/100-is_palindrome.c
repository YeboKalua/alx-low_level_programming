#include "main.h"
#include <stdio.h>
int stringlen(char *s);
int str_check(char *s, int i, int length);
/**
 * is_palindrome - checks for palindrome
 * @s: string
 * Return: 0 if success
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (str_check(s, 0, stringlen(s)));
}
/**
 * stringlen - string length
 * @s: checks length of string
 * Return: string length
 */
int stringlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + stringlen(s + 1));
}
/**
 * str_check - checks for palindrome
 * @s: input string
 * @i: iterator
 * @length: length of string
 * Return: 0 on success
 */
int str_check(char *s, int i, int length)
{
	if (*(s + i) != *(s + length - 1))
		return (0);
	if (i >= length)
		return (1);
	return (str_check(s, i + 1, length - 1));
}
