#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_list - frees linked list
 * @head: pointer to the beginning of the list
 */
void free_list(list_t *head)
{
	list_t *current_node, *next_node;

	current_node = head;
	while (current_node != NULL)
	{
		next_node = current_node->next;
		free(current_node->str);
		free(current_node);
		current_node = next_node;
	}
}
