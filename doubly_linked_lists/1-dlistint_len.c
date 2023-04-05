#include "lists.h"

/**
 *
 *
 *
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t idx = 0;

	while (h != NULL)
	{
		idx++;
		h = h->next;
	}

	while (h != NULL)
	{
		idx++;
		h = h->prev;
	}

	return (idx);
}
