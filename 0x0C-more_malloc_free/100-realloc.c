#include "main.h"
/**
* _realloc - reallocates a memory block using malloc and free
* @ptr: pointer to the memory previously allocated
* @old_size: size, in bytes, of the allocated space for ptr
* @new_size: new size, in bytes, of the new memory block
* Return: pointer to the new memory block
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	void *old_ptr;
	unsigned int i;

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		return (new_ptr);
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		free(new_ptr);
		return (NULL);
	}
	old_ptr = ptr;

	if (new_size > old_size)
	{
		char *new_ptr_char = (char *)new_ptr;
		char *old_ptr_char = (char *)old_ptr;
	for (i = 0; i < old_size; i++)
		new_ptr_char[i] = old_ptr_char[i];
	}
	if (new_size == old_size)
		return (new_ptr);
	free(old_ptr);
	return (new_ptr);
}
