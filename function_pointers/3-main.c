#include "3-calc.h"

/**
 * main - entry point of function
 * @argc: arguments passed
 * @argv: array of arguments passed
 * Return: 0 on success or 98, 99 or 100 on failure
 */

int main(int argc, int *argv[])
{
	int a, b, c;

	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op_func = get_op_func(argv[2]);

	if (op_func == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		return (99);
	}
	c = op_func(a, b);
	printf("%d\n", c);

		return (0);
}
