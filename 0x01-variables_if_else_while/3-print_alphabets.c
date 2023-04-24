#include <stdio.h>
/**
 * main - main function
 * description: prints the alphabet both lower case and upper case
 * Return: 0 if successful
 */
int main(void)
{
	int n = 97;
	int c = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (c <= 90)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
