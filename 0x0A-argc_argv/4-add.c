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
	int i, sum, j;

	i = 1;
	sum = 0;

	while (i <= argc - 1)
	{
		j = atoi(argv[i]);

		if (j == 0)
		{
			printf("Error\n");
			return (1);
		}

		sum += j;
		i++;
	}

	printf("%d\n", sum);

	return (0);
}
