#include "lists.h"
#include <stdio.h>
/**
 * print_list - printing all the list
 * @h: list being analyzed
 * Return: number of nodes
*/

size_t print_list(const list_t *h)
{
	unsigned int idx = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		idx++;
		h = h->next;
	}
		return (idx);
}
