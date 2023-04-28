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
			printf("FizzBuzz%s", " ");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz%s", " ");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz%s", " ");
		}
		else
		{
			if (n == 100)
			{
				printf("%d", n);
			}
			else
			{
			printf("%d%s", n, " ");
			}
		}
	}
	printf("\n");
	return (0);
}
