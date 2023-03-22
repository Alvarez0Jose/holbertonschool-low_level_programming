#include "3-calc.h"

/**
 * main - entry point of function
 * @argc: arguments passed
 * @argv: array of arguments passed
 * Return: 0 on success or 98, 99 or 100 on failure
 */

int main(int argc, int *argv[])
{
	int a, b, *c, d;

	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	c = 0;
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	op_func = get_op_func(argv[3]);

	if ((argv[1][c]) != '\0' && a[c])
	&&(argv[2][c] != '\0' && b[c])
	&& (argv[3][c] != '\0' && op_func)
	c++;
	{

	if (op_func == NULL || c != 3)

	{
		printf("Error\n");
		return (99);

	}
	}
	else
	{
		printf("Error\n");
		return (99);
		}

	d = op_func(a, b);
	printf("%d\n", d);

		return (0);
}
