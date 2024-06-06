#include "main.h"
#include <ctype.h>
/**
* main - adds positive numbers
* @argc: number of arguments
* @argv: array of arguments
*
* Return: 0
*/

int main(int argc, char *argv[])
{
	int i, sum = 0, digit;

	if (argc == 1)
		printf("%d\n", 0);
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			digit = isdigit(*(argv[i]));
			if (digit != 0)
				sum += atoi(argv[i]);
			else
				printf("Error\n");
			}
	}
	printf("%d\n", sum);
	return (0);
}
