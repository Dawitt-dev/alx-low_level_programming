#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *@str: parameter string
 *
 * Return: returns a pointer to the duplicated string or NULL
 */
char *_strdup(char *str)
{
	char *nstr;
	int i;
	int len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	nstr = malloc(sizeof(char) * len + 1);

	if (nstr == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		nstr[i] = str[i];
	}
	return (nstr);


}
