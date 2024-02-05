/**
  *add_node - insert node at begiining of a list
  *@head: pointer to list
  *@str:  elemment of the node
  *Return: pointer to start of the list
  */

#include "lists.h"

list_t *add_node(list_t **head, const char *str)
{
	list_t  *temp;

	temp = (struct list_s *)malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	temp->len = strlen(str);
	if (head == NULL)
	{
		*head = temp;
		 temp->next = NULL;
	}
	else
	{
		temp->next = *head;
		*head = temp;
	}
	return (*head);
}
