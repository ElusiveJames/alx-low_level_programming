/**
  * rev_string - reverse a string
  * @s: string passed
  */
#include "main.h"
void rev_string(char *s)
{
	int i, len;
	char ns;

	i = 0;
	len = _strlen(s) - 1;

	while (len >= i)
	{
		ns = s[len];
		s[len] = s[i];
		s[i] = ns;
		len--;
		i++;
	}
}

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
