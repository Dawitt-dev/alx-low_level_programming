#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list
 *@head:pointer to head
 *@str: pointer to string
 * Return: he address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node_0;
	unsigned int i, count = 0;

	node_0 = malloc(sizeof(list_t));
	if (node_0 == NULL)
	{
		return (NULL);
	}
	node_0->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
	{
		count++;
	}
	node_0->len = count;
	node_0->next = *head;
	*head = node_0;

	return (*head);
}

