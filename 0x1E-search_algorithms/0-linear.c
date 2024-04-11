#include "search_algos.h"

/**
 * linear_search - that searches a value in array of integers by Linear search
 * @size:is the number of elements in array
 * @array: is a pointer to the first element of the array to search in
 * @value: the value to search for
 * Return: index or -1
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
