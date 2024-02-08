/**
  *insert_nodeint_at_index - insert at a giveen position
  *@head: list
  *@idx: position to insert
  *@n: element of node
  *Return: address of new node
  */

#include "lists.h"
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *ptr;
	unsigned int x;

	ptr = *head;
	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->n = n;
	temp->next = NULL;
	if (*head == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		temp->next = *head;
		*head =  temp;
		return (temp);
	}
	for (x = 0; ptr && x < idx; x++)
	{
		if (x == idx - 1)
		{
			temp->next = ptr->next;
			ptr->next = temp;
			return (temp);
		}
		else
			ptr = ptr->next;
	}
	return (NULL);
}
