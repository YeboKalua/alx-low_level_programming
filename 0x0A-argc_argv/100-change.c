#include <stdio.h>
#include <stdlib.h>
/**
 * coin_calculator - calculates minimum coins
 * @cents: input of coins
 * Return: 0 if successful
 */
int coin_calculator(int cents)
{
	if (cents < 0)
		return (0);

	int coins[] = {25, 10, 5, 2, 1};
	int n = sizeof(coins) / sizeof(coins[0]);
	int count = 0;
	int i;

	for (i = 0; i < n; i++)
	{
		count += cents / coins[i];
		cents %= coins[i];
	}
	return (count);
}
/**
 * main - prints result for calculator
 * @argc: argument count
 * @argv: argument input
 * Return: 0 if success
 */
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int cents = atoi(argv[1]);

	int coin_result = coin_calculator(cents);

	printf("%d\n", coin_result);

	return (0);
}
