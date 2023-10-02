#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: string capitalized
 * Return: Always 0
 */
char *cap_string(char *s)
{
	int i;
	int j;
	char lm[13] = {' ', '\t', '\n', ',', ';', '.',
			'!', '?', '"', '(', ')', '{', '}'};

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
		for (j = 0 ; j < 13 ; j++)
		{
			if (s[i] == lm[i])
			{
				if (s[i] + 1 >= 'a' && s[i + 1] <= 'z')
					s[i + 1] = s[i + 1] - 32;
			}
		}
	}
	return (s);
}
