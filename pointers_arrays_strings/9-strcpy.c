#include "main.h"
/**
 * _strcpy - copys string
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int A;
	int B;

	while (*(src + A) != '\0')
	{
		A++;
	}
	for (; B < A; B++)
	{
		dest[B] = src[A];
	}
	dest[A] = '\0';
	return (dest);
}
