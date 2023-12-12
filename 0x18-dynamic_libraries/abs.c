#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 *@i: parameter
 *Return: -i or i;
 */
int _abs(int i)
{
	if (i < 0)
		return (-i);
	else if (i >= 0)
	{
		return (i);
	}

	return (0);
}
