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
	int *ptr;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	ptr = malloc(sizeof(size) * nmemb);
	if (ptr == NULL)
		return (NULL);
	while (i < (nmemb - 1))
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);

}
