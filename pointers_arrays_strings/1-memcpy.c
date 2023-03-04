#include "main.h"

/**
 * *_memcpy - copying memory
 * @dest: destination to be copied
 * @src: string being copied
 * @n: elements
 * Return: (dest)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *pdest = dest;

	char *psrc = src;

	unsigned int A;

		for (A = 0; n > A; A++)
		{
			*pdest++ = *psrc++;
		}
	return (dest);
}
