/**
 *add_node_end - inserting node at end of string
 *@head: pointer to string
 *@str: element of node structure
 *Return: pointer to new node
 */
#include "lists.h"

list_t *add_node_end(list_t **head, const char *str)
{
	list_t  *ptr, *temp;

	ptr = *head;
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	temp->len = strlen(str);
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
