#include "main.h"
/**
 * _sqrt_recursion - Returns the natural square root of a number
 *@n: the input number
 *@g: guess number
 *Return: the square root or -1 if there is no
 */
int _sqrt(int n, int g);

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 0));
}
/**
 * _sqrt - helper function
 *@n: the input number
 *@g: guess number
 *Return: the square root or -1 if there is no
 */
int _sqrt(int n, int g)
{
	if (g * g == n)
		return (g);
	if (g * g > n)
		return (-1);
	return (_sqrt(n, g + 1));
}
