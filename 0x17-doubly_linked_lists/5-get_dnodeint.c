#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
* @head: head
* @index: index
* Return: nth node
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp = head;

	if (head == NULL)
		return (NULL);
	while (temp != NULL)
	{
		if (i == index)
			return (temp);
		temp = temp->next;
		i++;
	}
	return (NULL);
}
