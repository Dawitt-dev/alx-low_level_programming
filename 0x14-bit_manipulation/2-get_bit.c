#include "main.h"
/**
 * get_bit - a function that returns the value of a bit at a given index
 *@n: the number
 *@index: the index
 * Return: the value @ index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
