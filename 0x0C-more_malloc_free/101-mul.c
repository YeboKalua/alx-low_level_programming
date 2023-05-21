#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * check_num - checks if digit
 * @nb: string of number
 * Return: 0 if success
 */
int check_num(char *nb)
{
	int n;

	for (n = 0; nb[n] != '\0'; n++)
	{
		if (!isdigit(nb[n]))
		{
			return (0);
		}
	}
	return (1);
}
/**
 * mult - multiply two ints
 * @num1: number 1
 * @num2: number 2
 * Return: result  of multiplication
 */
int mult(char *num1, char *num2)
{
	int mult_ans;

	mult_ans = atoi(num1) * atoi(num2);
	return (mult_ans);
}
/**
 * main - multiplies two numbers
 * @argc: arguments number
 * @argv: arguments
 * Return: 0 if success
 */
int main(int argc, char **argv)
{
	int num1, num2, mult_ans;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	if (!check_num(argv[1]) || !check_num(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mult_ans = mult(argv[1], argv[2]);
	return (0);
}

