#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 *@b: argument
 *
 *
 * Return: Nothing
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
