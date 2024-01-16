/**
  *create_array - create an array
  *@size: memeory size to be allocated
  *@c: parameter to initialize the array
  *Return: NULL or pointer to mem allocated
  */
#include <stdlib.h>
#include <stdio.h>
#include "main.h"
char *create_array(unsigned int size, char c)
{
	unsigned int  i;
	char *ptr;

	if (size == 0)
		return (NULL);
	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
}

