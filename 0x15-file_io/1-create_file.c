#include "holberton.h"
/**
* _strlen - returns the length of a string
*
* @s: pointer
*
* Return: length
*/
int _strlen(const char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
/**
* create_file - creates a file
*
* @filename: name of the new file
*
* @text_content: content of the new file
*
* Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int fd, w;
	unsigned int len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = _strlen(text_content);

		w = write(fd, text_content, len);

		if (w == 0)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
