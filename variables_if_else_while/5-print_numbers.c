#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (Success)
*/

int main(void)
{
	int num;

	scanf("%d", num);
	while (num < 10)
	{
		printf("%d\n", num % 10);
		num++;
	}
	putchar ('\n');
	return (0);
}
