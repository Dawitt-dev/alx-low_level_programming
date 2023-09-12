#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabets ten times
 *
 * Return: Always (0)
 */
void print_alphabet_x10(void)
{
	int m;
	char i;

	for (m = 0 ; m < 10 ; m++)
	{
		for (i = 'a' ; i <= 'z' ; i++)
			_putchar(i);
		_putchar('\n');
	}

}
