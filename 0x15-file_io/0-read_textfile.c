#include "main.h"
/**
 * read_textfile -  a function that reads a text file and prints
 *@letters:  is the number of letters
 *@filename: file name
 * Return: actual number of letters or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
	{
		return (0);
	}

	FILE *file = fopen(filename, "r");

	if (file == NULL)
	{
		return (0);
	}

	char *buffer = (char *)malloc(letters + 1);

	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}

	ssize_t bytesRead = fread(buffer, 1, letters, file);

	if (bytesRead < 0)
	{
		fclose(file);
		free(buffer);
		return (0);
	}
	buffer[bytesRead] = '\0';

	ssize_t bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);

	fclose(file);
	free(buffer);

	if (bytesWritten != bytesRead)
	{
		return (0);
	}

	return (bytesWritten);
}
