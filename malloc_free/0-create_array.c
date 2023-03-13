#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates and array for the malloc fucntion
 * @c: specified char for array
 * @size: size of the array
 * Return: NULL if size = 0, pointer to array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *arr = (char *) malloc(size * sizeof(char));

	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);

}
