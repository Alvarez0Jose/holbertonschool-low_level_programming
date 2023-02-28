#include "main.h"
/**
 * _strcpy - copys string
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	char *p = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
		*dest = '\0';

	return (p);
}
