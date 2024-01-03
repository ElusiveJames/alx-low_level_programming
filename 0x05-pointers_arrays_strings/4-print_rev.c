/**
  * print_rev - print string in reverse
  * @s: string passed
 */
#include "main.h"
void print_rev(char *s)
{
	int i = 0, len =  0;

	len = _strlen(s);

	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);
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
