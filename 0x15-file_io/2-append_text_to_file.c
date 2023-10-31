#include "main.h"
#include <fcntl.h>
/**
 * append_text_to_file - Appends text to the end of a file
 * @filename: Name of the file
 * @text_content: NULL terminated string to append
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, len = 0;
	char *ptr;

	if (filename == NULL)
	{
		return (-1);
	}
	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		ptr = text_content;

		while (*ptr != '\0')
		{
			len++;
			ptr++;
		}
		if (write(file, text_content, len) != len)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}
