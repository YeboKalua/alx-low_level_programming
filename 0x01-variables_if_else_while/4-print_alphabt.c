#include <stdio.h>
/**
 * main - main function
 * description: this prints the alphabet but misses some
 * Return: 0 if successful
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		if (n == 101 || n == 113)
		{
			n++;
			continue;
		}
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
