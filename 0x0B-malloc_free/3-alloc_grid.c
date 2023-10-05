#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 *@width: width of the grid
 * @height: height of the grid
 *
 * Return: array of int or NULL
 */
int **alloc_grid(int width, int height)
{
	int **gr;
	int i;
	int j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	gr = malloc(height * sizeof(int *));

	if (gr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		gr[i] = malloc(width * sizeof(int));

		if (gr[i] == NULL)
		{
			free(gr);
			for (j = 0; j < i; j++)
			{
				free(gr[j]);
			}
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			gr[i][j] = 0;
		}
	}
	return (gr);
}
