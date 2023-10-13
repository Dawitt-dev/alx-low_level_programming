#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_strings -  prints strings
 *@separator: is the string to be printed between the strings
 *@n: the number of strings passed to the function
 * Return: strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		char *str = va_arg(ap, char *);

		if (str != NULL)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}
		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(ap);
}
