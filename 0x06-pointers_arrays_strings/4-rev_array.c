/**
  *reverse_array - reverses element in an array;
  *@a: pointer to array of elements
  *@n: number of elements
  */
#include "main.h"
void reverse_array(int *a, int n)
{
	int i, x;

	for (i = (n - 1); i > n / 2; i--)
	{
		x = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = x;
	}
}
