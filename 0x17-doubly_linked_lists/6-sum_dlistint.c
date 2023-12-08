#include "lists.h"
/**
 * sum_dlistint - a function that returns the sum of the data (n) of a list
 *@head: the list whose data are added
 *
 * Return: if the list is empty, return 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;

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
