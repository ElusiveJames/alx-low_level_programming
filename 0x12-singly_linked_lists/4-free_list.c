/**
 *free_list - free list in memeory
 *@head: pointer to list header
 */
#include "lists.h"


void free_list(list_t *head)
{
	list_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
	}
}
