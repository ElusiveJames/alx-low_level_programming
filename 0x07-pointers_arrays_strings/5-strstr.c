#include "main.h"
/**
* _strstr - locates a substring
* @haystack: string
* @needle: substring
* Return: pointer
*/
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;
	int haystack_len = 0, needle_len = 0;

	while (haystack[haystack_len] != '\0')
		haystack_len++;
	while (needle[needle_len] != '\0')
		needle_len++;
	if (needle_len != 0)
	{
		for (i = 0; i < haystack_len; i++)
		{
			for (j = 0; j < needle_len; j++)
			{
				if (haystack[i + j] != needle[j])
					break;
				if (needle[j + 1] == '\0')
					return (haystack + i);
			}
		}
		return (NULL);
	}
	return (NULL);
}
