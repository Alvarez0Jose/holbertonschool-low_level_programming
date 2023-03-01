#include "main.h"
/**
 * _strcat - string to be concatenated
 * @dest: string to be concatenated to
 * @src: string to be concatenated
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*p != '\0')
	{
		p++;
	}
	while (*src != '\0')
	{
		*p++ = *src++;
	}
	*p = '\0';
	return (p);
}
