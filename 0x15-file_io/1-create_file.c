/**
  *create file -  create filet
  *@filename:  this file
  *@text_content: this string
  *Return: 1 on success
  */
#include "main.h"
 int create_file(const char *filename, char *text_content)
{
	int fd;
	int count = 0;
	int out = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNK, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[count] != '\0')
			count++;
	}
	else
	{
		close(fd);
		return (1);
	}
	output = write(fd, text_content, count);
	if (output == -1 || output != count)
		return (-1);

	close(fd);
	return (1);
}
