#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocate memory for an array
 * @nmemb: number of elements
 * @size: size of elements
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *allocated_memory;
	unsigned int s;

	if (nmemb == 0 || size == 0)
		return (NULL);

	s = nmemb * size;
	allocated_memory = malloc(s);

	if (allocated_memory == NULL)
		return (NULL);

	memset(allocated_memory, 0, s);

		return (allocated_memory);
}
