#include"main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of file to create
 * @text_content: text to write
 *
 * Return: 1 on success, 0 on faillure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t num_bytes = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);
	if (len)
		num_bytes = write(fd, text_content, len);

	close(fd);
	return (num_bytes == len ? 1 : -1);
}

/**
 * _strlen - return length of a string
 * @s: the string whose length to check
 *
 * Return: integer length of str
*/

int _strlen(char *s)
{
	int length = 0;

	if (!s)
		return (0);
	while (*s++)
		length++;
	return (length);
}
