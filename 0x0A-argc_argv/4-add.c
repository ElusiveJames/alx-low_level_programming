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
	int i, sum = 0;
	long int digit;

	if (argc < 3)
		printf("%d\n", 0);
	else
	{
		for(i = 1; i < argc; i++)
		{
			char *endptr;
			digit = strtol(argv[i], &endptr, 10);
			if (*endptr == '\0')
				sum += digit;
			else
				printf("Error\n");
		}
		
		return (0);
	}
	printf("%d\n", sum);
	return (0);
}