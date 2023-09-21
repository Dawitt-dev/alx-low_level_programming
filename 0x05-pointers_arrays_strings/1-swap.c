#include "main.h"
#include <stdio.h>
/**
 * swap_int - swaps the values of two integers
 *@a: integer to be swaped
 *@b: integer to be swaped
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
