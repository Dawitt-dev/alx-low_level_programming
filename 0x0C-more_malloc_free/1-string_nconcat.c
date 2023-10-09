#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * string_nconcat - concatenates two strings
 *@s1: string 1
 *@s2: string 2
 *@n: size
 * Return: s1+s2 or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int len1, len2, i, j;

	len1 = 0;
	len2 = 0;

	for (i = 0; s1[i] != '\0'; i++)
	{
		len1++;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		len2++;
	}
	if (n >= len2)
	{
		n = len2;
	}
	str = malloc(sizeof(char) * (len1 + n + 1));

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		str[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		str[len1 + j] = s2[j];
	}
	str[len1 + n] = '\0';

	return (str);
}
