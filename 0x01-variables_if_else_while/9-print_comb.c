#include <stdio.h>

/**
 * main - main function
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
