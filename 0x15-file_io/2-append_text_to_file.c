#include "main.h"
#include <fcntl.h>
#include <string.h>
#include <unistd.h>

/**
 * append_text_to_file - Append text content to an existing file.
 *
 * @filename: Pointer to the path of the file
 * to which the text content will be appended.
 * @text_content: Pointer to the text content to append to the file.
 *
 * Return:
 * 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len;

	if (filename == NULL)
	return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd < 0)
	return (-1);

	if (text_content == NULL)
	return (1);

	len = strlen(text_content);
	if (write(fd, text_content, len) != len)
	{
	return (-1);
	}
	close(fd);
	return (1);
}
