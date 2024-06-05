#include "main.h"

int _palindrome(char *s, int start, int end);
/**
* is_palindrome - Checks if a string is a palindrome
* @s: string to evaluate
* Return: 1 if palindrome, 0 if not
*/

int is_palindrome(char *s)
{

int end = 0;

while (s[end] != '\0')
{
	end += 1;
}
	return  (_palindrome(s, 0, end - 1));
}

/**
* _palindrome - Checks if a string is a palindrome
* @s: string to evaluate
* @start: start of string
* @end: end of string
* Return: 1 if palindrome, 0 if not
*/
int _palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (_palindrome(s, start + 1, end - 1));
}
