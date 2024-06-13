#include <stdio.h>
#include  "3-calc.h"
#include <stdlib.h>

/**
 * main - implement simple calcurator
 * @argc: count on terminal input
 * @argv: array of terminal input
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int a, b;
	char *op;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	op = argv[2];
	b = atoi(argv[3]);
	f = get_op_func(op);

	if (f == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '/' || *op == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", f(a, b));
	return (0);
}
