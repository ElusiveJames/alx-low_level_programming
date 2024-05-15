#include "main.h"
/**
* _isupper - cheks for uppercase character
* @c: character for testing
* Return: 1 if uppercase 0 otherwise
*/
int _isupper(int c)
{
	int i;

	for (i  = 65; i <= 90; i++)
	{
		if (c == i)
			return (1);
		continue;
	}
	return (0);
}
