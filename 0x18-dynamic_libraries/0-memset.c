#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: pointer to the block of memory to fill
 * @n: number of bytes to be set
 * @b: the value to be set
 * Return: Always to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;


	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);

}
