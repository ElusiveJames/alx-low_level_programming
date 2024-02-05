/**
 *free_list - free list in memeory
 *@head: pointer to list header
 */

#include "lists.h"
void free_list(list_t *head)
{

	list_t *ptr = head;

	while (ptr != NULL)
	{
		head  = head->next;
		free(ptr->str);
		free(ptr);
	}
}

