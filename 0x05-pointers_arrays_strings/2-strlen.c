/**
  * _strlen - find leng of a string
  * @s: the actual string passsed
  * Return: size of the string
  */
#include "main.h"
int _strlen(char *s)
{
	int size = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
		size++;
	return (size);
}

