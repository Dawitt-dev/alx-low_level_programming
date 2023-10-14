#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - calculatess two numbers
 *
 *
 *@argv: argument vector
 *@argc: argument count
 * Return: 100,99,98 or 0
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	operator = argv[2];
	num2 = atoi(argv[3]);

	if (get_op_func(operator) == NULL)
	{
		printf("Error\n");
		return (99);
	}

	if ((*operator == '/' || *operator == '%') && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}

	result = get_op_func(operator)(num1, num2);

	printf("%d\n", result);

	return (0);
}
