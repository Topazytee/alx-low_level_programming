#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Reads text from a file and prints it to STDOUT.
 * @filename: The name of the file to read.
 * @letters: The maximum number of bytes to read.
 * Return: w- The actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	t = read(fd, buff, letters);
	w = write(STDOUT_FILENO, buff, t);

	/* Free the buffer and close the file */
	free(buff);
	close(fd);
	return (w);
}
