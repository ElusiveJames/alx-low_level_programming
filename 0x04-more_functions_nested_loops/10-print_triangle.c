#include "main.h"
/**
* print_triangle -  print  triangle
* @size: argument
*/
void print_triangle(int size)
{
	int i, j, space = size - 1;

	if (size <= 0)
		_putchar('\n');
	for (j = 1; j <= size; j++)
	{
		for (i = 1; i <= size; i++)
		{
			if (i <= space)
				_putchar(32);
			else
				_putchar('#');
		}
		space--;
		_putchar('\n');
	}

}
