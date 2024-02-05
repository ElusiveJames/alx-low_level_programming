/**
  *list_len - list number of elements in a list
  *@h: pointer to first node
  *Return: no of elements in the list
  */
#include "lists.h"

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h  != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
