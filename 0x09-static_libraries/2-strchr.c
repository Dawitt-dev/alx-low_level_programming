#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string
 *@c: character to be located
 *@s: string
 * Return: c or Null
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	return (NULL);
}
