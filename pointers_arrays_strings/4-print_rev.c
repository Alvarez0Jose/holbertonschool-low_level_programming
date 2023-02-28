#include "main.h"
/**
 * print_rev - print the string in reverse
 * @s: printed string
*/
void print_rev(char *s)
{
	int A = 0;
	int B;

	while (s[A] != '\0')
	{
		A++;
		s++;
	}
	s--;
	for (B = A; B > 0; B--)
	{
		_putchar(*s);
		s--;
	}
}
