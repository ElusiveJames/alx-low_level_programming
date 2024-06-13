#include "function_pointers.h"
/**
* int_index - function that searches for an integer
* @array: array
* @size: size of the array
* @cmp: pointer to the function
*
* Return: index of the first element
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL)
		return (-1);

	while (i < size)
	{
		if (cmp(array[i]))
			return (i);
		i++;
	}

	return (-1);
}
