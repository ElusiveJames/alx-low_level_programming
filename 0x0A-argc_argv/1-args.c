#include "main.h"
/**
* main - print number of arguments supplied
* @argc: parameter count
* @argv: parameter array
*
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
