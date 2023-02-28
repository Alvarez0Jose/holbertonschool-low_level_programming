#include "main.h"

/**
 * puts2 - every other character
 * @str: string with every other character
*/

void puts2(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		if (a % 2 == 0)
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
