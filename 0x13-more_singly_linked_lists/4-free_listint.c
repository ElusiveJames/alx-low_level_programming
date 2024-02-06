/**
  *free_listint - free list in memeory
  *@head: pointer to list
  */
#include "lists.h"
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while ((ptr = head) != NULL)
	{
		head = head->next;
		free(ptr);
	}
}
