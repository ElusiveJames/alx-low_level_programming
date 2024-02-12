/**
  *clear_bit - set bit value to 1
  *@n: number
  *@index: position
  *Return: 1 if success else -1
  */
#include "main.h"
int clear_bit(unsigned long int *n, unsigned int index)
{
	int mask;

	if (index > (sizeof(unsigned int) * 8) - 1 || n  == NULL)
		return (-1);
	mask = 1 << index;
	*n = *n & ~mask;
	return (1);
}
