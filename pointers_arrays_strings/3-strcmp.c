#include "main.h"

/**
 * _strcmp - comparing strings
 *@s1: compared
 *@s2: compared
 *Return: integer
 */
int _strcmp(char *s1, char *s2)
{
	int a;

	for (a = 0; s1[a] != '\0' && s2[a] != '\0'; a++)
	{
		if (s1[a] != s2[a])
		{
			break;
		}
	}
	if (s1[a] < s2[a])
	{
		return (s1[a] - s2[a]);
	}
	else if (s1[a] > s2[a])
	{
		return (s1[a] - s2[a]);
	}
	else
	{
		return (s1[a] = s2[a]);
	}
	return (a);
}
