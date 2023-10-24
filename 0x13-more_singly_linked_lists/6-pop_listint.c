#include "lists.h"
/**
 * pop_listint - a function that deletes the head node of a list
 *
 *
 *@head: pointer to a list
 * Return: 0, n
 */
int pop_listint(listint_t **head)
{
	listint_t *pop;
	int n;

	if (*head == NULL)
	{
		return (0);
	}

	pop = *head;
	n = pop->n;
	*head = pop->next;
	free(pop);

	return (n);
}
