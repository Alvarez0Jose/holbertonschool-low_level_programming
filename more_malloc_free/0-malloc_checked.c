#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - verifies if malloc was successful
 * @b: variable of size
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
