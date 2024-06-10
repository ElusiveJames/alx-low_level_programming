#include "main.h"
/**
* string_nconcat - concatenates two strings
* @s1: 1st string
* @s2: 2nd string
* @n: whre to trancate the string
* Return: pointer to the new string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int  i, len = 0;
	unsigned int j;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
	{
		len++;
	}
	for (j = 0; j < n && s2[j] != '\0'; j++)
	{
		len++;
	}
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	str[i] = ' ';
	for (j = 0; j < n && s2[j] != '\0'; j++)
		str[i++] = s2[j];
	str[i] = '\0';
	return (str);

}
