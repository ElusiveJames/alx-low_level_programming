#include "main.h"
/**
* print_square - print  square
* @size: argument
*/
void print_square(int size)
{
	int i, j;

	for (j = 1; j <= size; j++)
	{
		for (i = 1; i <= size; i++)
			_putchar('#');
		_putchar('\n');
	}

}
