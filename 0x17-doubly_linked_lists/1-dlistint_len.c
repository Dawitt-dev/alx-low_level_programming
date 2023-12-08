#include "lists.h"
/**
 * dlistint_len - a fun. returns the number of elements in a linked list
 *@h: input list
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count;

	count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
