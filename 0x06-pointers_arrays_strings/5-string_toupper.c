/**
  *string_toupper- convert character to uppercase
  *@str: string considerd
  *Return: uppercase string
  */
#include "main.h"
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
