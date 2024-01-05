/**
  * _strcat - concanate two strings
  *@dest: 1st string
  *@src: 2nd string
  *Return: pointer to the new string
  */
#include "main.h"
char *_strcat(char *dest, char *src)
{
	int len, j;

	len = 0;

	while (dest[len] != '\0')
		++len;

	for (j = 0; src[j] != '\0'; ++j, ++len)
		dest[len] = src[j];
	dest[len] = '\0';
	return (dest);
}

