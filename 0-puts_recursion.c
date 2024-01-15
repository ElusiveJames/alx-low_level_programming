/**
  *_puts_recursion - print a string recursively
  *@s: string parsed
  */
#include "main.h"
void _puts_recursion(char *s)
{
	int i = 0;
	
	if (*s == 0)
	{
		_putchar('\n');
		return;
	}
	_putchar(s[i]);
	_puts_recursion( s + 1);
}	
