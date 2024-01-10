/**
  *_strpbrk- search a string for any of set of bytes
  *@s: initial string searched
  *@accept: source of chr
  *Return: pointer to first occurence of match
  */
#include <stddef.h>
#include "main.h"
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	p = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				p = &s[i];
				return (p);
			}
		}

	}
	return (p);
}
