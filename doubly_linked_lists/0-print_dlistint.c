#include "lists.h"

/**
 * print _dlistint - prints all of the elements on the dlistint
 *@h: pointer to the head of the list in the dlistint
 *Return: the number of elements in the dlistint
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t idx = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		idx++;
		h = h->next;
	}

	while (h != NULL)
	{
		printf("%d\n", h->n);
		idx++;
		h = h->prev;
	}
	return (idx);
}
