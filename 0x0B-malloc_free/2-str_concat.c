#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * str_concat - concatenates two strings
 *@s1: string to concatenate
 *@s2: string to concatenate
 * Return: to a newly allocated space or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *nstr;
	int len1 = 0;
	int len2 = 0;
	int i;
	int j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		len1++;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		len2++;
	}
	nstr = malloc(sizeof(char) * (len1 + len2 + 1));

	if (nstr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		nstr[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		nstr[len1 + j] = s2[j];
	}
	nstr[len1 + len2] = '\0';

	return (nstr);
}
