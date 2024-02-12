/**
  *flip_bits - count flipped bit to next number
  *@n: source number
  *@m: dest number
  *Return: number of fliped bits;
  */
#include "main.h"
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	int count = 0;

	while (x > 0)
	{
		count++;
		x &= (x - 1);
	}
	return (count);
}
