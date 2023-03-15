#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - strings to be concatenated
 * @s1: string number 1
 * @s2: string number 2
 * @n: size interger
 * Return: concat string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i, a;
	char *str;

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

	if (n >= len2)
	{
		n = len2;
	}

	str = malloc(len1 + n + 1 * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
	str[i] = s1[i];
	}
	for (a = 0; a < n; a++, i++)
	{
	str[i] = s2[a];
	}

	str[i] = '\0';

	return (str);
}
