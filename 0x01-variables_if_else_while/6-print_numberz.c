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
		putchar(n + 48);
		n++;
	}
	putchar('\n');
	return (0);
}
