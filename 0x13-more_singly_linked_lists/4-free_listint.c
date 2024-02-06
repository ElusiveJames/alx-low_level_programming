/**
  *free_listint - free list in memeory
  *@head: pointer to list
  */
#include "lists.h"
void free_listint(listint_t *head)
{
	listint_t *ptr;

	ptr = head;
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
		free(head);
		head = ptr;
	}
}
