#include "main.h"
/**
 * print_rev - print the string in reverse
 * @s: printed string
*/
void print_rev(char *s)
{
	int A;
	int B;

	for (A = 0; s[A] != '\0'; A++)
	{
	}
	for (B = -1; B >= 0; B--)
	{
		_putchar(s[B]);
	}
	_putchar('\n');
}
