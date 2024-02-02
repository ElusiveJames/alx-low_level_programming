/**
  *list_len - list number of elements in a list
  *@h: pointer to first node
  *Return: no of elements in the list
  */
#include "lists.h"
#include <stdio.h>

size_t list_len(const list_t *h)
{
	int count = 0;

	if (h == NULL)
		printf("list is empty");
	while (h  != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
