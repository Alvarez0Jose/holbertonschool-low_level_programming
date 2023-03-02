#include "main.h"
/**
 * *leet - changing letters to numbers
 *@s: string to be changed
 *Return: s
 */

char *leet(char *s)
{
	char letters[] = "aeotl";

	char numbers[] = "43071";

	int A, B;

	for (A = 0; s[A] != '\0'; A++)
	{
		for (B = 0; B < 5; B++)
		{
			if (s[A] == letters[B] || s[A] == letters[B] - 32)
			{
				s[A] = numbers[B];
				break;
			}
		}
	}
	return (s);
}
