/**
  *print_list - print elements of a list
  *@h: head pointer
  *Return: no of nodes
  */
#include "lists.h"
#include <stdio.h>

size_t print_list(const list_t *h)
{
	int count = 0;
	const list_t *ptr;

	ptr = h;
	if (ptr == NULL)
		printf("list is empty");
	while (ptr != NULL)
	{
		count++;
		if (ptr->str == NULL)
			printf("[0] (nil)\n");
		printf("[%d] %s\n ", ptr->len, ptr->str);
		ptr = ptr->next;
	}
	ptr = h;
	return (count);
}
