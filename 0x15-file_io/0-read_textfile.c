#include "holberton.h"
/**
* read_textfile - reads a text file and prints it to the POSIX standard output
*
* @filename: name of the file
*
* @letters: number of elements to read and print
*
* Return: the actual number of letters it could read and print, or 0 if write
* fails or does not write the expected amount of bytes, or if filename is NULL
* or if the file can not be opened or read
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, num_bytes, w;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
		return (0);

	num_bytes = read(fd, buf, letters);

	if (num_bytes == 0)
	{
		free(buf);
		close(fd);
		return (0);
	}
	else
	{
		w = write(STDOUT_FILENO, buf, num_bytes);

		if (w == 0)
		{
			free(buf);
			close(fd);
			return (0);
		}
	}
	free(buf);
	close(fd);
	return (num_bytes);
}
