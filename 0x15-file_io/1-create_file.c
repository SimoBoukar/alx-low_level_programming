#include"main.h"

/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: text to write
 *
 * Return: 1 on sucess, 0 on faillure
*/

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t num_bytes = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (len)
		num_bytes = write(fd, text_content, len);

	close(fd);
	return (num_bytes == len ? 1 : -1);
}

/**
 * _strlen - returns the length of a string
 * @s: the string whose length to check
 *
 * Return: integer length of string
*/

int _strlen(char *s)
{
	int len_str = 0;

	if (!s)
		return (0);
	while (*s++)
		len_str++;
	return (len_str);
}
