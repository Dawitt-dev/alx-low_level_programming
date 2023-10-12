#include "function_pointers.h"
/**
 * int_index - searches for an integer
 *@size: number of elements in the array
 *@cmp: pointer to the function
 *@array: pointer to the array
 * Return: 0,-1 or index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
