/**
  *print_list - print elements of a list
  *@h: head pointer
  *Return: no of nodes
  */
#include "lists.h"

size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *ptr;

	ptr = h;
	while (ptr != NULL)
	{
		count++;
		if (ptr->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n ", ptr->len, ptr->str);
		ptr = ptr->next;
	}
	return (count);
}
