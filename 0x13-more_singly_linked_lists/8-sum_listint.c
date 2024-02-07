/**
  *sum_listint - add lelemts of node in list
  *@head: pointer to list
  *Return: sum;
  */

#include "lists.h"
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	else
	{
		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}
	return (sum);
}
