#include "main.h"
#include <stddef.h>
/**
 * _strpbrk -  searches a string for any of a set of bytes
 *@s: string to be seached
 *@accept: string to be located
 * Return: always s or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		const char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
				return (s);
			a++;
		}
		s++;
	}

	return (NULL);
}
