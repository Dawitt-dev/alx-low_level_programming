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

	if (argc <= 2)
	{
		printf("0\n");
		return (0);
	}
	if (atoi(argv[i]) == 0)
	{
		printf("Error\n");
		return (1);
	}
	if (i < argc)
	{
		if (atoi(argv[i]) == 0)
		{	printf("Error\n");
			return (1);
		}
		else
		{
			sum += atoi(argv[i]);
			i++;
		}
	}
	printf("%d\n", sum);

	return (0);
}
