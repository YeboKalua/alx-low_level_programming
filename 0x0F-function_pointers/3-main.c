#include "3-calc.h"
#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - main function
 * @argc: number of arguments
 * @argv: argument vector
 * Return: int result
 */
int main(int argc, char **argv)
{
	int a, b;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = argv[2];

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '/' && b == 0) || (*op == '%' && b == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(a, b));
	return (0);
}
