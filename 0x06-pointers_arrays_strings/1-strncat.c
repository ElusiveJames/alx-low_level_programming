#include "main.h"
/**
  * _strncat - concanate two strings
  *@dest: 1st string
  *@src: 2nd string
  *@n: whre to trancate the string
  *Return: pointer to the new string
  */

char *_strncat(char *dest, char *src, int n)
{
	int len, j = 0;


	len = 0;


	while (dest[j++])
		len++;
	for (j = 0; src[j] && j < n; j++)
		dest[len++] = *(src + j);
	dest[len] = '\0';
	return (dest);
}

