#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
/**
* delete_dnodeint_at_index - deletes the node at index index of a dlistint_t
* @head: head
* @index: index
* Return: 1 or -1
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	while (temp != NULL)
	{
		if (i == index)
		{
			temp->prev->next = temp->next;
			if (temp->next != NULL)
				temp->next->prev = temp->prev;
			free(temp);
			return (1);
		}
		temp = temp->next;
		i++;
	}
	return (-1);
}
