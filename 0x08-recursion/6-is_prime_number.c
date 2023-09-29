#include "main.h"
/**
 * is_prime_number - identifies prime numbers
 *@n: input
 *@d: divisor
 *Return: 1 if prime and 0 if not
 */
int _help(int n, int d);

int is_prime_number(int n)
{
	return (_help(n, n / 2));
}
/**
 * _help - help function
 *@n: input
 *@d: divisor
 *Return: 1 if prime and 0 if not
 */
int _help(int n, int d)
{
	if (n < 2)
	{
		return (0);
	}
	if (d == 1)
	{
		return (1);
	}
	if (n % d == 0)
	{
	return (0);
	}

	return (_help(n, d - 1));
}
