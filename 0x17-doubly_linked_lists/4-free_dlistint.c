#include "lists.h"
/**
 * free_dlistint - a function that frees a dlistint_t list.
 *@head: list to be freed
 *
 * Return: NOTHING
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node, *next;

	node = head;

	while (node)
	{
		next = node->next;
		free(node);
		node = next;
	}
}
