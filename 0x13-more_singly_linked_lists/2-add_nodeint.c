#include "lists.h"
/**
 * add_nodeint - a function that adds a new node at the beginning of a list
 *@head: pointer to head
 *@n: integer parameter
 *Return: the address of the new element, or NUll
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node_0;

	node_0 = malloc(sizeof(listint_t));
	if (node_0 == NULL)
	{
		return (NULL);
	}
	node_0->n = n;
	node_0->next = *head;
	*head = node_0;

	return (*head);

}
