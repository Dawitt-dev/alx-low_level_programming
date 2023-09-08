#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0
 */
int main(void)
{
	char str[] = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; str[i] != '\0'; i++)
		putchar(str[i]);

	putchar('\n');

	return (0);
}
