#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - adds positive numbers
 *@argc: count
 *@argv: vector
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i, sum;

	i = 0;
	sum = 0;

	while (argc <= 1)
	{
		if (argv[0])
		{
			printf("0\n");
			return (0);
		}
		else if (atoi(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
	}
	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);

	return (0);
}
