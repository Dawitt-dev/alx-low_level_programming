#include <stdlib.h>
/**
 * create_array - creates an array of chars, and initializes it with a char
 *@c: initializing charachter
 *@size: size of the array
 * Return: a pointer to the array, or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
