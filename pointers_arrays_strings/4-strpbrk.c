#include "main.h"

/**
 * *_strpbrk - searches for any set of bytes
 * @s: string to be searched
 * @accept: other string
 * Return: pointer to bytes
 */

char *_strpbrk(char *s, char *accept)
{
	char *x = accept;

	for (; *s != '\0'; s++)
	{
		while (*x != '\0')
		{
			x++;
			{

				if (*s == *x)
				{
					return (s);
				}
			}
		}
	}
	return ('\0');
}
