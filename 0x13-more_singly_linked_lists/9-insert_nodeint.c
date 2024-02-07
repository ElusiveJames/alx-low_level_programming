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
	unsigned int x = 0;

	ptr = *head;
	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->n = n;
	if (head == NULL)
	{
		return (NULL);
	}
	else
	{
		while (ptr != NULL)
		{
			ptr = ptr->next;
			x++;
			if (ptr == NULL)
			{
				ptr->next = temp;
				temp->next = NULL;
			}
			else
			{
				if (x == idx)
				{
					temp->next = ptr->next;
					ptr->next = temp;
					break;
				}
			}
		}
	}
	return (temp);
}
