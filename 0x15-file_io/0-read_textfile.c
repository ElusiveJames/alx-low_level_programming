/**
  *read_textfile - read a file int he system
  *@filename: file ion the system
  *@letters: character to be read
  *Return: 0  error else number of letters read and printed
  */

#include <stdio.h>
#include "main.h"
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	void *buffer;
	ssize_t  re_read, re_write;

	if (filename == NULL)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	re_read = read(fd, buffer, letters);
	if (re_read == -1)
	{
		free(buffer);
		return (0);
	}
	re_write = write(1, buffer, re_read);
	if (re_write == -1 || re_write != re_read)
	{
		return (0);
	}
	free(buffer);
	close(fd);
	return (re_write);
}

