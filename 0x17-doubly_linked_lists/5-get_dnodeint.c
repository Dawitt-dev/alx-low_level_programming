#include "lists.h"
/**
 * get_dnodeint_at_inde - a function that returns the nth node of a list
 *@head: list to add to
 *@index:  is the index of the node
 *
 * Return: if the node does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int count;

	count = 0;
	current = head;

	while (current != NULL && count < index)
	{
		current = current->next;
		count++;
	}

	return (current);
}
