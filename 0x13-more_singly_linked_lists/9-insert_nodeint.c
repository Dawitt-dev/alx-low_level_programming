#include "lists.h"
/**
 * insert_nodeint_at_index - a function that inserts a node @ a given position
 *@n: the integer of the list
 *@head: a pointer to the list
 *@idx: index of the list where new node should be added
 * Return: NULL or adrees of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node_plus, *tmp = *head;
	unsigned int i = 0;

	node_plus = malloc(sizeof(listint_t));
	if (node_plus == NULL)
	{
		return (NULL);
	}
	node_plus->n = n;
	if (idx == 0)
	{
		node_plus->next = *head;
		*head = node_plus;
		return (node_plus);
	}

	for (i = 0; i < idx - 1; i++)
	{
		if (tmp == NULL || tmp->next == NULL)
	{
		free(node_plus);
		return (NULL);
	}
	tmp = tmp->next;

	}
	node_plus->next = tmp->next;
	tmp->next = node_plus;

	return (node_plus);
}
