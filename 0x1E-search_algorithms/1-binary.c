#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers
 *                 using the Binary search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index where value is located, or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l, r, m;

	if (array == NULL || size == 0)
		return (-1);

	l = 0;
	r = size - 1;

	while (l <= r)
	{
		size_t i;

		printf("Searching in array:");
		for (i = l; i < r; i++)
			printf(" %d,", array[i]);
		printf(" %d\n", array[i]);

		m = (l + r) / 2;

		if (array[m] == value)
			return (m);
		else if (array[m] < value)
			l = m + 1;
		else
			r = m - 1;
	}
	return (-1);
}
