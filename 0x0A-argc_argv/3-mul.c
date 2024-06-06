#include "main.h"
/**
* main - multiplies two numbers
* @argc: number of arguments
* @argv: array of arguments
*
* Return: 0
*/
int main(int argc, char *argv[])
{
	int mult;
	(void)argc;
	
	mult = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mult);
	return (0);
}