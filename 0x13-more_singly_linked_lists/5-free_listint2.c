/**
  *free_listint2 - free a list
  *@head: pointer to list
  */
#include "lists.h"

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
		;
	else
	{
		while ((ptr = *head) != NULL)
			{
				ptr = ptr->next;
				free(*head);
				*head = ptr;
			}
	}
	
}
