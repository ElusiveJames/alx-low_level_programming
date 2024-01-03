/**
  * _puts - print string followeed by a new line to stdout
  * @str: string passed
 */
#include "main.h"
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
