/**
  * _strncat - concanate two strings
  *@dest: 1st string
  *@src: 2nd string
  *@n: whre to trancate the string
  *Return: pointer to the new string
  */
#include "main.h"
char *_strncat(char *dest, char *src, int n)
{
	int len, j;
	char lc;

	len = 0;
	lc = src[n];

	while (dest[len] != '\0')
		++len;

	for (j = 0; src[j] < lc; ++j, ++len)
		dest[len] = src[j];
	dest[len] = '\0';
	return (dest);
}

