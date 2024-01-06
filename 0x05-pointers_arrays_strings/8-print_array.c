/**
  *print_array -print n elements of an array
  *@a: array of integers
  *@n: number of element in array to be printed
  */
#include "main.h"
#include <stdio.h>
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
