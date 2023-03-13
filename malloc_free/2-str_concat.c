#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concat string memory
 * @s1: String to be concatinated
 * @s2: concatinated string
 * Return: concat string
 */

char *str_concat(char *s1, char *s2)
{
	size_t len1;
	size_t len2;
	char *C;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);

	C = malloc(len1 + len2 + 1);

	if (C == NULL)
	{
		return (NULL);
	}
	memcpy(C, s1, len1);
	memcpy(C + len1, s2, len2 + 1);

	return (C);
}
