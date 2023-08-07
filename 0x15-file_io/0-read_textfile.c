#include "main.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - Read and write.
 * @filename: Pointer to the name of the text file to read.
 * @letters: The maximum number of characters to read from the file.
 *
 * Return: The number of characters successfully
 * read and written to the standard output,
 * or 0 if an error occurs or if the file is empty.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, n_write, n_read;
	char *buff;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd < 0)
		return (0);

	buff = malloc(letters + 1);

	if (buff == NULL)
		return (0);

	n_read = read(fd, buff, letters);

	if (n_read < 0)
		return (0);

	n_write = write(STDOUT_FILENO, buff, n_read);

	if (n_write != n_read)
		return (0);

	close(fd);
	free(buff);

	return (n_write);

}
