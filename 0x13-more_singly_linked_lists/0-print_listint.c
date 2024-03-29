/**
  *print_listint - print elements of a list
  *@h: pointer to list
  *Return: number of nodes
  */
#include "lists.h"

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
