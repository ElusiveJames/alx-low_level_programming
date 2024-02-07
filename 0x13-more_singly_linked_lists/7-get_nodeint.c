/**
  *get_nodeint_at_index -print nth node
  *@head: pointer to list
  *@index: position of a node
  *Return: nth node
  */
#include "lists.h"
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	else
	{
		while (x != index)
		{
			head = head->next;
			x++;

		}
	}
	return (head);
}
