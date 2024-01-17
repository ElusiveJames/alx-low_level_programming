/**
  *str_concat - return a pointer to concanted string
  *@s1: string 1
  *@s2: string 2
  *Return: pointer to concanted string
  */
#include "main.h"
#include <stdlib.h>
#include <stdio.h>
char *str_concat(char *s1, char *s2)
{
	int i, j, k, m;
	char *str;
	int  t_len;

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	t_len = i + j;
	str = (char *)malloc(sizeof(char) * (t_len + 1));
	if (str == NULL)
	{
		free(str);
		return (NULL);
	}
	for (k = 0; s1[k] != '\0'; k++)
		str[k] = s1[k];
	for (m = 0; m <= j; k++, m++)
		str[k] = s2[m];
	return (str);
}
