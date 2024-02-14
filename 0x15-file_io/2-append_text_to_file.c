#include "main.h"
#include <unistd.h>
/**
  *append_text_to_file - appending
  *@filename: file to use
  *@text_content: string to  apppend
  *Return: 1 on success
  */
#include "main.h"
int append_text_to_file(const char *filename, char *text_content)
{
	int count = 0;
	int output = 0;
	int fd = 0;

	if (filename != NULL)
		fd = open(filename, O_WRONLY | O_APPEND);
	else
		return (-1);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[count] != '\0')
			count++;
	}
	else
		return (1);

	output = write(fd, text_content, count);
	if (output == -1)
		return (-1);
	close(fd);
	return (1);
}
