#include "lists.h"
/**
 * add_dnodeint_end - a function that adds a node at the end of a list
 *@head: list to add node to
 *@n: data to be added in list
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *last;

	newNode = malloc(sizeof(dlistint_t));
	last = *head;
	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
		return (NULL);
	}

	while (last->next != NULL)
	{
		last = last->next;
	}

	last->next = newNode;
	newNode->prev = last;

	return (newNode);
}
