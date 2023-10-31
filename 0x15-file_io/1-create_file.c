#include "main.h"
#include <fcntl.h>
/**
 * create_file - Creates a file with specified content and permissions
 * @filename: Name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	char *ptr;
	ssize_t bytesWritten;
	size_t len;

	if (filename == NULL)
	{
		return (-1);
	}
	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (file == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		ptr = text_content;
		len = 0;

		while (*ptr != '\0')
		{
			len++;
			ptr++;
		}
		bytesWritten = write(file, text_content, len);

		if (bytesWritten != (ssize_t)len)
		{
			close(file);
			return (-1);
		}
	}

	close(file);
	return (1);
}
