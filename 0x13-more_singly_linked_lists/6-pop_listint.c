/**
  *pop_listint - delete the first node
  *@head: pointer to list
  *Return: heads node data
  */
#include "lists.h"
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int x;

	ptr = *head;
	if (ptr == NULL)
	{
		return (0);
	}
	else
	{
		x = ptr->n;
		*head  = ptr->next;
		free(ptr);
	}
	return (x);
}
