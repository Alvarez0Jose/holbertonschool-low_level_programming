#include "lists.h"

/**
 *insert_dnodeint_at_index - inserting a node at specific place
 *@h: pointer to the head of the list
 *@idx: index where the node is to be places
 *@n: data of the list
 *Return: new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t)), *node2;
	unsigned int i;

	if (node == NULL)
	{
		free(node);
		return (NULL);
	}

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	node2 = *h;

	for (i = 0; node2 != NULL && i < idx - 1; idx++)
		node2 = node2->next;

	if (node2 == NULL)
		return (NULL);

	node->n = n;
	node->prev = node2;
	node->next = node2->next;

	if (node2->next == NULL)
		node2->next->prev = node;

	node2->next = node;

	return (node);
}
