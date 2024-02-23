/**
  *append_text_to_file - append  to  file
  *@filename:  this file
  *@text_content: string to insert to file
  *Return: 1 on success
  */
#include "main.h"
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int count = 0;
	int re_write;

	if (filename == NULL)
	{
		return (-1);
	}
	else
	{
		fd = open(filename, O_WRONLY | O_APPEND);
		if (fd == -1)
		{
		return (-1);
		}
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
	if (re_write == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}

