/**
  *read_textfile - using fd to read files
  *@filename: location of the file
  *@letters: character size
  *Return: string of characters
  */
#include "main.h"
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nb_read, nb_write;
	char *buf;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}
	nb_read = read(fd, buf, letters);
	close(fd);
	if (nb_read == -1)
	{
		free(buf);
		return (0);
	}
	nb_write = write(STDOUT_FILENO, buf, nb_read);
	free(buf);
	if (nb_write == -1 || nb_write != nb_read)
	{
		return (0);
	}
	return (nb_write);
}
