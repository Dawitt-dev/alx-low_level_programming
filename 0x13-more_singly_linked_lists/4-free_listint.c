#include "lists.h"
/**
 * free_listint - a function that frees a list
 *
 *@head: a pointer to a list
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *current = head;
	listint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
