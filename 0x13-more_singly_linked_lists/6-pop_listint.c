/**
  *pop_listint - delete the first node
  *@head: pointer to list
  *Return: heads node data
  */
#include "lists.h"
int pop_listint(listint_t **head)
{
	listint_t *ptr;

	ptr = *head;
	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		*head  = ptr->next;
		free(ptr);
		ptr = *head;
	}
	return (ptr->n);
}
