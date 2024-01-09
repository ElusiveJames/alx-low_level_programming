/**
  *_memset - fill n bytes of s with char b
  *@b: value used to fill the mem
  *@n: mem bytes filled
  *@s: string  held in memory
  *Return: a pointer to string s
  */
#include "main.h"
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
