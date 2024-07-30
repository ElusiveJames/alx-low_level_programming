#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* insert_dnodeint_at_index - inserts a new node at a given position
* @h: head
* @idx: index
* @n: element
* Return: address of new node
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *temp = *h;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *h;
		new->prev = NULL;
		if (*h != NULL)
			(*h)->prev = new;
		*h = new;
		return (new);
	}
	while (temp != NULL)
	{
		if (i == idx - 1)
		{
			new->next = temp->next;
			new->prev = temp;
			if (temp->next != NULL)
				temp->next->prev = new;
			temp->next = new;
			return (new);
		}
		temp = temp->next;
		i++;
	}
	return (NULL);
}
