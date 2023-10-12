#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all its parameters
 *
 *@n: argument
 * Return: some of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int j = 0;

	va_start(ap, n);

	if (n == 0)
	{
		va_end(ap);
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		j += va_arg(ap, int);
	}
	va_end(ap);

	return (j);
}
