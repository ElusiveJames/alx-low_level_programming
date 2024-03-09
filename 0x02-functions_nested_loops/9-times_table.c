/**
  * times_table - print 9 times table
  */
#include "main.h"
void times_table(void)
{

	int row, col, prod;

	for (row = 0; row < 10; row++)
	{
		for (col = 0; col < 10; col++)
		{
			prod = row * col;

			if (prod > 9)
			{
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
			}
			if (col > 0 && prod < 10) 
			{
				_putchar(32);
				_putchar(prod + '0');

			}
			if (col < 1 && prod < 10)
				_putchar(prod + '0');
						
			if (col < 9)
			{
				_putchar(',');
				_putchar(32);
			}

		}
		_putchar('\n');
	}
}
