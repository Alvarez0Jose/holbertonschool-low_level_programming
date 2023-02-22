#include "main.h"
/**
 * Print_alphabet_x10 - Entry point
 * Return: 0 (success)
 */

void print_alphabet_x10(void)
{
	int i = 'a';

	int J;

	J = 0;

	while (J <= 9)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');

		J++;
	}
}
