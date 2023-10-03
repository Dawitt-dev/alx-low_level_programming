#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 *@argc: argument count
 *@argv: argument vector
 * Return: always 1
 */
int main(int argc, char *argv[])
{
	int x;
	int y;
	int z;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		z = x * y;
		printf("%d\n", z);
	}
	return (0);
}
