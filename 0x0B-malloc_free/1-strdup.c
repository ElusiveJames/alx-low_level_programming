/**
  *_strdup - return a pointer to a new mem space
  *@str: string to be duplicated
  *Return: a pointer to arr of duplicated string
  */
#include <stdlib.h>
#include <stdio.h>
#include "main.h"
char *_strdup(char *str)
{
	char *dup;
	int i, j;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;

	dup = (char *)malloc(sizeof(char) * (i + 1));
	if (dup == NULL)
		return (NULL);
	for (j = 0; j <= i; j++)
		dup[j] = str[j];
	return (dup);
}
