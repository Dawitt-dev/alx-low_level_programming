#include "lists.h"
/**
 * add_nodeint_end - a function that adds a new node at the end of a list
 *@n: integer argument
 *@head: list
 * Return: the address of the new element, or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node_end, *temp;

	node_end = malloc(sizeof(listint_t));
	if (node_end == NULL)
	{
		return (NULL);
	}
	node_end->n = n;
	node_end->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = node_end;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = node_end;
	}
	return (*head);
}
