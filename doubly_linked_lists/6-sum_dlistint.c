#include "lists.h"

/**
 *sum_dlistint - sums all the data in a list
 *@head: pointer to the head of the list
 *Return: sum of all of the data in the list
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *node = head;

	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
