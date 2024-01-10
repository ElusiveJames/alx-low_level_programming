/**
  *_strchr - find a char in a string
  *@s: sring passed
  *@c: character to be located
  *Return: pointer to cif found or null if absent
  */
#include <stddef.h>
#include "main.h"
char *_strchr(char *s, char c)
{
	char ch = c;

	while (*s != '\0' && *s != c)
		s++;
	if (*s == ch)
		return (s);
	return (NULL);

}

