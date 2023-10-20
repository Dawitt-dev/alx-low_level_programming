#include "lists.h"
/**
 * add_node_end -  adds a new node at the end of a list
 *@head: pointer to head
 *@str: pointer to string
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node_end, *tmp;
	unsigned int i, count = 0;

	node_end = malloc(sizeof(list_t));
	if (node_end == NULL)
	{
		return (NULL);
	}
	node_end->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
	{
		count++;
	}
	node_end->len = count;
	node_end->next = NULL;
	tmp = *head;

	if (tmp == NULL)
	{
		*head = node_end;
	}
	else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = node_end;
	}
	return (*head);
}
