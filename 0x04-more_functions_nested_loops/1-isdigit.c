#include "main.h"
/**
* _isdigit - checks for a digit
* @c: test argument
* Return: 1 if digit 0 otherwise
*/
int _isdigit(int c)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (c == i)
			return (1);
		continue;
	}
	return (0);
}
