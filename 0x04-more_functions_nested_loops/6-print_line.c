#include "main.h"
/**
* print_line - print a line
* @n: length argument
*/

void print_line(int n)
{
	int i = n;

	for (; i > 0; i--)
		_putchar(95);
	_putchar('\n');
}
