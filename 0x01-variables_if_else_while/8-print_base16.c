#include <stdio.h>

/**
 * main - main function
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	int m;

	for (i = 0; i <= 9; i++)
		putchar(i + '0');
	for (m = 'a'; m <= 'f'; m++)
		putchar(m);

	putchar('\n');

	return (0);
}
