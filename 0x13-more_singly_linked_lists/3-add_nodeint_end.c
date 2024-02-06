/**
  *add_nodeint_end - add element of alist at the end
  *@head: pointer to start of a list
  *@n: member of node
  *Return: address to new node
  */
#include "lists.h"
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *ptr;

	ptr = *head;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	if (*head == NULL)
	{
		*head = temp;
		temp->next = NULL;
		return (*head);
	}
	else
	{
		while (ptr->next != NULL)
		{
			ptr = ptr->next;

		}
		ptr->next = temp;
		temp->next = NULL;
	}
	return (temp);
}
