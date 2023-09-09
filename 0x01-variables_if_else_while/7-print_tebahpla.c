#include <stdio.h>

/**
 * main - main function
 *
 * Return: Always 0
 */
int main(void)
{
	char str[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; str[i] != '\0'; i--)
		putchar(str[i]);

	putchar('\n');

	return (0);
}
