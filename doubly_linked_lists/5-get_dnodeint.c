#include "lists.h"

/**
 * get_dnodeint_at_index - getting a node at specific index
 *@head: pointer to the head of the list
 *@index: place holder for where the node is
 *Return: the node we are looking for
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int idx;
	dlistint_t *current;

	if (head == NULL)
		return (NULL);

	current = head;

	for (idx = 0; current != NULL && idx < index; idx++)
		current = current->next;

	return (current);
}
