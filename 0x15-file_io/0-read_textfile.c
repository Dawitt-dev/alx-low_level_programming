#include "main.h"
/**
 * read_textfile -  a function that reads a text file and prints
 *@letters:  is the number of letters
 *@filename: file name
 * Return: actual number of letters or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char *buffer;
	ssize_t bytesRead;
	ssize_t bytesWritten;

	if (filename == NULL)
	{
		return (0);
	}
	file = fopen(filename, "r");

	if (file == NULL)
	{
		return (0);
	}
	buffer = (char *)malloc((letters + 1) * sizeof(char));

	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}
	bytesRead = fread(buffer, sizeof(char), letters, file);
	fclose(file);

	if (bytesRead == 0)
	{
		free(buffer);
		return (0);
	}
	buffer[bytesRead] = '\0';
	bytesWritten = fwrite(buffer, sizeof(char), bytesRead, stdout);

	free(buffer);
	if (bytesWritten != bytesRead)
	{
		return (0);
	}
	return (bytesWritten);
}
