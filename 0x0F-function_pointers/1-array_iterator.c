#include "function_pointers.h"
/**
 * array_iterator - executes a function given
 *@size: size of the array
 *@action: a pointer to the function
 *@array: pointer to the array
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action == NULL || array == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
