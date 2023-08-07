#include "main.h"
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
/**
 * create_file - Create a new file and write text content to it.
 * @filename: Pointer to the name of the file to create.
 * @text_content: Pointer to the text content to write to the file.
 *
 * Return:
 * 1 on success, -1 on failure, or
 * 1 if the file already exists and text_content is NULL.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len;

	if (filename == NULL)
		return (-1);

	fd = open(
		filename,
		O_WRONLY | O_CREAT | O_TRUNC,
		S_IRUSR | S_IWUSR
	);
	if (fd < 0)
		return (-1);

	if (text_content == NULL)
		return (1);

	len = strlen(text_content);
	if (write(fd, text_content, len) != len)
		return (-1);

	close(fd);
	return (1);
}
