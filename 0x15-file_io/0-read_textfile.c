#include"main.h"

/**
 * read_textfile - reads a text file and prints
 * it to the POSIX standard output.
 * @filename: name of file to read
 * @letters: number of bytes to read
 *
 * Return: num of bytes readed/printed
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t num_bytes;
	char buf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	fd = open(filename, 0_RDONLY);
	if (fd == -1)
		return (0);
	num_bytes = read(fd, &buf[0], letters);
	num_bytes = write(STDOUT_FILENO, &buf[0], num_bytes);

	close(fd);
	return (num_bytes);
}
