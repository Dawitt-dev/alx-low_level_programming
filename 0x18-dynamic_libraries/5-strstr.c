#include "main.h"
#include <stdio.h>
/**
 * _strstr - locates a substring
 *@needle: sub string
 *@haystack: sub string
 * Return: NULL or 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *eins = haystack;
		char *zwei = needle;

		while (*eins == *zwei && *zwei != '\0')
		{
			eins++;
			zwei++;
		}

		if (*zwei == '\0')
			return (haystack);

	}

	return (NULL);

}
