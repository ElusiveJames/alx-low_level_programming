#include "main.h"
/**
* _calloc - allocates memory for an array
* @nmemb: number of elements
* @size: size of each element
* Return: pointer to the allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	void *ptr;
	char *ptr_char;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	ptr_char = (char *)ptr;
	for (; i < nmemb * size; i++)
		ptr_char[i] = 0;
	return (ptr);

}
