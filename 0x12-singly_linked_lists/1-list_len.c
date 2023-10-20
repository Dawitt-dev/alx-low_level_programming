#include "lists.h"
/**
 * list_len - returns number of elements in a linked
 *@h:  pointer to list
 * Return: number of elemnts
 */
size_t list_len(const list_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		h = h->next;
		node++;
	}
	return (node);
}
