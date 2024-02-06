/**
  *listint_len - find no of nodes in a list
  *@h: pointer to list
  *Return: number of nodes
 */
#include "lists.h"

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
