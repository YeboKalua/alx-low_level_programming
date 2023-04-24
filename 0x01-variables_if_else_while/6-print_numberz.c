#include <stdio.h>
/**
 * main - main function
 * description: prints numbers using putchar function
 * Return: 0 if successful
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
