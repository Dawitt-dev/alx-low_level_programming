#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * array_range -  creates an array of integers
 *@min: minimum integer
 *@max: maximum integer
 * Return: Null or pointer
 */
int *array_range(int min, int max)
{
	int *array;
	int size, i;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	array = malloc(sizeof(int) * size);

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= (max - min); i++)
	{
		array[i] = min + i;
	}
	return (array);
}
