#include "main.h"
/**
 * *string_toupper - functions changes lowercase to uppercase
 *@s: string
 *Return: uppercase letters
*/
char *string_toupper(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] >= 'a' && s[a] <= 'z')
		{
			s[a] = s[a] - ('a' - 'A');
		}
	}
	return (s);
}
