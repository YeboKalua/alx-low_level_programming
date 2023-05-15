#include <unistd.h>
/**
 * _putchar - prints character c
 * @c: character to print
 * Return: 1 if successful
 * -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
