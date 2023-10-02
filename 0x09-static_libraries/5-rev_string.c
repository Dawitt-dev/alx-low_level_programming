#include "main.h"
/**
 * rev_string - reverses a string
 * @s: parameter
 * Return: nothing
 */
void rev_string(char *s)
{
	int i;
	int len = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		len++;
	for (i = len - 1 ; i >= 0 ; i--)
		_putchar(s[i]);
	_putchar('\n');

}
