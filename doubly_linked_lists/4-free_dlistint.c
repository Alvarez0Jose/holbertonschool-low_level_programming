#include "lists.h"

/**
 * free_dlistint - free malloc
 *@head: pointer to the head of the list
 *Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (current != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
