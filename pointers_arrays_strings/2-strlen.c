#include "main.h"

/**
 * _strlen - length of the string
 * @s: value of the string
 * Return: length of the string
*/

int _strlen(char *s)
{
	int L = 0;
		while (*s != '\0')
		{
			L++;
			s++;
		}
	return (L);
}
