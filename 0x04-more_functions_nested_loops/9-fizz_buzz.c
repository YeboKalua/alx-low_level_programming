#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * description: fizz buzz test
 * Return: 0 if successful
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 15 == 0)
		{
			printf("%sFizzBuzz", " ");
		}
		else if (n % 3 == 0)
		{
			printf("%sFizz", " ");
		}
		else if (n % 5 == 0)
		{
			printf("%sBuzz", " ");
		}
		else if (n == 1)
		{
			printf("%d", n);
		}
		else
		{
			printf("%s%d", " ", n);
		}
	}

	printf("\n");
	return (0);
}
