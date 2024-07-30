#include <stdio.h>
#include "lists.h"
/**
* sum_dlistint - returns the sum of all the data (n) of a dlistint_t list
* @head: head
* Return: sum
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
