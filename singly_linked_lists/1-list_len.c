#include "lists.h"
#include <stdio.h>

/**
 * list_len - provides the length of the list
 * @h: the list being analyzed
 *
 * Return: length of the string
 */

size_t list_len(const list_t *h)

{
	size_t idx = 0;

	while (h != NULL)
	{
		idx++;

		h = h->next;
	}

	return (idx);
}
