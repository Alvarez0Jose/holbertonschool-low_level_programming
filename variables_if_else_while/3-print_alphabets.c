#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
*/

int main(void)
{
	char x;

	char y;

	x = 'a';

	y = 'A';

	while (x <= 'z')
	{
		putchar (x);
		x++;
	}
	while (y <= 'z')
	{
		putchar (y);
		y++;
	}
	return (0);
}
