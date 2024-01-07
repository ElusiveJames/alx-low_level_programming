/**
  *_strcmp - compare two strings
  *@s1: string to be compared
  *@s2: string to be compared
  *Return: returns the difference if any
  */
#include "main.h"
int _strcmp(char *s1, char *s2)
{
	int i = 0, x = 0;

	while (1)
	{
		if (s1[i] == '\0')
		{
			x = s2[i];
			break;
		}
		else if (s2[i] == '\0')
		{
			x = s1[i];
			break;
		}
		else if (s1[i] != s2[i])
		{
			x = s1[i] - s2[i];
			break;
		}
		else if (s1[i] == '\0' && s2[i] == '\0')
		{
			break;
		}
		else
		{
			i++;
		}
	}
	return (x);
}
