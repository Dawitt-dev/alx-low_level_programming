#include "main.h"
/**
 * binary_to_uint - a fun converts a binary number to an unsigned int
 *@b: a pointer to a character
 *
 * Return: NULL,0 0r the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int r = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (*b)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		r = (r * 2) + (*b - '0');
		b++;
	}
	return (r);

}
