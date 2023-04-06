#include "lists.h"

/**
 * add_dnodeint - adding a node to the beginning
 * @head: pointer to a pointer to the head of the node
 * @n: contains data of a node
 * Return: dlistint with a new node in the head
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
	(*head)->prev = new_node;
		
	*head = new_node;
	
	return (new_node);
}
