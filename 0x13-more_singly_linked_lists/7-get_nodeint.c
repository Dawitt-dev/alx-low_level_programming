#include "lists.h"
/**
 * get_nodeint_at_index - a function that returns the nth node of a list
 *
 *@index: the index of the node
 *@head: a pointer to a list
 * Return: List of int or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	unsigned int i = 0;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}

	return (head);
}
