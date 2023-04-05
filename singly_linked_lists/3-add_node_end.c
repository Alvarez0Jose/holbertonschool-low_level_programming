#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - adds a new node at the end of the list
 * @head: pointer to a pointer to the head of the list
 * @str: string to be stored at the new node
 *Return: address of new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nuevo, *ultimo;

	if (head == NULL || str == NULL)
		return (NULL);

	nuevo = malloc(sizeof(list_t));

	nuevo->str = strdup(str);

	if (nuevo->str == NULL)
	{
		free(nuevo);
		return (NULL);
	}

	nuevo->len = strlen(str);
	nuevo->next = NULL;

	if (*head == NULL)
		*head = nuevo;
	else
	{
		ultimo = *head;
	while (ultimo->next != NULL)
		ultimo = ultimo->next;

	ultimo->next = nuevo;
	}

	return (nuevo);
}
