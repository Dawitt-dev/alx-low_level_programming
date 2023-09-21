#include "main.h"
/**
 * print_rev - prints a string in revers
 * @s: string to be printed
 * return: Nothing
 */
void print_rev(char *s)
{
	int len = 0;
	int i;

	for (i = 0 ; s[i] != '\0' ; i++)
		len++;
	for (i = len - 1 ; i >= 0; i--)
		_putchar (s[i]);
	_putchar ('\n');
}
