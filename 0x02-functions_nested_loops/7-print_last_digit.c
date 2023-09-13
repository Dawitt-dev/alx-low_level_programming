#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @i:parameter
 * Return: a
 */
int print_last_digit(int i)
{
	int a;

	a = i % 10;
	if (i < 0)
		a = -a;
	_putchar(a + '0');
	return (a);
}
