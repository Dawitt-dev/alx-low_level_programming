#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _calloc - allocates memory for an array, using malloc
 *@size: argument
 *@nmemb: argument
 * Return: NULL or array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	size_t i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}
