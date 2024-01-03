/**
  * puts2 - print character on even index positon
  * @str: string passed
  */
#include "main.h"
void puts2(char *str)
{
	int i, len;

	len = _strlen(str) - 1;

	for (i = 0; i <= len; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
/**
   * _strlen - find leng of a string
   * @s: the actual string passsed
   * Return: size of the string
   */

int _strlen(char *s)
{
int size = 0;
int i;

for (i = 0; s[i] != '\0'; i++)
size++;
return (size);
}

