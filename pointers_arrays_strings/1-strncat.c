#include "main.h"
/**
 * *_strncat - 2 concatinated strings plus an integer
 * @dest: concatinate string
 * @src: concatinate string
 * @n: integer
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *p = dest;

	while (*p != '\0')
	{
		p++;
	}
	while (*src != '\0' && n > 0)
	{
		*p++ = *src++;
		n--;
	}
	*p = '\0';
	return (dest);
}
