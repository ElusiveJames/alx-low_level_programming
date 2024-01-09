/**
  *_memcpy - copies n bytes  of a string to another
  *@dest: final string
  *@src: source string
  *@n: bytes copied
  *Return: final string
  */
#include "main.h"
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (src[i] < src[n])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
