#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (success)
*/
int main(void)
{
	char a = 'a';

	int l = '0';

	while
		(l < 10)
		{
			putchar(l + '0');
			l++;
		}
	while
		(a <= 'f')
		{
			putchar(a);
			a++;
		}
	putchar('\n');
	return (0);
}
