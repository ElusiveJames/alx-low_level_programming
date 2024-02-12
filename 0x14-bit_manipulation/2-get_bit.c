/**
  *get_bit - get bit value at a given position
  *@n: decimal number
  *@index: position to check
  *Return: value of the bit at index
  */
#include "main.h"
int get_bit(unsigned long int n, unsigned int index)
{
	int x = n >> index;

	if (x & 1)
		return (1);
	else
		return (0);
}
