#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* add_dnodeint_end - adds a new node at the end of a dlistint_t list
* @head: head
* @n: integer
* Return: the address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
	{
		return (NULL);
	}
	temp->n = n;
	temp->next = NULL;
	temp->prev = NULL;
	if (*head == NULL)
	{
		*head = temp;
	}
	else
	{
		dlistint_t *last = *head;

		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = temp;
		temp->prev = last;
	}
	return (temp);
}
