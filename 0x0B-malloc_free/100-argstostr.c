#include "main.h"
#include <stddef.h>
/**
* argstostr - concatenates all the arguments of your program
* @ac: number of arguments
* @av: array of arguments
*
* Return: pointer to the new string
*/


char *argstostr(int ac, char **av)
{
	char *str;
	int  i, j, buff_idex = 0;
	int MAX_ARG_LEN = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			MAX_ARG_LEN++;
		}
	}

	if (ac == 0 || av == NULL)
		return (NULL);
	str = malloc(sizeof(char) * (ac * (MAX_ARG_LEN + 1) + 1));
	if (str == NULL)
	{
		free(str);
		return (NULL);
	}
	str[buff_idex] = '\0';

	for (i = 1; i < ac; i++)
	{
		if (i > 1)/*add a space bettwen the strings*/
		{
			str[buff_idex++] = ' ';
		}
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[buff_idex++] = av[i][j];
		}
		str[buff_idex] = '\0';
		}
		return (str);
}
