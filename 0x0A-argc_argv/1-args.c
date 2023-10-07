#include <stdio.h>
#include "main.h"
/**
 * main - prints the number of arguments passed into it
 *@argc: argument count
 *@argv: argument vector
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i = argc - 1;
	(void)argv;

	printf("%d\n", i);

	return (0);
}
