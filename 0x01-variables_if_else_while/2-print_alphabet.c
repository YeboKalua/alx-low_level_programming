#include <stdio.h>
/**
 * main - main variable
 * description: prints alphabet in lower cases
 * Return: 0 if successful
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
