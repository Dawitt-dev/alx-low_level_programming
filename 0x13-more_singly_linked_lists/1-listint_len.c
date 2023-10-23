#include "lists.h"
/**
 * listint_len - a function that returns the number of elements in a list
 *@h:  pointer to list
 *Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		h = h->next;
		node++;
	}
	return (node);
}
