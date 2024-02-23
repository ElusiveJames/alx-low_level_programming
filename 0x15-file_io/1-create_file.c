/**
  *create_file -  create  a new file if != existt
  *@filename:  this file
  *@text_content: string to insert to file
  *Return: 1 on success
  */
#include "main.h"
int create_file(const char *filename, char *text_content)
{
	int fd;
	int count = 0;
	int re_write;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[count] != '\0')
		{
			count++;
		}
	}
	else
	{
		close(fd);
		return (1);
	}

	re_write = write(fd, text_content, count);
	if (re_write == -1 || count != re_write)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
