#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - string duplicate
 * @str: string to be analyzed
 * Return: NULL if insuficient memory, success = pointer to string
 */

char *_strdup(char *str)
{
	int  i;
	int len;
	char *strd;

	if (str == NULL)
	{
		return (NULL);
	}
	len = strlen(str + 1);
	strd = malloc(len);

	if (strd == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		strd[i] = str[i];
	}

	return (strd);
}
