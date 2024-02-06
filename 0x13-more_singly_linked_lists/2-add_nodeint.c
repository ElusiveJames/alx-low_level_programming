/**
  *add_nodeint - insert node at beggining
  *@head: pointer to a list
  *@n: element of node
  *Return: pointer to fist node
  */

#include "lists.h"
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	if (*head == NULL)
	{
		*head = temp;
		temp->next = NULL;
	}
	else
	{
		temp->next = *head;
		*head = temp;
	}
	return (temp);
}
