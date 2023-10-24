#include "lists.h"
/**
 * sum_listint - a function that returns the sum of all the data of a list
 *@head: is a pointer to a list
 * Return: 0 or sum of n.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
