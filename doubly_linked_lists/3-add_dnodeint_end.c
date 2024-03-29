#include "lists.h"

/**
 * add_dnodeint_end - adding a node at the end of the list
 *@head: pointer to a pointer to the head of the list
 *@n: data in the list
 *Return: new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t)), *current;

	if (node == NULL)
	{
		free(node);
		return (NULL);
	}

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		node->prev = NULL;
		*head = node;
		return (node);
	}

	current = *head;
	while (current->next != NULL)
		current = current->next;

	current->next = node;
	node->prev = current;

	return (node);
}
