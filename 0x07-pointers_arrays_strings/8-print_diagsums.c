#include "main.h"
#include <stdio.h>
/**
* print_diagsums - prints the sum of the two diagonals
* of a square matrix of integers
* @a: pointer
* @size: size
* Return: void
*/

void print_diagsums(int *a, int size)
{
	int i, major_d = 0, minor_d = 0;

	for (i = 0 ; i < size ; i++)
	{
		major_d += a[i * size + i];
	}
	for (i = 0 ; i < size ; i++)
	{
		minor_d += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", major_d, minor_d);
}
