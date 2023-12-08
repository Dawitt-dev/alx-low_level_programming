#include "lists.h"
/**
 * add_dnodeint - a function that adds a new node at the beginning of a list
 *@head: list to add node to
 *@n: data to be added in list
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	newNode->n = n;
	newNode->next = *head;
	newNode->prev = NULL;

	if (*head != NULL)
	{
		(*head)->prev = newNode;
	}
	*head = newNode;
	return (newNode);
	if (*head == NULL)
	{
		return (NULL);
	}
}
